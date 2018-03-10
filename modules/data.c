#include "include\data.h"

float pitch,  roll,   yaw; 		    // ŷ����
float acc_x,  acc_y,  acc_z;        // ���ٶ�
float gx,     gy,     gz;           // ���ٶ�

short ax_raw, ay_raw, az_raw;       // ���ٶȴ�����ԭʼ����
short gx_raw, gy_raw, gz_raw;	    // ������ԭʼ����

float motor_roll_out, motor_pitch_out;

void GYRO_normalize_Data(short gx_in, short gy_in, short gz_in,
                         float *gx,   float *gy,   float *gz) {
    
    const int max   = MPU_RAWVAL_MAX;
    const int range = MPU_GYRO_RANGE;
    
    *gx = (float)gx_in / max * range;
    *gy = (float)gy_in / max * range;    
    *gz = (float)gz_in / max * range;    

}// GYRO_normalize_Data

