#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/modbus/modbus.h"

#include <vector>

namespace esphome {
namespace bgtech_meter {

#define BGTECH_METER_SENSOR(name) \
 protected: \
  sensor::Sensor *name##_sensor_{nullptr}; \
\
 public: \
  void set_##name##_sensor(sensor::Sensor *(name)) { this->name##_sensor_ = name; }

class BgtechMeter : public PollingComponent, public modbus::ModbusDevice {
 public:
  BGTECH_METER_SENSOR(total_active_energy)
  BGTECH_METER_SENSOR(import_active_energy)
  BGTECH_METER_SENSOR(export_active_energy)
  BGTECH_METER_SENSOR(total_reactive_energy)
  BGTECH_METER_SENSOR(import_reactive_energy)
  BGTECH_METER_SENSOR(export_reactive_energy)
  BGTECH_METER_SENSOR(apparent_energy)
  BGTECH_METER_SENSOR(active_power)
  BGTECH_METER_SENSOR(reactive_power)
  BGTECH_METER_SENSOR(apparent_power)
  BGTECH_METER_SENSOR(voltage)
  BGTECH_METER_SENSOR(current)
  BGTECH_METER_SENSOR(power_factor)
  BGTECH_METER_SENSOR(frequency)
  BGTECH_METER_SENSOR(maximum_demand_active_power)
  BGTECH_METER_SENSOR(maximum_demand_reactive_power)
  BGTECH_METER_SENSOR(maximum_demand_apparent_power)

  void update() override;

  void on_modbus_data(const std::vector<uint8_t> &data) override;

  void dump_config() override;
};

}  // namespace bgtech_meter
}  // namespace esphome
