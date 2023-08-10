/* USER CODE BEGIN Header */

/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __EXHAREWARE_H
#define __EXHAREWARE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

typedef struct{
	uint8_t Cycle;
	uint8_t High;
	uint8_t Low;
	bool Active;
}sBuzzer_t;

typedef enum{
	BL_ON = 0x00,
	BL_OFF,
}BACKLIGHT_CONTROL;

typedef enum{
	Beep_ON = 0x00,
	Beep_OFF,
}BEEP_CONTROL;

void Backlight_Control ( BACKLIGHT_CONTROL BL_Ctrl );
void Set_Backlight_Duty ( uint8_t d );
uint8_t Get_Backlight_Duty ( void );
void beep_control ( BEEP_CONTROL beep_ctrl );
void buzzer_process ( void );

#ifdef __cplusplus
}
#endif

#endif /* __EXHAREWARE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
