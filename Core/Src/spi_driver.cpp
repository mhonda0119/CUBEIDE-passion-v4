/*
 * spi_driver.cpp
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#include "spi_driver.h"

uint8_t ReadByte(uint8_t reg) {
    uint8_t rx_data, tx_data;
    HAL_GPIO_WritePin(GPIOD, CS_Pin, GPIO_PIN_RESET); // cs = 0;//CSピンをenableにする.
    tx_data = reg | 0x80;
    HAL_SPI_Transmit(&hspi3, &tx_data, 1, 100);
    HAL_SPI_Receive(&hspi3, &rx_data, 1, 100);
    HAL_GPIO_WritePin(GPIOD, CS_Pin, GPIO_PIN_SET); // cs = 1;
    return rx_data;
}
void WriteByte(uint8_t reg, uint8_t rx_data) {
	uint8_t tx_data;
    tx_data = reg & 0x7F;
    HAL_GPIO_WritePin(GPIOD, CS_Pin, GPIO_PIN_RESET); // cs = 0;
    HAL_SPI_Transmit(&hspi3, &tx_data, 1, 100);
    HAL_SPI_Transmit(&hspi3, &rx_data, 1, 100);
    HAL_GPIO_WritePin(GPIOD, CS_Pin, GPIO_PIN_SET); // cs = 1;
}
