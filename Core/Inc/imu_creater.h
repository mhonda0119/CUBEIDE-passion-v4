/*
 * imu_creater.h
 *
 *  Created on: Aug 31, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _IMU_CREATER_H_
#define _IMU_CREATER_H_

#include "icm20689.h"
#include <cstring>

namespace imu{
	class Creater{
	private:
		enum struct IMU_NAME{//enum classはenumよりscopeが明示されていて名前の衝突を避けることが出来るらしい
			ICM20689 = 0,
		};
		IMU_NAME name_;
	public:
		Creater();
		std::unique_ptr<Product> Create();
		~Creater() = default;
	};
}




#endif /* _IMU_CREATER_H_ */
