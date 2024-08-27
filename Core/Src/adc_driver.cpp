/*
 * adc.cpp
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#include <adc_driver.h>

using namespace std;

void ADCDriver::ReadAdcValue(ADC_HandleTypeDef *hadc,uint32_t rank){
	HAL_ADC_Start_DMA(hadc,(uint32_t *)adc_buff_,adc_channels_);
	val_ = (int)adc_buff_[rank];
	cout << val_ << endl;
	//cout << val_ << "1" << endl;
}

int ADCDriver::get_val(){
	return val_;
}



