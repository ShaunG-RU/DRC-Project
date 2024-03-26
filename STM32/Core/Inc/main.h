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
#include "stm32g4xx_hal.h"

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
#define GPIO_IN_ENC_SW1_Pin GPIO_PIN_14
#define GPIO_IN_ENC_SW1_GPIO_Port GPIOC
#define GPIO_IN_ENC_SW2_Pin GPIO_PIN_15
#define GPIO_IN_ENC_SW2_GPIO_Port GPIOC
#define GPIO_IN_ENC_SW3_Pin GPIO_PIN_0
#define GPIO_IN_ENC_SW3_GPIO_Port GPIOF
#define GPIO_IN_ENC_SW4_Pin GPIO_PIN_10
#define GPIO_IN_ENC_SW4_GPIO_Port GPIOG
#define GPIO_IN_RST_SW_Pin GPIO_PIN_3
#define GPIO_IN_RST_SW_GPIO_Port GPIOA
#define SPI2_RST_Pin GPIO_PIN_10
#define SPI2_RST_GPIO_Port GPIOB
#define SPI2_DC_Pin GPIO_PIN_11
#define SPI2_DC_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_13
#define SPI2_CS_GPIO_Port GPIOB
#define GPIO_OUT_PG_LED_Pin GPIO_PIN_9
#define GPIO_OUT_PG_LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
