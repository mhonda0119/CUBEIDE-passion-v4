/*
 * icm20689.cpp
 *
 *  Created on: Aug 30, 2024
 *      Author: IshiiLabHonda
 */

#include <icm20689.h>

using namespace std;

float ICM20689::ACCEL_READ(uint8_t H_reg) {
	SPIDriver  spi;
    int16_t data = (int16_t)(((uint8_t)spi.ReadByte(H_reg) << 8) |
                             (uint8_t)spi.ReadByte(H_reg + 1));
    float accel = (float)(data / 2048.0f);
    return accel;
}

float ICM20689::OMEGA_READ(uint8_t H_reg) {
	SPIDriver spi;
    int16_t data = (int16_t)(((uint8_t)spi.ReadByte(H_reg) << 8) |
                             (uint8_t)spi.ReadByte(H_reg + 1));
    float omega =
        (float)(data / 16.4f); //[deg/s] FS_SEL=3-> Scale Factor=16.4[LSB/(dps)]
    return omega;
}


void ICM20689::ReadIMUVal(){

	imu.accel[X] = -1 *ACCEL_READ(0x3B);
	imu.accel[Y] = ACCEL_READ(0x3D);
	imu.accel[Z] = ACCEL_READ(0x3F);
	imu.omega[X] = OMEGA_READ(0x43);
	imu.omega[Y] = OMEGA_READ(0x45);
	imu.omega[Z] = OMEGA_READ(0x47);

}



