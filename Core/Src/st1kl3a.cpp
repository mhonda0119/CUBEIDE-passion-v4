/*
 * st1kl3a.cpp
 *
 *  Created on: Sep 3, 2024
 *      Author: MasakatsuHonda
 */
#include "st1kl3a.h"

namespace phototransistor{

	void ST1KL3A::ReadVal(){
		std::unique_ptr<adc::Driver> adc = std::make_unique<adc::Driver>();
		adc -> ReadVal(&hadc1,1);
		photo_.dir[L] = adc->get_val();
		photo_.dir[FL] = adc->get_val();
		photo_.dir[FR] = adc->get_val();
		photo_.dir[R] = adc->get_val();
	}
	WallParameter* ST1KL3A::get_photo_ptr{

	};

}
