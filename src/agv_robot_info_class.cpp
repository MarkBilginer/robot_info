// agv_robot_info_class.cpp
#include "robot_info/agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nh) : RobotInfo(nh) {
  maximum_payload = "100 Kg"; // default payload
}

void AGVRobotInfo::publish_data() {
  robotinfo_msgs::RobotInfo10Fields msg;

  // Populate base class data fields
  msg.data_field_01 = "robot_description: " + robot_description;
  msg.data_field_02 = "serial_number: " + serial_number;
  msg.data_field_03 = "ip_address: " + ip_address;
  msg.data_field_04 = "firmware_version: " + firmware_version;
  msg.data_field_05 = "maximum_payload: " + maximum_payload;
  msg.data_field_06 = "hydraulic_oil_temperature: " +
                      hydraulic_system.getHydraulicOilTemperature();
  msg.data_field_07 = "hydraulic_oil_tank_fill_level: " +
                      hydraulic_system.getHydraulicOilTankFillLevel();
  msg.data_field_08 =
      "hydraulic_oil_pressure: " + hydraulic_system.getHydraulicOilPressure();
  msg.data_field_09 = "";
  msg.data_field_10 = "";

  // Publish the message
  pub.publish(msg);
}
