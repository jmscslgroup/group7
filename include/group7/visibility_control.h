#ifndef GROUP7__VISIBILITY_CONTROL_H_
#define GROUP7__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define GROUP7_EXPORT __attribute__ ((dllexport))
    #define GROUP7_IMPORT __attribute__ ((dllimport))
  #else
    #define GROUP7_EXPORT __declspec(dllexport)
    #define GROUP7_IMPORT __declspec(dllimport)
  #endif
  #ifdef GROUP7_BUILDING_LIBRARY
    #define GROUP7_PUBLIC GROUP7_EXPORT
  #else
    #define GROUP7_PUBLIC GROUP7_IMPORT
  #endif
  #define GROUP7_PUBLIC_TYPE GROUP7_PUBLIC
  #define GROUP7_LOCAL
#else
  #define GROUP7_EXPORT __attribute__ ((visibility("default")))
  #define GROUP7_IMPORT
  #if __GNUC__ >= 4
    #define GROUP7_PUBLIC __attribute__ ((visibility("default")))
    #define GROUP7_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define GROUP7_PUBLIC
    #define GROUP7_LOCAL
  #endif
  #define GROUP7_PUBLIC_TYPE
#endif
#endif  // GROUP7__VISIBILITY_CONTROL_H_
// Generated 26-Nov-2024 14:09:14
// Copyright 2019-2020 The MathWorks, Inc.