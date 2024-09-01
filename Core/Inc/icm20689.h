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

namespace imu{
	class ICM20689 : public Product{
	private:
		MotionParameter imu_;

		float AccelRead(uint8_t H_reg) ;
		float OmegaRead(uint8_t H_reg) ;
	public:
		ICM20689() = default;//コンストラクタの定義はとりあえず全部した方がいいらしい
		virtual ~ICM20689() = default;//デストラクタ（子クラス）
		void Init() override ;
		void ReadVal() override ;
		MotionParameter* get_imu_ptr() override ;
	};
}

#endif /* _ICM20689_H_ */
