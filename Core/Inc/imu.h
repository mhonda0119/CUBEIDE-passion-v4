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
public:
	virtual void Init() = 0;
	virtual void ReadIMUVal() = 0;
	virtual MotionParameter* get_imu_ptr() = 0;
};


#endif // _IMU_H_
