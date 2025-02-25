/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED1_Pin GPIO_PIN_1
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_2
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_3
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_RED2_Pin GPIO_PIN_4
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_5
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_6
#define LED_GREEN2_GPIO_Port GPIOA
#define SEGA_Pin GPIO_PIN_7
#define SEGA_GPIO_Port GPIOA
#define BUTTON1_Pin GPIO_PIN_0
#define BUTTON1_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_1
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON3_Pin GPIO_PIN_2
#define BUTTON3_GPIO_Port GPIOB
#define MSEGG_Pin GPIO_PIN_10
#define MSEGG_GPIO_Port GPIOB
#define EN0_Pin GPIO_PIN_11
#define EN0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_12
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_13
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_14
#define EN3_GPIO_Port GPIOB
#define SEGB_Pin GPIO_PIN_8
#define SEGB_GPIO_Port GPIOA
#define SEGC_Pin GPIO_PIN_9
#define SEGC_GPIO_Port GPIOA
#define SEGD_Pin GPIO_PIN_10
#define SEGD_GPIO_Port GPIOA
#define SEGE_Pin GPIO_PIN_11
#define SEGE_GPIO_Port GPIOA
#define SEGF_Pin GPIO_PIN_12
#define SEGF_GPIO_Port GPIOA
#define SEGG_Pin GPIO_PIN_13
#define SEGG_GPIO_Port GPIOA
#define MSEGA_Pin GPIO_PIN_4
#define MSEGA_GPIO_Port GPIOB
#define MSEGB_Pin GPIO_PIN_5
#define MSEGB_GPIO_Port GPIOB
#define MSEGC_Pin GPIO_PIN_6
#define MSEGC_GPIO_Port GPIOB
#define MSEGD_Pin GPIO_PIN_7
#define MSEGD_GPIO_Port GPIOB
#define MSEGE_Pin GPIO_PIN_8
#define MSEGE_GPIO_Port GPIOB
#define MSEGF_Pin GPIO_PIN_9
#define MSEGF_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
