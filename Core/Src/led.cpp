/*
 * led.cpp
 *
 *  Created on: Sep 5, 2024
 *      Author: MasakatsuHonda
 */
#include "led.h"

namespace led{
	Led::Write(bool state_){
		HAL_GPIO_WritePin(port_,pin_,state_);
	}
	Led::Flush(float duty_,float freq_,int dur_){
		float t = 1/freq_;
		float t_on = duty_ * t;
		float t_off = 1 - t_on;
		uint32_t cout = 0;
		uint32_t tet = 0;//total_ellapsed_time
		while(tet < dur_){
		this->Write(1);//点灯
		HAL_Delay(t_on);//点灯時間
		this->Write(0);
		HAL_Delay(t_off);//消灯時間
		cout++;
		tet = cout*t;
		}
	}
}



