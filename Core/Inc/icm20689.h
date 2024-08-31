/*
 * icm20689.h
 *
 *  Created on: Aug 30, 2024
 *      Author: IshiiLabHonda
 */

#ifndef _ICM20689_H_
#define _ICM20689_H_

#include "imu.h"
#include "motion_parameter.h"
#include "spi_driver.h"

class ICM20689 : public IMU{
private:
	MotionParameter imu_;

	float ACCEL_READ(uint8_t H_reg) ;
	float OMEGA_READ(uint8_t H_reg) ;
public:
	void Init() override ;
	void ReadIMUVal() override ;
	MotionParameter* get_imu_ptr() override ;
};

#endif /* _ICM20689_H_ */
