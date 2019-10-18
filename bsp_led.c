/**
  **************************************************************
  *@Filename：  bsp_led.c
	*@Author:     Su Daozhen
	*@Libraries:  stdlib v3.5.0
	*@Version:    v1.0.2
	*@Date:       05/10/2019
  **************************************************************
	*/
#include "./led/bsp_led.h"

/**
  * @brief  LED Initial Configuration.
  * @param  None
  * @retval None
  */
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

	//写LED2寄存器
	GPIO_InitStruct.GPIO_Pin = LED2_GPIO_PIN;
	GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);

	//写LED3寄存器
	GPIO_InitStruct.GPIO_Pin = LED3_GPIO_PIN;
	GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);
	LED1_OFF;
	LED2_OFF;
	LED3_OFF;
}
/**** Copyright (C)2019 Su Daozhen. All Rights Reserved **** END OF FILE ****/


