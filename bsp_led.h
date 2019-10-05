/**
  **************************************************************
  *@Filename：  bsp_led.h
	*@Author:     Su Daozhen
	*@Libraries:  stdlib v3.5.0
	*@Version:    v1.0.2
	*@Date:       05/10/2019
  **************************************************************
	*/
#ifndef __BSP_LED_H__
#define __BSP_LED_H__

#include "stm32f10x.h"

//定义LED1
#define LED1_GPIO_CLK   RCC_APB2Periph_GPIOC
#define LED1_GPIO_PORT  GPIOC
#define LED1_GPIO_PIN   GPIO_Pin_13

//定义LED2
#define LED2_GPIO_CLK   RCC_APB2Periph_GPIOC
#define LED2_GPIO_PORT  GPIOC
#define LED2_GPIO_PIN   GPIO_Pin_14

//定义LED3
#define LED3_GPIO_CLK   RCC_APB2Periph_GPIOC
#define LED3_GPIO_PORT  GPIOC
#define LED3_GPIO_PIN   GPIO_Pin_15

//LED1开关
#define LED1_ON                   GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN)
#define LED1_OFF                  GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN)
#define LED1_TOGGLE               (LED1_GPIO_PORT->ODR ^= LED1_GPIO_PIN)
//LED2开关
#define LED2_ON                   GPIO_SetBits(LED2_GPIO_PORT, LED2_GPIO_PIN)
#define LED2_OFF                  GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN)
#define LED2_TOGGLE               (LED2_GPIO_PORT->ODR ^= LED2_GPIO_PIN)
//LED3开关
#define LED3_ON                   GPIO_SetBits(LED3_GPIO_PORT, LED3_GPIO_PIN)
#define LED3_OFF                  GPIO_ResetBits(LED3_GPIO_PORT, LED3_GPIO_PIN)
#define LED3_TOGGLE               (LED3_GPIO_PORT->ODR ^= LED3_GPIO_PIN)

void LED_GPIO_Config(void);

#endif /*__BSP_LED_H__*/

/**** Copyright (C)2019 Su Daozhen. All Rights Reserved **** END OF FILE ****/

