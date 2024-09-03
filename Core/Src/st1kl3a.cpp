/*
 * st1kl3a.cpp
 *
 *  Created on: Sep 3, 2024
 *      Author: MasakatsuHonda
 */
#include "st1kl3a.h"

namespace pxstr{

	void ST1KL3A::Init(){
		for(int i = 0;i < 4;i++){
			photo_.dir[i] = {0};
		}
	}

	void ST1KL3A::ReadVal() {
		std::unique_ptr<adc::Driver> adc = std::make_unique<adc::Driver>();
		adc -> ReadVal(&hadc1);
		int* buff = adc->get_buff_ptr();
		photo_.dir[static_cast<int>(DIR::L)] = buff[0];
		photo_.dir[static_cast<int>(DIR::FL)] = buff[1];
		photo_.dir[static_cast<int>(DIR::FR)] = buff[2];
		photo_.dir[static_cast<int>(DIR::R)] = buff[3];

//		std::cout << "L: " << photo_.dir[static_cast<int>(DIR::L)] << std::endl;
//		std::cout << "FL: " << photo_.dir[static_cast<int>(DIR::FL)] << std::endl;
//		std::cout << "FR: " << photo_.dir[static_cast<int>(DIR::FR)] << std::endl;
//		std::cout << "R: " << photo_.dir[static_cast<int>(DIR::R)] << std::endl;
	}

	WallParameter* ST1KL3A::get_photo_ptr() {
		return &photo_;
	}

}
