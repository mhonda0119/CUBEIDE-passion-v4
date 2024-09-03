/*
 * adc.cpp
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#include <adc_driver.h>

namespace adc{

	void Driver::ReadVal(ADC_HandleTypeDef *hadc){//,uint32_t rank)
		HAL_ADC_Start_DMA(hadc,(uint32_t *)buff_,channels_);
		//val_ = (int)buff_[rank];
//		std::cout << buff_[0] << std::endl;
//		std::cout << buff_[1] << std::endl;
//		std::cout << buff_[2] << std::endl;
//		std::cout << buff_[3] << std::endl;
		//cout << val_ << "1" << endl;
	}

	int* Driver::get_buff_ptr(){
		return (int*)buff_;
	}

//	int Driver::get_val(){
//		return val_;
//	}

}




