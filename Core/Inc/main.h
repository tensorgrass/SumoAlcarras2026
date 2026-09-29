/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TRACKER_LEFT_Pin GPIO_PIN_1
#define TRACKER_LEFT_GPIO_Port GPIOA
#define TRACKER_RIGHT_Pin GPIO_PIN_5
#define TRACKER_RIGHT_GPIO_Port GPIOA
#define FLAG_LEFT_TIM3_CH1_Pin GPIO_PIN_6
#define FLAG_LEFT_TIM3_CH1_GPIO_Port GPIOA
#define FLAG_RUGHT_TIM3_CH2_Pin GPIO_PIN_7
#define FLAG_RUGHT_TIM3_CH2_GPIO_Port GPIOA
#define Led_tracker_right_GPIO_Output_Pin GPIO_PIN_0
#define Led_tracker_right_GPIO_Output_GPIO_Port GPIOB
#define Led_distance_right_GPIO_Output_Pin GPIO_PIN_1
#define Led_distance_right_GPIO_Output_GPIO_Port GPIOB
#define Led_distance_center_GPIO_Output_Pin GPIO_PIN_2
#define Led_distance_center_GPIO_Output_GPIO_Port GPIOB
#define IR_RECEIVER_TIM2_CH2_Pin GPIO_PIN_10
#define IR_RECEIVER_TIM2_CH2_GPIO_Port GPIOB
#define Led_tracker_ledft_GPIO_Output_Pin GPIO_PIN_14
#define Led_tracker_ledft_GPIO_Output_GPIO_Port GPIOB
#define Led_distance_left_GPIO_Output_Pin GPIO_PIN_8
#define Led_distance_left_GPIO_Output_GPIO_Port GPIOA
#define TOF_RIGHT_Pin GPIO_PIN_15
#define TOF_RIGHT_GPIO_Port GPIOA
#define TOF_CENTER_Pin GPIO_PIN_3
#define TOF_CENTER_GPIO_Port GPIOB
#define TOF_LEFT_Pin GPIO_PIN_4
#define TOF_LEFT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
