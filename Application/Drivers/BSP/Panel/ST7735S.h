/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _ST7735S_H
#define _ST7735S_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"
#include "BSP/lcd.h"

// #define Portrait
#define Landscape

#if defined(Portrait)
#define ResolutionWidth 128
#define ResolutionHeight 160
#elif defined(Landscape)
// #define ResolutionWidth  160
// #define ResolutionHeight 128
#endif

#define ResolutionWidth  160
#define ResolutionHeight 80
	
#define RDDID		  0x04
#define SLPOUT		0x11
#define INVOFF		0x20
#define INVON		  0x21
#define DISPON		0x29
#define CASET		  0x2A
#define RASET		  0x2B
#define RAMWR		  0x2C
#define MADCTL		0x36
#define COLMOD		0x3A
#define FRMCTR1		0xB1
#define FRMCTR2		0xB2
#define FRMCTR3		0xB3
#define INVCTR		0xB4
#define PWCTR1		0xC0
#define PWCTR2		0xC1
#define PWCTR3		0xC2
#define PWCTR4		0xC3
#define PWCTR5		0xC4
#define VMCTR1		0xC5
#define RDID1		  0xDA
#define RDID2		  0xDB
#define RDID3		  0xDC
#define GMCTRP1		0xE0
#define GMCTRN1		0xE1
#define GCV			  0xFC

void ST7735S_EnablePanel( uint8_t device );
uint8_t ST7735S_GetPanel( void );

/* LCD driver structure */
extern LCD_DrvTypeDef   st7735_drv[15];

#ifdef __cplusplus
}
#endif

#endif /* _ST7735S_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
