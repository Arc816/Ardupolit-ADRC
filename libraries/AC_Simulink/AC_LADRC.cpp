//
// File: AC_LADRC.cpp
//
// Code generated for Simulink model 'AC_LADRC'.
//
// Model version                  : 2.6
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Tue Jun 13 10:38:52 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "AC_LADRC.h"
#include "rtwtypes.h"

// Model step function
void AC_LADRC::step(real32_T arg_attitude_error[3], real32_T arg_rate_ff[3],
                    real32_T arg_rate_meas[3], real32_T (&arg_Output)[3])
{
  real32_T rtb_Gain1;
  real32_T rtb_Gain1_e;
  real32_T rtb_Gain1_p;
  real32_T rtb_Subtract;
  real32_T tmp;
  real32_T tmp_0;

  // Sum: '<S22>/Subtract' incorporates:
  //   Gain: '<S22>/Gain'
  //   Inport: '<Root>/rate_meas'
  //   UnitDelay: '<S22>/Unit Delay'

  rtb_Subtract = arg_rate_meas[0] - (AC_LADRC_P.Gain_Gain[0] *
    AC_LADRC_DW.UnitDelay_DSTATE[0] + AC_LADRC_P.Gain_Gain[1] *
    AC_LADRC_DW.UnitDelay_DSTATE[1]);

  // Gain: '<S21>/Gain1' incorporates:
  //   Gain: '<Root>/Gain'
  //   Gain: '<S21>/Gain'
  //   Gain: '<S22>/Gain1'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Sum: '<Root>/Sum'
  //   Sum: '<S21>/Sum'
  //   Sum: '<S21>/Sum1'
  //   Sum: '<S22>/Add'
  //   UnitDelay: '<S22>/Unit Delay'

  rtb_Gain1 = (((AC_LADRC_P.ANG_RLL_P * arg_attitude_error[0] + arg_rate_ff[0])
                - (AC_LADRC_P.Gain1_Gain[0] * rtb_Subtract +
                   AC_LADRC_DW.UnitDelay_DSTATE[0])) * AC_LADRC_P.Gain_Gain_h -
               (AC_LADRC_P.Gain1_Gain[1] * rtb_Subtract +
                AC_LADRC_DW.UnitDelay_DSTATE[1])) * AC_LADRC_P.Gain1_Gain_n;

  // Sum: '<S22>/Add1' incorporates:
  //   Gain: '<S22>/Gain2'
  //   Gain: '<S22>/Gain3'
  //   Gain: '<S22>/Gain4'
  //   UnitDelay: '<S22>/Unit Delay'

  tmp = AC_LADRC_P.Gain2_Gain[0] * AC_LADRC_DW.UnitDelay_DSTATE[0] +
    AC_LADRC_DW.UnitDelay_DSTATE[1] * AC_LADRC_P.Gain2_Gain[2];
  tmp_0 = AC_LADRC_DW.UnitDelay_DSTATE[0] * AC_LADRC_P.Gain2_Gain[1] +
    AC_LADRC_DW.UnitDelay_DSTATE[1] * AC_LADRC_P.Gain2_Gain[3];
  AC_LADRC_DW.UnitDelay_DSTATE[0] = (AC_LADRC_P.Gain3_Gain[0] * rtb_Gain1 +
    AC_LADRC_P.Gain4_Gain[0] * rtb_Subtract) + tmp;
  AC_LADRC_DW.UnitDelay_DSTATE[1] = (AC_LADRC_P.Gain3_Gain[1] * rtb_Gain1 +
    AC_LADRC_P.Gain4_Gain[1] * rtb_Subtract) + tmp_0;

  // Sum: '<S11>/Subtract' incorporates:
  //   Gain: '<S11>/Gain'
  //   Inport: '<Root>/rate_meas'
  //   UnitDelay: '<S11>/Unit Delay'

  rtb_Subtract = arg_rate_meas[1] - (AC_LADRC_P.Gain_Gain_g[0] *
    AC_LADRC_DW.UnitDelay_DSTATE_c[0] + AC_LADRC_P.Gain_Gain_g[1] *
    AC_LADRC_DW.UnitDelay_DSTATE_c[1]);

  // Gain: '<S10>/Gain1' incorporates:
  //   Gain: '<Root>/Gain1'
  //   Gain: '<S10>/Gain'
  //   Gain: '<S11>/Gain1'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Sum: '<Root>/Sum1'
  //   Sum: '<S10>/Sum'
  //   Sum: '<S10>/Sum1'
  //   Sum: '<S11>/Add'
  //   UnitDelay: '<S11>/Unit Delay'

  rtb_Gain1_p = (((AC_LADRC_P.ANG_PIT_P * arg_attitude_error[1] + arg_rate_ff[1])
                  - (AC_LADRC_P.Gain1_Gain_g[0] * rtb_Subtract +
                     AC_LADRC_DW.UnitDelay_DSTATE_c[0])) *
                 AC_LADRC_P.Gain_Gain_i - (AC_LADRC_P.Gain1_Gain_g[1] *
    rtb_Subtract + AC_LADRC_DW.UnitDelay_DSTATE_c[1])) * AC_LADRC_P.Gain1_Gain_p;

  // Sum: '<S11>/Add1' incorporates:
  //   Gain: '<S11>/Gain2'
  //   Gain: '<S11>/Gain3'
  //   Gain: '<S11>/Gain4'
  //   UnitDelay: '<S11>/Unit Delay'

  tmp = AC_LADRC_P.Gain2_Gain_k[0] * AC_LADRC_DW.UnitDelay_DSTATE_c[0] +
    AC_LADRC_DW.UnitDelay_DSTATE_c[1] * AC_LADRC_P.Gain2_Gain_k[2];
  tmp_0 = AC_LADRC_DW.UnitDelay_DSTATE_c[0] * AC_LADRC_P.Gain2_Gain_k[1] +
    AC_LADRC_DW.UnitDelay_DSTATE_c[1] * AC_LADRC_P.Gain2_Gain_k[3];
  AC_LADRC_DW.UnitDelay_DSTATE_c[0] = (AC_LADRC_P.Gain3_Gain_g[0] * rtb_Gain1_p
    + AC_LADRC_P.Gain4_Gain_g[0] * rtb_Subtract) + tmp;
  AC_LADRC_DW.UnitDelay_DSTATE_c[1] = (AC_LADRC_P.Gain3_Gain_g[1] * rtb_Gain1_p
    + AC_LADRC_P.Gain4_Gain_g[1] * rtb_Subtract) + tmp_0;

  // Sum: '<S33>/Subtract' incorporates:
  //   Gain: '<S33>/Gain'
  //   Inport: '<Root>/rate_meas'
  //   UnitDelay: '<S33>/Unit Delay'

  rtb_Subtract = arg_rate_meas[2] - (AC_LADRC_P.Gain_Gain_p[0] *
    AC_LADRC_DW.UnitDelay_DSTATE_m[0] + AC_LADRC_P.Gain_Gain_p[1] *
    AC_LADRC_DW.UnitDelay_DSTATE_m[1]);

  // Gain: '<S32>/Gain1' incorporates:
  //   Gain: '<Root>/Gain2'
  //   Gain: '<S32>/Gain'
  //   Gain: '<S33>/Gain1'
  //   Inport: '<Root>/attitude_error'
  //   Inport: '<Root>/rate_ff'
  //   Sum: '<Root>/Sum2'
  //   Sum: '<S32>/Sum'
  //   Sum: '<S32>/Sum1'
  //   Sum: '<S33>/Add'
  //   UnitDelay: '<S33>/Unit Delay'

  rtb_Gain1_e = (((AC_LADRC_P.ANG_YAW_P * arg_attitude_error[2] + arg_rate_ff[2])
                  - (AC_LADRC_P.Gain1_Gain_pm[0] * rtb_Subtract +
                     AC_LADRC_DW.UnitDelay_DSTATE_m[0])) *
                 AC_LADRC_P.Gain_Gain_gd - (AC_LADRC_P.Gain1_Gain_pm[1] *
    rtb_Subtract + AC_LADRC_DW.UnitDelay_DSTATE_m[1])) * AC_LADRC_P.Gain1_Gain_c;

  // Outport: '<Root>/Output'
  arg_Output[0] = rtb_Gain1;
  arg_Output[1] = rtb_Gain1_p;
  arg_Output[2] = rtb_Gain1_e;

  // Sum: '<S33>/Add1' incorporates:
  //   Gain: '<S33>/Gain2'
  //   UnitDelay: '<S33>/Unit Delay'

  tmp = AC_LADRC_P.Gain2_Gain_h[0] * AC_LADRC_DW.UnitDelay_DSTATE_m[0] +
    AC_LADRC_DW.UnitDelay_DSTATE_m[1] * AC_LADRC_P.Gain2_Gain_h[2];
  tmp_0 = AC_LADRC_DW.UnitDelay_DSTATE_m[0] * AC_LADRC_P.Gain2_Gain_h[1] +
    AC_LADRC_DW.UnitDelay_DSTATE_m[1] * AC_LADRC_P.Gain2_Gain_h[3];

  // Update for UnitDelay: '<S33>/Unit Delay' incorporates:
  //   Gain: '<S33>/Gain2'
  //   Gain: '<S33>/Gain3'
  //   Gain: '<S33>/Gain4'
  //   Sum: '<S33>/Add1'

  AC_LADRC_DW.UnitDelay_DSTATE_m[0] = (AC_LADRC_P.Gain3_Gain_a[0] * rtb_Gain1_e
    + AC_LADRC_P.Gain4_Gain_p[0] * rtb_Subtract) + tmp;
  AC_LADRC_DW.UnitDelay_DSTATE_m[1] = (AC_LADRC_P.Gain3_Gain_a[1] * rtb_Gain1_e
    + AC_LADRC_P.Gain4_Gain_p[1] * rtb_Subtract) + tmp_0;
}

