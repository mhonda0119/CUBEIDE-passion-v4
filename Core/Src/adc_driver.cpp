/*
 * adc_driver.cpp
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#include <adc_driver.h>

namespace adc{

	void Driver::ReadVal(ADC_HandleTypeDef *hadc){//,uint32_t rank)
		HAL_ADC_Start_DMA(hadc,(uint32_t *)buff_,channels_);
	}

	int* Driver::get_buff_ptr(){
		return (int*)buff_;
	}
}




