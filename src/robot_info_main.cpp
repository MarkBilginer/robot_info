// robot_info_main.cpp
#include "robot_info/robot_info_class.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");
  ros::NodeHandle nh;
  RobotInfo robotInfo(&nh);

  ros::Rate rate(10); // 1 Hz
  while (ros::ok()) {
    robotInfo.publish_data();
    ros::spinOnce();
    rate.sleep();
  }

  return 0;
}