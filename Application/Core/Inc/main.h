/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f7xx_hal.h"

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
typedef struct{
	uint8_t buttonValue;
}ButtonState_t;

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_NSS2_Pin GPIO_PIN_13
#define SPI1_NSS2_GPIO_Port GPIOC
#define SPI1_NSS3_Pin GPIO_PIN_0
#define SPI1_NSS3_GPIO_Port GPIOC
#define SPI1_NSS4_Pin GPIO_PIN_3
#define SPI1_NSS4_GPIO_Port GPIOC
#define SPI1_NSS5_Pin GPIO_PIN_0
#define SPI1_NSS5_GPIO_Port GPIOA
#define DCX1_Pin GPIO_PIN_1
#define DCX1_GPIO_Port GPIOA
#define SPI2_NSS2_Pin GPIO_PIN_2
#define SPI2_NSS2_GPIO_Port GPIOA
#define SPI2_NSS3_Pin GPIO_PIN_3
#define SPI2_NSS3_GPIO_Port GPIOA
#define SPI1_NSS1_Pin GPIO_PIN_4
#define SPI1_NSS1_GPIO_Port GPIOA
#define SPI2_NSS4_Pin GPIO_PIN_4
#define SPI2_NSS4_GPIO_Port GPIOC
#define SPI2_NSS5_Pin GPIO_PIN_0
#define SPI2_NSS5_GPIO_Port GPIOB
#define SPI3_NSS2_Pin GPIO_PIN_1
#define SPI3_NSS2_GPIO_Port GPIOB
#define SPI3_NSS3_Pin GPIO_PIN_11
#define SPI3_NSS3_GPIO_Port GPIOB
#define SPI2_NSS1_Pin GPIO_PIN_12
#define SPI2_NSS1_GPIO_Port GPIOB
#define SPI3_NSS4_Pin GPIO_PIN_13
#define SPI3_NSS4_GPIO_Port GPIOB
#define SPI3_NSS5_Pin GPIO_PIN_8
#define SPI3_NSS5_GPIO_Port GPIOA
#define PWMA_Pin GPIO_PIN_9
#define PWMA_GPIO_Port GPIOA
#define RESETb_Pin GPIO_PIN_12
#define RESETb_GPIO_Port GPIOA
#define SPI3_NSS1_Pin GPIO_PIN_15
#define SPI3_NSS1_GPIO_Port GPIOA
#define DCX2_Pin GPIO_PIN_4
#define DCX2_GPIO_Port GPIOB
#define DCX3_Pin GPIO_PIN_9
#define DCX3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
