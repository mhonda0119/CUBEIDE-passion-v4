/*
 * st1kl3a.h
 *
 *  Created on: Sep 3, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _ST1KL3A_H_
#define _ST1KL3A_H_

#include "phototransistor.h"

namespace phototransistor{

	class ST1KL3A : public Product{
	private:
		WallParameter photo_;
	public:
		ST1KL3A() = default;
		void Init() override ;
		void ReadVal() override ;
		WallParameter* get_photo_ptr() override;
		virtual ~ST1KL3A() = default;
	};
}





#endif /* INC_ST1KL3A_H_ */
