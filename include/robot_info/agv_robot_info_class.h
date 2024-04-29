// agv_robot_info_class.h
#ifndef AGV_ROBOT_INFO_CLASS_H
#define AGV_ROBOT_INFO_CLASS_H

#include "robot_info/robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
public:
  AGVRobotInfo(ros::NodeHandle *nh);
  void publish_data() override;

private:
  std::string maximum_payload;
};

#endif // AGV_ROBOT_INFO_CLASS_H