/*
 * group7.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "group7".
 *
 * Model version              : 1.66
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Tue Nov 26 14:08:58 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_group7_h_
#define RTW_HEADER_group7_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "group7_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S6>/Enabled Subsystem' */
struct B_EnabledSubsystem_group7_T {
  SL_Bus_group7_std_msgs_Float64 In1;  /* '<S9>/In1' */
};

/* Block signals (default storage) */
struct B_group7_T {
  char_T b_zeroDelimName[21];
  char_T b_zeroDelimTopic[19];
  B_EnabledSubsystem_group7_T EnabledSubsystem_l;/* '<S8>/Enabled Subsystem' */
  B_EnabledSubsystem_group7_T EnabledSubsystem_o;/* '<S7>/Enabled Subsystem' */
  B_EnabledSubsystem_group7_T EnabledSubsystem;/* '<S6>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_group7_T {
  ros_slros_internal_block_GetP_T obj; /* '<Root>/Get Parameter' */
  ros_slroscpp_internal_block_P_T obj_d;/* '<S5>/SinkBlock' */
  ros_slroscpp_internal_block_P_T obj_f;/* '<S4>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_l;/* '<S8>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_m;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S6>/SourceBlock' */
  boolean_T objisempty;                /* '<S8>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S7>/SourceBlock' */
  boolean_T objisempty_d;              /* '<S6>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S5>/SinkBlock' */
  boolean_T objisempty_in;             /* '<S4>/SinkBlock' */
  boolean_T objisempty_a;              /* '<Root>/Get Parameter' */
};

/* Parameters for system: '<S6>/Enabled Subsystem' */
struct P_EnabledSubsystem_group7_T_ {
  SL_Bus_group7_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                          * Referenced by: '<S9>/Out1'
                                          */
};

/* Parameters (default storage) */
struct P_group7_T_ {
  SL_Bus_group7_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                 * Referenced by: '<S3>/Constant'
                                                 */
  SL_Bus_group7_std_msgs_Float64 Constant_Value_f;/* Computed Parameter: Constant_Value_f
                                                   * Referenced by: '<S6>/Constant'
                                                   */
  SL_Bus_group7_std_msgs_Float64 Constant_Value_o;/* Computed Parameter: Constant_Value_o
                                                   * Referenced by: '<S7>/Constant'
                                                   */
  SL_Bus_group7_std_msgs_Float64 Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                   * Referenced by: '<S8>/Constant'
                                                   */
  SL_Bus_group7_std_msgs_Int16 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                 * Referenced by: '<S1>/Constant'
                                                 */
  P_EnabledSubsystem_group7_T EnabledSubsystem_l;/* '<S8>/Enabled Subsystem' */
  P_EnabledSubsystem_group7_T EnabledSubsystem_o;/* '<S7>/Enabled Subsystem' */
  P_EnabledSubsystem_group7_T EnabledSubsystem;/* '<S6>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_group7_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_group7_T group7_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_group7_T group7_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_group7_T group7_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void group7_initialize(void);
  extern void group7_step(void);
  extern void group7_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_group7_T *const group7_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'group7'
 * '<S1>'   : 'group7/Blank Message'
 * '<S2>'   : 'group7/MATLAB Function1'
 * '<S3>'   : 'group7/Message'
 * '<S4>'   : 'group7/Publish'
 * '<S5>'   : 'group7/Publish1'
 * '<S6>'   : 'group7/Subscribe'
 * '<S7>'   : 'group7/Subscribe1'
 * '<S8>'   : 'group7/Subscribe2'
 * '<S9>'   : 'group7/Subscribe/Enabled Subsystem'
 * '<S10>'  : 'group7/Subscribe1/Enabled Subsystem'
 * '<S11>'  : 'group7/Subscribe2/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_group7_h_ */
