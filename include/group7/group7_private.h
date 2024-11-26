/*
 * group7_private.h
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

#ifndef RTW_HEADER_group7_private_h_
#define RTW_HEADER_group7_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "group7.h"
#include "group7_types.h"

extern void group7_EnabledSubsystem_Init(B_EnabledSubsystem_group7_T *localB,
  P_EnabledSubsystem_group7_T *localP);
extern void group7_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_group7_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_group7_T *localB);

#endif                                 /* RTW_HEADER_group7_private_h_ */
