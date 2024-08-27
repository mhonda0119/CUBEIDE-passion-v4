/*
 * adc.h
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _ADCDRIVER_H_
#define _ADCDRIVER_H_

#include "peripheral.h"
#include "stdout.h"
#include "stdint.h"
#include <iostream>

class ADCDriver {
private:
	int val_ = 0;
	uint16_t adc_buff_[10] ={0};
	uint32_t adc_channels_ = 5;

public:
	void ReadAdcValue(ADC_HandleTypeDef *hadc,uint32_t rank);
	int get_val();

};

#endif /* _ADCDRIVER_H_ */
