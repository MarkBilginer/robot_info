// robot_info_class.h
#ifndef ROBOT_INFO_CLASS_H
#define ROBOT_INFO_CLASS_H

#include <robotinfo_msgs/RobotInfo10Fields.h>
#include <ros/ros.h>
#include <string>

class RobotInfo {
public:
  RobotInfo(ros::NodeHandle *nh);
  virtual ~RobotInfo();
  virtual void publish_data();

protected:
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;
  ros::Publisher pub;

private:
  ros::NodeHandle *nh;
};

#endif // ROBOT_INFO_CLASS_H