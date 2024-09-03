/*
 * wall_parameter.h
 *
 *  Created on: Sep 3, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _WALL_PARAMETER_H_
#define _WALL_PARAMETER_H_

enum struct DIR
{
	L = 0, FL , R , FR
};

// MotionParameter 構造体の定義
struct WallParameter {
    int dir[4] = {0};       // 位置
};

#endif /* _WALL_PARAMETER_H_ */