// Model initialize function
void AC_LADRC::initialize()
{
  // InitializeConditions for UnitDelay: '<S22>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE[0] = AC_LADRC_P.UnitDelay_InitialCondition;

  // InitializeConditions for UnitDelay: '<S11>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE_c[0] = AC_LADRC_P.UnitDelay_InitialCondition_j;

  // InitializeConditions for UnitDelay: '<S33>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE_m[0] = AC_LADRC_P.UnitDelay_InitialCondition_p;

  // InitializeConditions for UnitDelay: '<S22>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE[1] = AC_LADRC_P.UnitDelay_InitialCondition;

  // InitializeConditions for UnitDelay: '<S11>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE_c[1] = AC_LADRC_P.UnitDelay_InitialCondition_j;

  // InitializeConditions for UnitDelay: '<S33>/Unit Delay'
  AC_LADRC_DW.UnitDelay_DSTATE_m[1] = AC_LADRC_P.UnitDelay_InitialCondition_p;
}

// Model terminate function
void AC_LADRC::terminate()
{
  // (no terminate code required)
}

// Constructor
AC_LADRC::AC_LADRC() :
  AC_LADRC_DW(),
  AC_LADRC_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
AC_LADRC::~AC_LADRC() = default;

// Real-Time Model get method
AC_LADRC::RT_MODEL_AC_LADRC_T * AC_LADRC::getRTM()
{
  return (&AC_LADRC_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
