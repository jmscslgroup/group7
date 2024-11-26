#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "group7";

// For Block group7/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_67;

// For Block group7/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_71;

// For Block group7/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Sub_group7_75;

// For Block group7/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_group7_std_msgs_Float64> Pub_group7_20;

// For Block group7/Publish1
SimulinkPublisher<std_msgs::Int16, SL_Bus_group7_std_msgs_Int16> Pub_group7_76;

// For Block group7/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_group7_68;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

