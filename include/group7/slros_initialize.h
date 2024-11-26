#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "group7_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block group7/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_67;

// For Block group7/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_71;

// For Block group7/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_75;

// For Block group7/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Pub_group7_20;

// For Block group7/Publish1
extern SimulinkPublisher<std_msgs::Int16, SL_Bus_group7_std_msgs_Int16> Pub_group7_76;

// For Block group7/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_group7_68;

void slros_node_init(int argc, char** argv);

#endif
