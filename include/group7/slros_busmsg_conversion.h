#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Int16.h>
#include "group7_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_group7_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_group7_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Int16* msgPtr, SL_Bus_group7_std_msgs_Int16 const* busPtr);
void convertToBus(SL_Bus_group7_std_msgs_Int16* busPtr, std_msgs::Int16 const* msgPtr);


#endif
