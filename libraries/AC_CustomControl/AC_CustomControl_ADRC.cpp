#include "AC_CustomControl_ADRC.h"
//#include <AC_Simulink/AC_LADRC.h>
#if CUSTOMCONTROL_ADRC_ENABLED

#include <GCS_MAVLink/GCS.h>

// table of user settable parameters
const AP_Param::GroupInfo AC_CustomControl_ADRC::var_info[] = {
    // @Param: PARAM1
    // @DisplayName: ADRC param1
    // @Description: Dumy parameter for ADRC custom controller backend
    // @User: Advanced
    AP_GROUPINFO("PARAM1", 1, AC_CustomControl_ADRC, param1, 0.0f),

    // @Param: PARAM2
    // @DisplayName: ADRC param2
    // @Description: Dumy parameter for ADRC custom controller backend
    // @User: Advanced
    AP_GROUPINFO("PARAM2", 2, AC_CustomControl_ADRC, param2, 0.0f),

    // @Param: PARAM3
    // @DisplayName: ADRC param3
    // @Description: Dumy parameter for ADRC custom controller backend
    // @User: Advanced
    AP_GROUPINFO("PARAM3", 3, AC_CustomControl_ADRC, param3, 0.0f),

    AP_GROUPEND
};

// initialize in the constructor
AC_CustomControl_ADRC::AC_CustomControl_ADRC(AC_CustomControl& frontend, AP_AHRS_View*& ahrs, AC_AttitudeControl_Multi*& att_control, AP_MotorsMulticopter*& motors, float dt) :
    AC_CustomControl_Backend(frontend, ahrs, att_control, motors, dt)
{
    AP_Param::setup_object_defaults(this, var_info);
    simulink_controller.initialize();
}

// update controller
// return roll, pitch, yaw controller output
Vector3f AC_CustomControl_ADRC::update(void)
{
    // reset controller based on spool state
    switch (_motors->get_spool_state()) {
        case AP_Motors::SpoolState::SHUT_DOWN:
        case AP_Motors::SpoolState::GROUND_IDLE:
            // We are still at the ground. Reset custom controller to avoid
            // build up, ex: integrator
            reset();
            break;

        case AP_Motors::SpoolState::THROTTLE_UNLIMITED:
        case AP_Motors::SpoolState::SPOOLING_UP:
        case AP_Motors::SpoolState::SPOOLING_DOWN:
            // we are off the ground
            break;
    }

// run custom controller after here
     Quaternion attitude_body, attitude_target;
    _ahrs->get_quat_body_to_ned(attitude_body);

    attitude_target = _att_control->get_attitude_target_quat();
    // This vector represents the angular error to rotate the thrust vector using x and y and heading using z
    Vector3f attitude_error;
    float _thrust_angle, _thrust_error_angle;
    _att_control->thrust_heading_rotation_angles(attitude_target, attitude_body, attitude_error, _thrust_angle, _thrust_error_angle);//

    // recalculate ang vel feedforward from attitude target model
    // rotation from the target frame to the body frame
    Quaternion rotation_target_to_body = attitude_body.inverse() * attitude_target;
    // target angle velocity vector in the body frame
    Vector3f ang_vel_body_feedforward = rotation_target_to_body * _att_control->get_attitude_target_ang_vel();


    // arducopter main attitude controller already runned
    // we don't need to do anything else

    
    Vector3f gyro_latest = _ahrs->get_gyro_latest();
 
    static real32_T arg_attitude_error[3]{ attitude_error.x, attitude_error.y, attitude_error.z };

    // '<Root>/rate_ff'
    static real32_T arg_rate_ff[3]{ ang_vel_body_feedforward.x,ang_vel_body_feedforward.y, ang_vel_body_feedforward.z };

    // '<Root>/rate_meas'
    static real32_T arg_rate_meas[3]{ gyro_latest.x, gyro_latest.y, gyro_latest.z };

    // '<Root>/Output'
    static real32_T arg_Output[3];

    simulink_controller.step(arg_attitude_error, arg_rate_ff, arg_rate_meas, arg_Output);

    // return what arducopter main controller outputted
    gcs().send_text(MAV_SEVERITY_INFO, "ADRC custom controller working");
    return Vector3f(arg_Output[0], arg_Output[1], arg_Output[2]);
}

// reset controller to avoid build up on the ground
// or to provide bumpless transfer from arducopter main controller
void AC_CustomControl_ADRC::reset(void)
{
}

#endif
