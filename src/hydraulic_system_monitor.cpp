#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor()
    : hydraulic_oil_temperature("45C"), // Example default values
      hydraulic_oil_tank_fill_level("100%"), hydraulic_oil_pressure("250 bar") {
}

std::string HydraulicSystemMonitor::getHydraulicOilTemperature() const {
  return hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::getHydraulicOilTankFillLevel() const {
  return hydraulic_oil_tank_fill_level;
}

std::string HydraulicSystemMonitor::getHydraulicOilPressure() const {
  return hydraulic_oil_pressure;
}
