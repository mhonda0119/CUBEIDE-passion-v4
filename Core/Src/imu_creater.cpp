/*
 * imu_creater.cpp
 *
 *  Created on: Aug 31, 2024
 *      Author: MasakatsuHonda
 */

#include "imu_creater.h"

using namespace std;

IMUCreater::IMUCreater(){
	name_ = IMU_NAME::ICM20689;
}

IMU* IMUCreater::ImIMU() {
    switch (name_) {
        case IMU_NAME::ICM20689:
            return static_cast<IMU*>(new ICM20689());
        default:
            return nullptr;
    }
}



