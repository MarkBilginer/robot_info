// agv_robot_info_main.cpp
#include "robot_info/agv_robot_info_class.h" // Make sure this includes the definition of AGVRobotInfo

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info_node"); // Initializes Node with a name
                                                // "agv_robot_info_node"
  ros::NodeHandle nh;

  AGVRobotInfo agvInfo(&nh); // Creating an instance of AGVRobotInfo, assuming
                             // constructor needs NodeHandle

  ros::Rate loop_rate(10); // Setting a loop rate (e.g., 10 Hz)

  while (ros::ok()) {
    agvInfo.publish_data(); // Calls the overridden method to publish data
    ros::spinOnce();        // Handle ROS events
    loop_rate.sleep();      // Sleep to maintain loop rate
  }

  return 0;
}