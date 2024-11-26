/*
 * group7.cpp
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

#include "group7.h"
#include "rtwtypes.h"
#include "group7_types.h"
#include "group7_private.h"
#include <cstring>

/* Block signals (default storage) */
B_group7_T group7_B;

/* Block states (default storage) */
DW_group7_T group7_DW;

/* Real-time model */
RT_MODEL_group7_T group7_M_ = RT_MODEL_group7_T();
RT_MODEL_group7_T *const group7_M = &group7_M_;

/*
 * System initialize for enable system:
 *    '<S6>/Enabled Subsystem'
 *    '<S7>/Enabled Subsystem'
 *    '<S8>/Enabled Subsystem'
 */
void group7_EnabledSubsystem_Init(B_EnabledSubsystem_group7_T *localB,
  P_EnabledSubsystem_group7_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S9>/In1' incorporates:
   *  Outport: '<S9>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S6>/Enabled Subsystem'
 *    '<S7>/Enabled Subsystem'
 *    '<S8>/Enabled Subsystem'
 */
void group7_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_group7_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_group7_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S9>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
}

/* Model step function */
void group7_step(void)
{
  SL_Bus_group7_std_msgs_Float64 b_varargout_2;
  SL_Bus_group7_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_group7_std_msgs_Int16 rtb_BusAssignment1;
  real_T value;
  int32_T rtb_mode;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_group7_67.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  group7_EnabledSubsystem(b_varargout_1, &b_varargout_2,
    &group7_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe2' */
  /* MATLABSystem: '<S8>/SourceBlock' */
  b_varargout_1 = Sub_group7_75.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  group7_EnabledSubsystem(b_varargout_1, &b_varargout_2,
    &group7_B.EnabledSubsystem_l);

  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe2' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S7>/SourceBlock' */
  b_varargout_1 = Sub_group7_71.getLatestMessage(&b_varargout_2);

  /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  group7_EnabledSubsystem(b_varargout_1, &b_varargout_2,
    &group7_B.EnabledSubsystem_o);

  /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* MATLABSystem: '<Root>/Get Parameter' */
  ParamGet_group7_68.get_parameter(&value);

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  MATLABSystem: '<Root>/Get Parameter'
   */
  if ((group7_B.EnabledSubsystem_o.In1.Data <= value) &&
      (group7_B.EnabledSubsystem_l.In1.Data > 0.0)) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (group7_B.EnabledSubsystem_o.In1.Data /
      group7_B.EnabledSubsystem_l.In1.Data - group7_B.EnabledSubsystem.In1.Data)
      * 0.25;
    rtb_mode = 1;
  } else {
    rtb_mode = 0;

    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (15.0 - group7_B.EnabledSubsystem.In1.Data) * 0.25;
  }

  if (group7_B.EnabledSubsystem_o.In1.Data < 0.0) {
    rtb_mode = 2;

    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (15.0 - group7_B.EnabledSubsystem.In1.Data) * 0.25;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S4>/SinkBlock' */
  Pub_group7_20.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  rtb_BusAssignment1.Data = static_cast<int16_T>(rtb_mode);

  /* Outputs for Atomic SubSystem: '<Root>/Publish1' */
  /* MATLABSystem: '<S5>/SinkBlock' */
  Pub_group7_76.publish(&rtb_BusAssignment1);

  /* End of Outputs for SubSystem: '<Root>/Publish1' */
}

/* Model initialize function */
void group7_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&group7_B)), 0,
                sizeof(B_group7_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&group7_DW), 0,
                sizeof(DW_group7_T));

  {
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_2[13];
    char_T b_zeroDelimTopic_0[12];
    char_T b_zeroDelimTopic_1[11];
    static const char_T tmp[16] = { '/', 'c', 'a', 'r', '/', 's', 't', 'a', 't',
      'e', '/', 'v', 'e', 'l', '_', 'x' };

    static const char_T tmp_0[18] = { '/', 'l', 'i', 'g', 'h', 't', '_', 'c',
      'h', 'a', 'n', 'g', 'e', '_', 't', 'i', 'm', 'e' };

    static const char_T tmp_1[11] = { '/', 'l', 'i', 'g', 'h', 't', '_', 'd',
      'i', 's', 't' };

    static const char_T tmp_2[20] = { '/', 'l', 'i', 'g', 'h', 't', '_', 'd',
      'i', 's', 't', '_', 'c', 'r', 'i', 't', 'i', 'c', 'a', 'l' };

    static const char_T tmp_3[10] = { '/', 'c', 'm', 'd', '_', 'a', 'c', 'c',
      'e', 'l' };

    static const char_T tmp_4[12] = { '/', 'g', 'r', 'o', 'u', 'p', '7', '/',
      'm', 'o', 'd', 'e' };

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    group7_DW.obj_p.matlabCodegenIsDeleted = false;
    group7_DW.objisempty_d = true;
    group7_DW.obj_p.isInitialized = 1;
    for (int32_T i = 0; i < 16; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[16] = '\x00';
    Sub_group7_67.createSubscriber(&b_zeroDelimTopic[0], 1);
    group7_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe2' */
    /* Start for MATLABSystem: '<S8>/SourceBlock' */
    group7_DW.obj_l.matlabCodegenIsDeleted = false;
    group7_DW.objisempty = true;
    group7_DW.obj_l.isInitialized = 1;
    for (int32_T i = 0; i < 18; i++) {
      group7_B.b_zeroDelimTopic[i] = tmp_0[i];
    }

    group7_B.b_zeroDelimTopic[18] = '\x00';
    Sub_group7_75.createSubscriber(&group7_B.b_zeroDelimTopic[0], 1);
    group7_DW.obj_l.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe2' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S7>/SourceBlock' */
    group7_DW.obj_m.matlabCodegenIsDeleted = false;
    group7_DW.objisempty_o = true;
    group7_DW.obj_m.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = tmp_1[i];
    }

    b_zeroDelimTopic_0[11] = '\x00';
    Sub_group7_71.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    group7_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for MATLABSystem: '<Root>/Get Parameter' */
    group7_DW.obj.matlabCodegenIsDeleted = false;
    group7_DW.objisempty_a = true;
    group7_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 20; i++) {
      group7_B.b_zeroDelimName[i] = tmp_2[i];
    }

    group7_B.b_zeroDelimName[20] = '\x00';
    ParamGet_group7_68.initialize(&group7_B.b_zeroDelimName[0]);
    ParamGet_group7_68.initialize_error_codes(0, 1, 2, 3);
    ParamGet_group7_68.set_initial_value(100.0);
    group7_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S4>/SinkBlock' */
    group7_DW.obj_f.matlabCodegenIsDeleted = false;
    group7_DW.objisempty_in = true;
    group7_DW.obj_f.isInitialized = 1;
    for (int32_T i = 0; i < 10; i++) {
      b_zeroDelimTopic_1[i] = tmp_3[i];
    }

    b_zeroDelimTopic_1[10] = '\x00';
    Pub_group7_20.createPublisher(&b_zeroDelimTopic_1[0], 1);
    group7_DW.obj_f.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */

    /* Start for Atomic SubSystem: '<Root>/Publish1' */
    /* Start for MATLABSystem: '<S5>/SinkBlock' */
    group7_DW.obj_d.matlabCodegenIsDeleted = false;
    group7_DW.objisempty_i = true;
    group7_DW.obj_d.isInitialized = 1;
    for (int32_T i = 0; i < 12; i++) {
      b_zeroDelimTopic_2[i] = tmp_4[i];
    }

    b_zeroDelimTopic_2[12] = '\x00';
    Pub_group7_76.createPublisher(&b_zeroDelimTopic_2[0], 1);
    group7_DW.obj_d.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish1' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  group7_EnabledSubsystem_Init(&group7_B.EnabledSubsystem,
    &group7_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2' */
  /* SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem' */
  group7_EnabledSubsystem_Init(&group7_B.EnabledSubsystem_l,
    &group7_P.EnabledSubsystem_l);

  /* End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe2' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  group7_EnabledSubsystem_Init(&group7_B.EnabledSubsystem_o,
    &group7_P.EnabledSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void group7_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!group7_DW.obj_p.matlabCodegenIsDeleted) {
    group7_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe2' */
  /* Terminate for MATLABSystem: '<S8>/SourceBlock' */
  if (!group7_DW.obj_l.matlabCodegenIsDeleted) {
    group7_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S8>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe2' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S7>/SourceBlock' */
  if (!group7_DW.obj_m.matlabCodegenIsDeleted) {
    group7_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter' */
  if (!group7_DW.obj.matlabCodegenIsDeleted) {
    group7_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S4>/SinkBlock' */
  if (!group7_DW.obj_f.matlabCodegenIsDeleted) {
    group7_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish1' */
  /* Terminate for MATLABSystem: '<S5>/SinkBlock' */
  if (!group7_DW.obj_d.matlabCodegenIsDeleted) {
    group7_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish1' */
}
