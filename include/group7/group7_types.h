/*
 * group7_types.h
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

#ifndef RTW_HEADER_group7_types_h_
#define RTW_HEADER_group7_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_group7_std_msgs_Int16_
#define DEFINED_TYPEDEF_FOR_SL_Bus_group7_std_msgs_Int16_

struct SL_Bus_group7_std_msgs_Int16
{
  int16_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_group7_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_group7_std_msgs_Float64_

struct SL_Bus_group7_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_f_robotics_slcore_internal_bl_T
#define struct_f_robotics_slcore_internal_bl_T

struct f_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                              /* struct_f_robotics_slcore_internal_bl_T */

#ifndef struct_ros_slros_internal_block_GetP_T
#define struct_ros_slros_internal_block_GetP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                              /* struct_ros_slros_internal_block_GetP_T */

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_S_T */

/* Parameters for system: '<S6>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_group7_T_ P_EnabledSubsystem_group7_T;

/* Parameters (default storage) */
typedef struct P_group7_T_ P_group7_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_group7_T RT_MODEL_group7_T;

#endif                                 /* RTW_HEADER_group7_types_h_ */
