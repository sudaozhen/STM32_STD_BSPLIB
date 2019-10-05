#include "./led/bsp_led.h"

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	//��������ʱ��
	RCC_APB2PeriphClockCmd(LED1_GPIO_CLK | LED2_GPIO_CLK | 
						   LED3_GPIO_CLK, ENABLE);
	
	//���������ʼ���ṹ��
	GPIO_InitStruct.GPIO_Pin = LED1_GPIO_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_10MHz;
	
	//���������ʼ�������������úõĽṹ���Աд���Ĵ�������
	GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);
	LED1_OFF;
	//дLED2�Ĵ���
	GPIO_InitStruct.GPIO_Pin = LED2_GPIO_PIN;
	GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);
	LED2_OFF;
	//дLED3�Ĵ���
	GPIO_InitStruct.GPIO_Pin = LED3_GPIO_PIN;
	GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);
	LED3_OFF;
}
/*
//LED1���غ���
void LED1_ON(void)
{
	GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
}

void LED1_OFF(void)
{
	GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
}

//LED2���غ���
void LED2_ON(void)
{
	GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
}

void LED2_OFF(void)
{
	GPIO_SetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
}
*/

