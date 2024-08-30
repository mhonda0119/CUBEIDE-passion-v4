/*
 * imu.cpp
 *
 *  Created on: Aug 30, 2024
 *      Author: IshiiLabHonda
 */

#include <imu.h>

MotionParameter& get_imu(){
	static MotionParameter imu_;
	return imu_;
}

