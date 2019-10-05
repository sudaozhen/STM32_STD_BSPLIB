#include "./led/bsp_led.h"

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	//开启外设时钟
	RCC_APB2PeriphClockCmd(LED1_GPIO_CLK | LED2_GPIO_CLK | 
						   LED3_GPIO_CLK, ENABLE);
	
	//配置外设初始化结构体
	GPIO_InitStruct.GPIO_Pin = LED1_GPIO_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_10MHz;
	
	//调用外设初始化函数，把配置好的结构体成员写到寄存器里面
	GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);
	LED1_OFF;
	//写LED2寄存器
	GPIO_InitStruct.GPIO_Pin = LED2_GPIO_PIN;
	GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);
	LED2_OFF;
	//写LED3寄存器
	GPIO_InitStruct.GPIO_Pin = LED3_GPIO_PIN;
	GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);
	LED3_OFF;
}
/*
//LED1开关函数
void LED1_ON(void)
{
	GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
}

void LED1_OFF(void)
{
	GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
}

//LED2开关函数
void LED2_ON(void)
{
	GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
}

void LED2_OFF(void)
{
	GPIO_SetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);
}
*/

