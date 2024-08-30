/*
 * imu.h
 *
 *  Created on: Aug 30, 2024
 *      Author: IshiiLabHonda
 */

#ifndef _IMU_H_
#define _IMU_H_

#include <stdint.h>
#include <stdout.h>
#include <iostream>
#include "peripheral.h"
#include "motion_parameter.h"

class IMU {

private:

protected:
	MotionParameter imu;

public:
	virtual void ReadIMUVal(uint8_t);
	float get_imu();
};


#endif // _IMU_H_
