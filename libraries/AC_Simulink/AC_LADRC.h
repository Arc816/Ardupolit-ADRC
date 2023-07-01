//
// File: AC_LADRC.h
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
#ifndef RTW_HEADER_AC_LADRC_h_
#define RTW_HEADER_AC_LADRC_h_
#include "rtwtypes.h"
#include "AC_LADRC_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model AC_LADRC
class AC_LADRC final
{
  // public data and function members
 public:
  // Block states (default storage) for system '<Root>'
  struct DW_AC_LADRC_T {
    real32_T UnitDelay_DSTATE[2];      // '<S22>/Unit Delay'
    real32_T UnitDelay_DSTATE_c[2];    // '<S11>/Unit Delay'
    real32_T UnitDelay_DSTATE_m[2];    // '<S33>/Unit Delay'
  };

  // Parameters (default storage)
  struct P_AC_LADRC_T {
    real32_T ANG_PIT_P;                // Variable: ANG_PIT_P
                                          //  Referenced by: '<Root>/Gain1'

    real32_T ANG_RLL_P;                // Variable: ANG_RLL_P
                                          //  Referenced by: '<Root>/Gain'

    real32_T ANG_YAW_P;                // Variable: ANG_YAW_P
                                          //  Referenced by: '<Root>/Gain2'

    real32_T UnitDelay_InitialCondition;
                               // Computed Parameter: UnitDelay_InitialCondition
                                  //  Referenced by: '<S22>/Unit Delay'

    real32_T Gain2_Gain[4];            // Computed Parameter: Gain2_Gain
                                          //  Referenced by: '<S22>/Gain2'

    real32_T Gain_Gain[2];             // Computed Parameter: Gain_Gain
                                          //  Referenced by: '<S22>/Gain'

    real32_T Gain1_Gain[2];            // Computed Parameter: Gain1_Gain
                                          //  Referenced by: '<S22>/Gain1'

    real32_T Gain_Gain_h;              // Computed Parameter: Gain_Gain_h
                                          //  Referenced by: '<S21>/Gain'

    real32_T Gain1_Gain_n;             // Computed Parameter: Gain1_Gain_n
                                          //  Referenced by: '<S21>/Gain1'

    real32_T Gain3_Gain[2];            // Computed Parameter: Gain3_Gain
                                          //  Referenced by: '<S22>/Gain3'

    real32_T Gain4_Gain[2];            // Computed Parameter: Gain4_Gain
                                          //  Referenced by: '<S22>/Gain4'

    real32_T UnitDelay_InitialCondition_j;
                             // Computed Parameter: UnitDelay_InitialCondition_j
                                //  Referenced by: '<S11>/Unit Delay'

    real32_T Gain2_Gain_k[4];          // Computed Parameter: Gain2_Gain_k
                                          //  Referenced by: '<S11>/Gain2'

    real32_T Gain_Gain_g[2];           // Computed Parameter: Gain_Gain_g
                                          //  Referenced by: '<S11>/Gain'

    real32_T Gain1_Gain_g[2];          // Computed Parameter: Gain1_Gain_g
                                          //  Referenced by: '<S11>/Gain1'

    real32_T Gain_Gain_i;              // Computed Parameter: Gain_Gain_i
                                          //  Referenced by: '<S10>/Gain'

    real32_T Gain1_Gain_p;             // Computed Parameter: Gain1_Gain_p
                                          //  Referenced by: '<S10>/Gain1'

    real32_T Gain3_Gain_g[2];          // Computed Parameter: Gain3_Gain_g
                                          //  Referenced by: '<S11>/Gain3'

    real32_T Gain4_Gain_g[2];          // Computed Parameter: Gain4_Gain_g
                                          //  Referenced by: '<S11>/Gain4'

    real32_T UnitDelay_InitialCondition_p;
                             // Computed Parameter: UnitDelay_InitialCondition_p
                                //  Referenced by: '<S33>/Unit Delay'

    real32_T Gain2_Gain_h[4];          // Computed Parameter: Gain2_Gain_h
                                          //  Referenced by: '<S33>/Gain2'

