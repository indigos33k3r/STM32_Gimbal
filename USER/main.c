#include "include\main.h"
	
 int main(void)
 {	 
	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ500000
	delay_init();	//��ʱ��ʼ�� 
	LED_Init();		  			//��ʼ����LED���ӵ�Ӳ���ӿ�
	KEY_Init();					//��ʼ������
	LCD_Init();			   		//��ʼ��LCD
	MPU_Init();					//��ʼ��MPU6050
	TIM3_PWM_Init(72 - 1, 20000 - 1);			// ��λʱ��1us, ����20ms
	TIM5_Int_Init(72 - 1, 40000 - 1);			// ��λʱ��1us, ����40ms
     
    CTRL_init();
	 
	while(mpu_dmp_init())
 	{
 		delay_ms(200);
	}  
	
 	while(1)
	{

	} 	
}
 


