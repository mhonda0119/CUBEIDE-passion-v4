/*
 * peripheral.h
 *
 *  Created on: Aug 25, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _PERIPHERAL_H_
#define _PERIPHERAL_H_

#include "main.h"

class Peripheral{

public:
	ADC_HandleTypeDef hadc1;
	ADC_HandleTypeDef hadc2;
	DMA_HandleTypeDef hdma_adc1;

	SPI_HandleTypeDef hspi1;
	SPI_HandleTypeDef hspi3;

	TIM_HandleTypeDef htim1;
	TIM_HandleTypeDef htim2;
	TIM_HandleTypeDef htim3;
	TIM_HandleTypeDef htim4;
	TIM_HandleTypeDef htim5;
	TIM_HandleTypeDef htim8;

	UART_HandleTypeDef huart1;

	/*static*/ void SystemClock_Config(void);
	/*static*/ void MX_GPIO_Init(void);
	/*static*/ void MX_DMA_Init(void);
	/*static*/ void MX_ADC1_Init(void);
	/*static*/ void MX_USART1_UART_Init(void);
	/*static*/ void MX_TIM2_Init(void);
	/*static*/ void MX_TIM3_Init(void);
	/*static*/ void MX_TIM4_Init(void);
	/*static*/ void MX_TIM8_Init(void);
	/*static*/ void MX_SPI1_Init(void);
	/*static*/ void MX_TIM5_Init(void);
	/*static*/ void MX_SPI3_Init(void);
	/*static*/ void MX_TIM1_Init(void);
	/*static*/ void MX_ADC2_Init(void);

};


#endif /* _PERIPHERAL_H_ */
