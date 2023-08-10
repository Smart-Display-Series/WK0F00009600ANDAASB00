#include "ExHardware.h"
#include "cmsis_os.h"
#include "main.h"

/**
 * usd in backlight function
 **/
extern TIM_HandleTypeDef htim1;

uint8_t backlight = 0xFF;
//---------------------------------


void Backlight_Control ( BACKLIGHT_CONTROL BL_Ctrl )
{
	switch( BL_Ctrl )
	{
		//==============================================
		case BL_ON:
			
			Set_Backlight_Duty( backlight );
			HAL_TIM_PWM_Start( &htim1, TIM_CHANNEL_1 );
			
			break;
		//==============================================
		case BL_OFF:
		default:
			
			HAL_TIM_PWM_Stop( &htim1, TIM_CHANNEL_1 );
			Set_Backlight_Duty( 0 );
			
			break;
		//==============================================
	}
}

void Set_Backlight_Duty ( uint8_t d )
{
#define default_pwm_Max	100
#define default_pwm_min 0
#define true_pwm_Max 	100
#define true_pwm_min 	0
	
	if( backlight == d )
		return;

	d = ( d > default_pwm_Max ) ? default_pwm_Max : d;
	
	backlight = d;
	
	if( d == 0 )
		goto set_duty;
	
	d = ( (true_pwm_Max - true_pwm_min) * (d - default_pwm_min) ) / ( default_pwm_Max - default_pwm_min ) + true_pwm_min;

	set_duty:
	__HAL_TIM_SET_COMPARE( &htim1, TIM_CHANNEL_1, d );
}

uint8_t Get_Backlight_Duty ( void )
{
	return backlight;
}
