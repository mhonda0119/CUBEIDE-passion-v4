/*
 * IMU.h
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _IMU_H_
#define _IMU_H_

class IMU{
private:

public:
	void Init();
	void ReadGyroVal();
	void ReadAccelVal();
};




#endif /* INC_IMU_H_ */
