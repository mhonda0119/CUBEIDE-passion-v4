/*
 * adc.cpp
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#include <adc_driver.h>

namespace adc{

void Driver::ReadValue(ADC_HandleTypeDef *hadc,uint32_t rank){
	HAL_ADC_Start_DMA(hadc,(uint32_t *)buff_,channels_);
	val_ = (int)buff_[rank];
	//cout << val_ << endl;
	//cout << val_ << "1" << endl;
}

int Driver::get_val(){
	return val_;
}

}




