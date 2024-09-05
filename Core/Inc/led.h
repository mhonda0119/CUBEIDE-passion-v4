/*
 * led.h
 *
 *  Created on: Sep 5, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _LED_H_
#define _LED_H_

#include <cstdint>
#include "peripheral.h"

namespace led{
	class Led{
	private:
		  GPIO_TypeDef * port_;
		  uint16_t pin_;
		  float duty_;
		  float freq_;
		  int dur_;
	public:
		  Led() = default;
		  void Write(bool state);
		  void Flush(float duty,float freq,int dur);
		  ~Led() = default;
	};
}





#endif /* _LED_H_ */
