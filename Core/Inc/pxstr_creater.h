/*
 * phototoransister_creater.h
 *
 *  Created on: Sep 4, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _PXSTR_CREATER_H_
#define _PXSTR_CREATOR_H_

#include "st1kl3a.h"

namespace pxstr{
	class Creater{
	private:
		enum struct PXSTR_NAME{
			ST1KL3A = 0,
		};
		PXSTR_NAME name_;
	public:
		Creater();
		std::unique_ptr<Product> Create();
		~Creater() = default;
	};
}

#endif /* _PXSTR_CREATOR_H_ */
