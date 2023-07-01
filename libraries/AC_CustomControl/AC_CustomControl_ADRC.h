#pragma once

#include "AC_CustomControl_Backend.h"
#include <AC_Simulink/AC_LADRC.h>
#ifndef CUSTOMCONTROL_ADRC_ENABLED
    #define CUSTOMCONTROL_ADRC_ENABLED AP_CUSTOMCONTROL_ENABLED
#endif

#if CUSTOMCONTROL_ADRC_ENABLED

class AC_CustomControl_ADRC : public AC_CustomControl_Backend {
public:
    AC_CustomControl_ADRC(AC_CustomControl& frontend, AP_AHRS_View*& ahrs, AC_AttitudeControl_Multi*& att_control, AP_MotorsMulticopter*& motors, float dt);


    Vector3f update(void) override;
    void reset(void) override;
    
    AC_LADRC simulink_controller;
    // user settable parameters
    static const struct AP_Param::GroupInfo var_info[];

protected:
    // declare parameters here
    AP_Float param1;
    AP_Float param2;
    AP_Float param3;
};

#endif
