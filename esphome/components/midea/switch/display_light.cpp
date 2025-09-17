#include "display_light.h"

#ifdef USE_ARDUINO

namespace esphome {
namespace midea {
namespace ac {

void DisplayLightSwitch::write_state(bool state) {
  if (this->parent_->mode == climate::ClimateMode::CLIMATE_MODE_OFF) {
    this->publish_state(false);
    return;
  }

  bool current_state = this->parent_->get_display_light_state();
  if (state != current_state) {
    this->parent_->do_display_toggle();
  }

  this->publish_state(state);
}

}  // namespace ac
}  // namespace midea
}  // namespace esphome

#endif  // USE_ARDUINO
