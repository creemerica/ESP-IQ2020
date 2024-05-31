#pragma once

#include "esphome/core/component.h"
#include "esphome/components/switch/switch.h"

namespace esphome {
//namespace iq2020_switch {

	class IQ2020Switch : public switch_::Switch, public Component {
	public:
		void setup() override;
		void write_state(bool state) override;
		void dump_config() override;
	};

//} //namespace iq2020_switch
} //namespace esphome