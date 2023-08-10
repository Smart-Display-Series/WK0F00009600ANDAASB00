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

//#define Portrait
#define Landscape

#if defined(Portrait)
#define ResolutionWidth 128
#define ResolutionHeight 160
#elif defined(Landscape)
//#define ResolutionWidth  160
//#define ResolutionHeight 128
#endif

#define ResolutionWidth  160
#define ResolutionHeight 80
	
#define RDDID		0x04
#define SLPOUT		0x11
#define INVOFF		0x20
#define INVON		0x21
#define DISPON		0x29
#define CASET		0x2A
#define RASET		0x2B
#define RAMWR		0x2C
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
#define RDID1		0xDA
#define RDID2		0xDB
#define RDID3		0xDC
#define GMCTRP1		0xE0
#define GMCTRN1		0xE1
#define GCV			0xFC

	
bool ST7735S_init ( SPI_HandleTypeDef *hspi, GPIO_TypeDef *RST_PORT, uint16_t RST_PIN, GPIO_TypeDef *CS_PORT, uint16_t CS_PIN, GPIO_TypeDef *RS_PORT, uint16_t RS_PIN );
void ST7735S_init_0096( SPI_HandleTypeDef *hspi, GPIO_TypeDef *RST_PORT, uint16_t RST_PIN, GPIO_TypeDef *CS_PORT, uint16_t CS_PIN, GPIO_TypeDef *RS_PORT, uint16_t RS_PIN );

void ST7735S_hardware_reset ( void );
void ST7735S_WrCmd ( uint8_t d );
void ST7735S_WrData ( uint8_t d );
void ST7735S_ReCmd ( uint8_t cmd, uint8_t *d, uint8_t byte_num );
void ST7735S_set_display_window ( uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey );
void clear_full_screen ( uint16_t color );
void paint_full_screen ( uint8_t *addr );
void paint_section_screen ( uint8_t *d, uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint32_t size );

void setTransmitActive ( void );
void clearTransmitActive ( void );
bool getTransmitActive ( void );

//extern "C" int touchgfxDisplayDriverTransmitActive( );
//extern "C" void touchgfxDisplayDriverTransmitBlock( const uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h );

#ifdef __cplusplus
}
#endif

#endif /* _ST7735S_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
