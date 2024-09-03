/*
 * phototransistor.h
 *
 *  Created on: Sep 3, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _PHOTOTRANSISTOR_H_
#define _PHOTOTRANSISTOR_H_

#include <stdint.h>
#include <stdout.h>
#include <iostream>
#include <memory>
#include "adc_driver.h"
#include "wall_parameter.h"

namespace pxstr {

	class Product{

	private:

	public:
		Product() = default;
		virtual void Init() = 0;
		virtual void ReadVal() = 0;
		virtual WallParameter* get_photo_ptr() = 0;
		virtual ~Product() = default;//仮想デストラクタ（親クラス）

	};

}




#endif /* _PHOTOTRANSISTOR_H_ */