    real32_T Gain_Gain_p[2];           // Computed Parameter: Gain_Gain_p
                                          //  Referenced by: '<S33>/Gain'

    real32_T Gain1_Gain_pm[2];         // Computed Parameter: Gain1_Gain_pm
                                          //  Referenced by: '<S33>/Gain1'

    real32_T Gain_Gain_gd;             // Computed Parameter: Gain_Gain_gd
                                          //  Referenced by: '<S32>/Gain'

    real32_T Gain1_Gain_c;             // Computed Parameter: Gain1_Gain_c
                                          //  Referenced by: '<S32>/Gain1'

    real32_T Gain3_Gain_a[2];          // Computed Parameter: Gain3_Gain_a
                                          //  Referenced by: '<S33>/Gain3'

    real32_T Gain4_Gain_p[2];          // Computed Parameter: Gain4_Gain_p
                                          //  Referenced by: '<S33>/Gain4'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_AC_LADRC_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  AC_LADRC(AC_LADRC const&) = delete;

  // Assignment Operator
  AC_LADRC& operator= (AC_LADRC const&) & = delete;

  // Move Constructor
  AC_LADRC(AC_LADRC &&) = delete;

  // Move Assignment Operator
  AC_LADRC& operator= (AC_LADRC &&) = delete;

  // Real-Time Model get method
  AC_LADRC::RT_MODEL_AC_LADRC_T * getRTM();

  // Block states
  DW_AC_LADRC_T AC_LADRC_DW;

  // Tunable parameters
  static P_AC_LADRC_T AC_LADRC_P;

  // model initialize function
  void initialize();

  // model step function
  void step(real32_T arg_attitude_error[3], real32_T arg_rate_ff[3], real32_T
            arg_rate_meas[3], real32_T (&arg_Output)[3]);

  // model terminate function
  static void terminate();

  // Constructor
  AC_LADRC();

  // Destructor
  ~AC_LADRC();

  // private data and function members
 private:
  // Real-Time Model
  RT_MODEL_AC_LADRC_T AC_LADRC_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S13>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S14>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S24>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S25>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S35>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S36>/Zero-Order Hold' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'AC_LADRC'
//  '<S1>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller'
//  '<S2>'   : 'AC_LADRC/ROLL_Rate_ADRC_Controller'
//  '<S3>'   : 'AC_LADRC/Yaw_Rate_ADRC_Controller'
//  '<S4>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC'
//  '<S5>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/error feedback'
//  '<S6>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/extended state observer'
//  '<S7>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/input saturation'
//  '<S8>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/rZOH'
//  '<S9>'   : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/yZOH'
//  '<S10>'  : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/error feedback/first order'
//  '<S11>'  : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/extended state observer/discrete time'
//  '<S12>'  : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/input saturation/passthrough'
//  '<S13>'  : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/rZOH/enabled'
//  '<S14>'  : 'AC_LADRC/Pitch_Rate_ADRC_Controller/ADRC/yZOH/enabled'
//  '<S15>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC'
//  '<S16>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/error feedback'
//  '<S17>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/extended state observer'
//  '<S18>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/input saturation'
//  '<S19>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/rZOH'
//  '<S20>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/yZOH'
//  '<S21>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/error feedback/first order'
//  '<S22>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/extended state observer/discrete time'
//  '<S23>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/input saturation/passthrough'
//  '<S24>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/rZOH/enabled'
//  '<S25>'  : 'AC_LADRC/ROLL_Rate_ADRC_Controller/ADRC/yZOH/enabled'
//  '<S26>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC'
//  '<S27>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/error feedback'
//  '<S28>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/extended state observer'
//  '<S29>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/input saturation'
//  '<S30>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/rZOH'
//  '<S31>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/yZOH'
//  '<S32>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/error feedback/first order'
//  '<S33>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/extended state observer/discrete time'
//  '<S34>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/input saturation/passthrough'
//  '<S35>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/rZOH/enabled'
//  '<S36>'  : 'AC_LADRC/Yaw_Rate_ADRC_Controller/ADRC/yZOH/enabled'

#endif                                 // RTW_HEADER_AC_LADRC_h_

//
// File trailer for generated code.
//
// [EOF]
//
