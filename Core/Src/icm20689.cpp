/*
 * icm20689.cpp
 *
 *  Created on: Aug 30, 2024
 *      Author: IshiiLabHonda
 */

#include <icm20689.h>

using namespace std;

void ICM20689::Init(){
	SPIDriver  spi;
    uint8_t who_am_i = 0;
    who_am_i = spi.ReadByte(0x75);              // check WHO_AM_I (0x75)
    printf("who_am_i = 0x%x\r\n", who_am_i); // Who am I = 0x98

    if (who_am_i != 0x98) { // recheck 0x98
        HAL_Delay(100);
        who_am_i = spi.ReadByte(0x98);
        if (who_am_i != 0x98) {
            printf("gyro_error\r\n\n");
            while (1) {
            }
        }
    }

    // PWR_MIGHT_1 0x6B
    spi.WriteByte(0x6B, 0x00); // Set pwr might
    HAL_Delay(50);
    // PWR_MIGHT_2 0x6C
    spi.WriteByte(0x6C, 0x00);
    HAL_Delay(50);
    // set gyro config
    // GYRO_CONFIG 0x1B
    spi.WriteByte(0x1B, 0x18); // use 2000 dps
    HAL_Delay(50);
    // ACCEL_CONFIG 0x1C
    spi.WriteByte(0x1B, 0x18); // use pm 16g
    HAL_Delay(50);
}

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

	imu_.accel[X] = -1 *ACCEL_READ(0x3B);
	imu_.accel[Y] = ACCEL_READ(0x3D);
	imu_.accel[Z] = ACCEL_READ(0x3F);
	imu_.omega[X] = OMEGA_READ(0x43);
	imu_.omega[Y] = OMEGA_READ(0x45);
	imu_.omega[Z] = OMEGA_READ(0x47);
}

MotionParameter* ICM20689::get_imu_ptr(){
		return &imu_;
	}




