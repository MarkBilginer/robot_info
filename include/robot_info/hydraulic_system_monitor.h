#ifndef HYDRAULIC_SYSTEM_MONITOR_H
#define HYDRAULIC_SYSTEM_MONITOR_H

#include <string>

class HydraulicSystemMonitor {
public:
  HydraulicSystemMonitor();
  std::string getHydraulicOilTemperature() const;
  std::string getHydraulicOilTankFillLevel() const;
  std::string getHydraulicOilPressure() const;

private:
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;
};

#endif // HYDRAULIC_SYSTEM_MONITOR_H