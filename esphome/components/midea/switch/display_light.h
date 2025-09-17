#pragma once

#ifdef USE_ARDUINO

#include "esphome/components/switch/switch.h"
#include "esphome/components/midea/air_conditioner.h"

namespace esphome {
namespace midea {
namespace ac {

class DisplayLightSwitch : public switch_::Switch, public Parented<AirConditioner> {
 public:
  DisplayLightSwitch() = default;

 protected:
  void write_state(bool state) override;
};

}  // namespace ac
}  // namespace midea
}  // namespace esphome

#endif  // USE_ARDUINO
