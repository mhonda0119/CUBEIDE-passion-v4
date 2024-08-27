/*
 * spi_driver.h
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _SPI_DRIVER_H_
#define _SPI_DRIVER_H_

#include <stdint.h>
#include "peripheral.h"

class SPIDriver{
private:

public:
	uint8_t ReadByte(uint8_t reg);
	void WriteByte(uint8_t reg , uint8_t rxdata);
};

#endif /* _SPI_DRIVER_H_ */
