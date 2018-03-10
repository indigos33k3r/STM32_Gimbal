#ifndef __Cfg_H
#define __Cfg_H

#include "stm32f10x.h"


extern float pitch,  roll,   yaw; 		   // ŷ����
extern float acc_x,  acc_y,  acc_z;        // ���ٶ�
extern float gx,     gy,     gz;           // ���ٶ�

extern short ax_raw, ay_raw, az_raw;       // ���ٶȴ�����ԭʼ����
extern short gx_raw, gy_raw, gz_raw;	   // ������ԭʼ����

extern float motor_roll_out, motor_pitch_out;


#endif	// __Cfg_H
