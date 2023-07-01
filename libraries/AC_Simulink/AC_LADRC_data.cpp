//
// File: AC_LADRC_data.cpp
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

// Block parameters (default storage)
AC_LADRC::P_AC_LADRC_T AC_LADRC::AC_LADRC_P{
  // Variable: ANG_PIT_P
  //  Referenced by: '<Root>/Gain1'

  3.05F,

  // Variable: ANG_RLL_P
  //  Referenced by: '<Root>/Gain'

  3.05F,

  // Variable: ANG_YAW_P
  //  Referenced by: '<Root>/Gain2'

  3.05F,

  // Computed Parameter: UnitDelay_InitialCondition
  //  Referenced by: '<S22>/Unit Delay'

  0.0F,

  // Computed Parameter: Gain2_Gain
  //  Referenced by: '<S22>/Gain2'

  { 1.0F, 0.0F, 0.0025F, 1.0F },

  // Computed Parameter: Gain_Gain
  //  Referenced by: '<S22>/Gain'

  { 1.0F, 0.0F },

  // Computed Parameter: Gain1_Gain
  //  Referenced by: '<S22>/Gain1'

  { 0.0951625854F, 0.951427639F },

  // Computed Parameter: Gain_Gain_h
  //  Referenced by: '<S21>/Gain'

  50.0F,

  // Computed Parameter: Gain1_Gain_n
  //  Referenced by: '<S21>/Gain1'

  1.0F,

  // Computed Parameter: Gain3_Gain
  //  Referenced by: '<S22>/Gain3'

  { 0.0025F, 0.0F },

  // Computed Parameter: Gain4_Gain
  //  Referenced by: '<S22>/Gain4'

  { 0.0975411534F, 0.951427639F },

  // Computed Parameter: UnitDelay_InitialCondition_j
  //  Referenced by: '<S11>/Unit Delay'

  0.0F,

  // Computed Parameter: Gain2_Gain_k
  //  Referenced by: '<S11>/Gain2'

  { 1.0F, 0.0F, 0.0025F, 1.0F },

  // Computed Parameter: Gain_Gain_g
  //  Referenced by: '<S11>/Gain'

  { 1.0F, 0.0F },

  // Computed Parameter: Gain1_Gain_g
  //  Referenced by: '<S11>/Gain1'

  { 0.0951625854F, 0.951427639F },

  // Computed Parameter: Gain_Gain_i
  //  Referenced by: '<S10>/Gain'

  50.0F,

  // Computed Parameter: Gain1_Gain_p
  //  Referenced by: '<S10>/Gain1'

  1.0F,

  // Computed Parameter: Gain3_Gain_g
  //  Referenced by: '<S11>/Gain3'

  { 0.0025F, 0.0F },

  // Computed Parameter: Gain4_Gain_g
  //  Referenced by: '<S11>/Gain4'

  { 0.0975411534F, 0.951427639F },

  // Computed Parameter: UnitDelay_InitialCondition_p
  //  Referenced by: '<S33>/Unit Delay'

  0.0F,

  // Computed Parameter: Gain2_Gain_h
  //  Referenced by: '<S33>/Gain2'

  { 1.0F, 0.0F, 0.0025F, 1.0F },

  // Computed Parameter: Gain_Gain_p
  //  Referenced by: '<S33>/Gain'

  { 1.0F, 0.0F },

  // Computed Parameter: Gain1_Gain_pm
  //  Referenced by: '<S33>/Gain1'

  { 0.0951625854F, 0.951427639F },

  // Computed Parameter: Gain_Gain_gd
  //  Referenced by: '<S32>/Gain'

  50.0F,

  // Computed Parameter: Gain1_Gain_c
  //  Referenced by: '<S32>/Gain1'

  1.0F,

  // Computed Parameter: Gain3_Gain_a
  //  Referenced by: '<S33>/Gain3'

  { 0.0025F, 0.0F },

  // Computed Parameter: Gain4_Gain_p
  //  Referenced by: '<S33>/Gain4'

  { 0.0975411534F, 0.951427639F }
};

//
// File trailer for generated code.
//
// [EOF]
//
