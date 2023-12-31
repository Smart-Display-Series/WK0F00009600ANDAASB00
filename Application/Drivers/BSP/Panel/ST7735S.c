#include "ST7735S.h"


/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/
bool isTransmitActive = false;
uint8_t nowST7735_Device = 0;

/* Private function prototypes -----------------------------------------------*/

void st7735_Init( uint8_t device );

LCD_DrvTypeDef st7735_drv[15] = {

  {
    .Init = st7735_Init,
    0,
    // st7735_DisplayOn,
    // st7735_DisplayOff,
    // st7735_SetCursor,
    // st7735_WritePixel,
    0,
    // st7735_SetDisplayWindow,
    // st7735_DrawHLine,
    // st7735_DrawVLine,
    // st7735_GetLcdPixelWidth,
    // st7735_GetLcdPixelHeight,
    // st7735_DrawBitmap,
    .comment = "CON01",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON02",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON03",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON04",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON05",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON06",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON07",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON08",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON09",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON10",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON11",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON12",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON13",
  },

  {
      st7735_Init,
      0,
      // st7735_DisplayOn,
      // st7735_DisplayOff,
      // st7735_SetCursor,
      // st7735_WritePixel,
      0,
      // st7735_SetDisplayWindow,
      // st7735_DrawHLine,
      // st7735_DrawVLine,
      // st7735_GetLcdPixelWidth,
      // st7735_GetLcdPixelHeight,
      // st7735_DrawBitmap,
      .comment = "CON14",
  },

  {
    st7735_Init,
    0,
    // st7735_DisplayOn,
    // st7735_DisplayOff,
    // st7735_SetCursor,
    // st7735_WritePixel,
    0,
    // st7735_SetDisplayWindow,
    // st7735_DrawHLine,
    // st7735_DrawVLine,
    // st7735_GetLcdPixelWidth,
    // st7735_GetLcdPixelHeight,
    // st7735_DrawBitmap,
    .comment = "CON15",
  },
};

/* Private user code ---------------------------------------------------------*/

static void RST_SetLow( uint8_t device )
{
  HAL_GPIO_WritePin( st7735_drv[device].RESET_GPIO_Port, st7735_drv[device].RESET_GPIO_Pin, GPIO_PIN_RESET );
}

static void RST_SetHigh( uint8_t device )
{
	HAL_GPIO_WritePin( st7735_drv[device].RESET_GPIO_Port, st7735_drv[device].RESET_GPIO_Pin, GPIO_PIN_SET );
}

static void CS_SetLow( uint8_t device )
{
	HAL_GPIO_WritePin( st7735_drv[device].NSS_GPIO_Port, st7735_drv[device].NSS_GPIO_Pin, GPIO_PIN_RESET );
}
static void CS_SetHigh( uint8_t device )
{
  HAL_GPIO_WritePin( st7735_drv[device].NSS_GPIO_Port, st7735_drv[device].NSS_GPIO_Pin, GPIO_PIN_SET );
}

static void RS_SetLow( uint8_t device )
{
	HAL_GPIO_WritePin( st7735_drv[device].DCX_GPIO_Port, st7735_drv[device].DCX_GPIO_Pin, GPIO_PIN_RESET );
}

static void RS_SetHigh( uint8_t device )
{
	HAL_GPIO_WritePin( st7735_drv[device].DCX_GPIO_Port, st7735_drv[device].DCX_GPIO_Pin, GPIO_PIN_SET );
}

void spi_write_nbytes_Command ( uint8_t device, uint8_t *d, uint32_t len )
{
  HAL_SPI_Transmit( st7735_drv[device].hspi, d, len, 100 );
}

void spi_write_nbytes_Data ( uint8_t device, uint8_t *d, uint32_t len )
{
	uint32_t lengh = len;

	while( lengh-- ) {

    uint16_t data = *d;
    data |= 0x100;
    
    HAL_SPI_Transmit( st7735_drv[device].hspi, (uint8_t*)&data, 1, 100 );
    
    d++;
	}
}

static void spi_write_nbytes ( uint8_t device, uint8_t *d, uint32_t len )
{
  HAL_SPI_Transmit( st7735_drv[device].hspi, d, len, 100 );
}

static void spi_read_nbytes ( uint8_t device, uint8_t *d, uint32_t len )
{
  HAL_SPI_Receive( st7735_drv[device].hspi, d, len, 100 );
}

static void spi_change_data_size ( uint8_t device, uint8_t size )
{
	size = ( size > 16 ) ? 16 : size;
	size = ( size < 4 ) ? 4 : size;
	size--;
	
	st7735_drv[device].hspi->Init.DataSize = size * 0x100;
	
	HAL_SPI_DeInit( st7735_drv[device].hspi );
	HAL_SPI_Init( st7735_drv[device].hspi );
}

static void spi_set_prescaler ( uint8_t device, uint32_t prescaler )
{
	/* Confirm that the pointer of SPI handler is available */

  st7735_drv[device].hspi->Init.BaudRatePrescaler = prescaler;
	
	HAL_SPI_DeInit( st7735_drv[device].hspi );
	HAL_SPI_Init( st7735_drv[device].hspi );
}

void ST7735S_hardware_reset ( uint8_t device )
{
  HAL_Delay( 10 );
  RST_SetLow( device );    // RST Low
  HAL_Delay( 10 );         // RSE low level more than 10us
  RST_SetHigh( device );   // RST High
  HAL_Delay( 10 );
}

void ST7735S_WrCmd ( uint8_t device, uint8_t d )
{
  CS_SetLow( device );
  RS_SetLow( device );
  spi_write_nbytes( device, &d, 1 );
  CS_SetHigh( device );
}

void ST7735S_WrData ( uint8_t device, uint8_t d )
{
  CS_SetLow( device );
  RS_SetHigh( device );
  spi_write_nbytes( device, &d, 1 );
  CS_SetHigh( device );
}

void ST7735S_ReCmd ( uint8_t device, uint8_t cmd, uint8_t *d, uint8_t byte_num )
{
  CS_SetLow( device );
  RS_SetLow( device );

  spi_write_nbytes( device, &cmd, 1 );
  spi_read_nbytes( device, d, byte_num );

  CS_SetHigh( device );
}

void ST7735S_set_display_window ( uint8_t device, uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey )
{
  sx = ( sx < 160 ) ? ( sx + 0x01 ) : ( ResolutionWidth );
  sy = ( sy < 80 ) ? ( sy + 0x1A ) : ( 79 + 0x1A );
  ex = ( ex < 160 ) ? ( ex + 0x01 ) : ( ResolutionWidth );
  ey = ( ey < 80 ) ? ( ey + 0x1A ) : ( 79 + 0x1A );

  /*****************************************************/
  ST7735S_WrCmd( device, CASET );
  ST7735S_WrData( device, sx >> 8 );    // 65K Mode
  ST7735S_WrData( device, sx & 0xFF );    // 65K Mode
  ST7735S_WrData( device, ex >> 8 );    // 65K Mode
  ST7735S_WrData( device, ex & 0xFF );    // 65K Mode

  /*****************************************************/
  ST7735S_WrCmd( device, RASET );
  ST7735S_WrData( device, sy >> 8 );    // 6
  ST7735S_WrData( device, sy & 0xFF );    //
  ST7735S_WrData( device, ey >> 8 );    //
  ST7735S_WrData( device, ey & 0xFF );    //

  /*****************************************************/
  ST7735S_WrCmd( device, RAMWR );     // GRAM
}

/*****************************************************
 * For safety, set the 2A and 2B command first for ensure the display area,
 * and set cursor to the original position
 *****************************************************/
void clear_full_screen ( uint8_t device, uint16_t color )
{
  /*****************************************************/
  ST7735S_set_display_window( device, 0, 0, (ResolutionWidth - 1), (ResolutionHeight - 1) );

  /*****************************************************/
  // SET spi data bus width as 16-bits
  spi_change_data_size( device, 16 );

  /*****************************************************/
  CS_SetLow( device );
  RS_SetHigh( device );

  for( uint32_t i = 0 ; i < ResolutionWidth * ResolutionHeight ; i++ ) {

    spi_write_nbytes( device, (uint8_t*)&color, 1 ); // 128 * 160 = 20480
  }

  CS_SetHigh( device );
  /*****************************************************/
  // SET spi data bus width as 8-bits
  spi_change_data_size( device, 8 );
}


void st7735_Init( uint8_t device )
{
  static uint8_t initFlg = 0;

  if( initFlg == 0 ) {

    initFlg = 1;
    // Reset ST7735S IC by hardware
    ST7735S_hardware_reset( device );
  }
  /*****************************************************/
  // Sleep out
  ST7735S_WrCmd( device, SLPOUT );
  HAL_Delay( 120 );

  /*****************************************************/
  //ST7735S Frame Rate Setting in normal mode: fosc/ (((RTNA*2)+40)*(LINE+FPA+BPA+2))=80
  ST7735S_WrCmd( device, FRMCTR1 );   // fosc = 850KHz
  ST7735S_WrData( device, 0x05 );     // RTNA = 5
  ST7735S_WrData( device, 0x3C );     // FPA = 58
  ST7735S_WrData( device, 0x3C );     // BPA = 58

  /*****************************************************/
  // ST7735S Frame Rate Setting in idle mode: fosc/ (((RTNB*2)+40)*(LINE+FPB+BPB+2))=80
  ST7735S_WrCmd( device, FRMCTR2 );   // fosc = 850KHz
  ST7735S_WrData( device, 0x05 );     // RTNB = 5
  ST7735S_WrData( device, 0x3C );     // FPB = 58
  ST7735S_WrData( device, 0x3C );     // BPB = 58

  /*****************************************************/
  // ST7735S Frame Rate Setting in parital mode (dot inverson): fosc/ (((RTNC*2)+40)*(LINE+FPC+BPC+2))=80
  // ST7735S Frame Rate Setting in parital mode (column inverson): fosc/ (((RTNC*2)+40)*(LINE+FPC+BPC+2))=80
  ST7735S_WrCmd( device, FRMCTR3 );   // fosc=850KHz
  ST7735S_WrData( device, 0x05 );     // RTNC = 5
  ST7735S_WrData( device, 0x3C );     // FPC = 58
  ST7735S_WrData( device, 0x3C );     // BPC = 58
  ST7735S_WrData( device, 0x05 );     // RTND = 5
  ST7735S_WrData( device, 0x3C );     // FPD = 58
  ST7735S_WrData( device, 0x3C );     // BPD = 58

  /*****************************************************/
  //ST7735S Display Inversion Control
  ST7735S_WrCmd( device, INVCTR );    // Dot inversion: 20184019 modify from Sitronix initial code
  ST7735S_WrData( device, 0x07 );     // 0xB4[2]=Inversion setting in normal mode
                                      // 0xB4[1]=Inversion setting in idle mode
                                      // 0xB4[0]=Inversion setting in partial mode

  /*****************************************************/
  // ST7735S Power on Sequence
  ST7735S_WrCmd( device, PWCTR1 );    // power control 1
  ST7735S_WrData( device, 0xE9 );     // {Par.3[0],Par.1[4:0]}=VRHP[5:0]=2?臗VDD=4.6, Par.1[7:5]=AVDD [2:0]=6?VDD=5.1
  ST7735S_WrData( device, 0x09 );     // {Par.3[1],Par.2[4:0]}=VRHN[5:0]=2?臗VCL=-4.6
  ST7735S_WrData( device, 0x04 );     // Par.3[7:6]=MODE[1:0]=2X

  /*****************************************************/
  ST7735S_WrCmd( device, PWCTR2 );    // power control 2
  ST7735S_WrData( device, 0xC5 );     // Par.1 [1:0]=VGHBT[1:0]=0??GH=2*AVDD+VGH25-0.5
                                      // Par.1 [3:2]=VGLSEL[1:0]=0??GL=-7.5
                                      // Par.1 [7:6]=VGLSEL[1:0]=3??GH25=2.4

  /*****************************************************/
  ST7735S_WrCmd( device, PWCTR3 );    // power control 3
  ST7735S_WrData( device, 0x0D );     // (Sitronix initial) {Par.1 [7:6],Par.2[7:0]=DCA[9:0]=000000000'b??ooster set up cycle BCLK/1 BCLK/3 BCLK/1 BCLK/1 BCLK/1 in normal mode
  ST7735S_WrData( device, 0x00 );     // Par.1[5:3]=SAPA[2:0]=001'b??OP current is small in normal mode
                                      // Par.1[2:0]=APA[2:0]=001'b??OP current is Large in normal mode

  /*****************************************************/
  ST7735S_WrCmd( device, PWCTR4 );    // power control 4
  ST7735S_WrData( device, 0x8D );     // (Sitronix initial){Par.1 [7:6],Par.2[7:0]=DCB[9:0]=1001101010'b??ooster set up cycle BCLK/2 BCLK/1 BCLK/2 BCLK/2 BCLK/2 in idle mode
  ST7735S_WrData( device, 0x6A );     // Par.1[5:3]=SAPB[2:0]=001'b??OP current is small in idle mode
                                      // Par.1[2:0]=APB[2:0]=011'b??OP current is Medium in idle mode

  /*****************************************************/
  ST7735S_WrCmd( device, PWCTR5 );    // power control 5
  ST7735S_WrData( device, 0x8D );     // (Sitronix initial){Par.1 [7:6],Par.2[7:0]=DCC[9:0]=1011101110'b??ooster set up cycle BCLK/2 BCLK/2 BCLK/2 BCLK/4 BCLK/2 in partial mode
  ST7735S_WrData( device, 0xEE );     // Par.1[5:3]=SAPC[2:0]=001'b??OP current is small in partial mode


  /*****************************************************/
  // ST7735S VCOM
  ST7735S_WrCmd( device, VMCTR1 );   // VCOM setting value
  ST7735S_WrData( device, 0x15 );    // 0xC5[5:0]=010010'b ??VCOM=-0.875

  /*****************************************************/
  // ST7735 Memory data access control: add from Sitronix initial code
  ST7735S_WrCmd( device, MADCTL );    // VCOM setting value
  ST7735S_WrData( device, 0x68 );     // normal display
  // ST7735S_WrData( 0xE8 );          // upside down

  /*****************************************************/
  //ST7735 Display Inversion on
  ST7735S_WrCmd( device, INVON );

  /*****************************************************/
  // ST7735 Gamma Sequence
  ST7735S_WrCmd( device, GMCTRP1 ); // Gamma setting value (Positive Polarity)
  ST7735S_WrData( device, 0x07 );   // Par.1[5:0]=VRF0P[5:0]=000011'b (Variable Resistor VRHP)
  ST7735S_WrData( device, 0x0E );   // Par.2[5:0]=VOS0P[5:0]=011011'b (Variable Resistor VRLP)
  ST7735S_WrData( device, 0x08 );   // Par.3[5:0]=PK0P[5:0]=010010'b  (Voltage of V3 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.4[5:0]=PK1P[5:0]=010001'b  (Voltage of V4 grayscale)
  ST7735S_WrData( device, 0x10 );   // Par.5[5:0]=PK2P[5:0]=111111'b  (Voltage of V12 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.6[5:0]=PK3P[5:0]=111010'b  (Voltage of V20 grayscale)
  ST7735S_WrData( device, 0x02 );   // Par.7[5:0]=PK4P[5:0]=111010'b  (Voltage of V28 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.8[5:0]=PK5P[5:0]=110100'b  (Voltage of V36 grayscale)
  ST7735S_WrData( device, 0x09 );   // Par.9[5:0]=PK6P[5:0]=101111'b  (Voltage of V44 grayscale)
  ST7735S_WrData( device, 0x0F );   // Par.10[5:0]=PK7P[5:0]=101011'b  (Voltage of V52 grayscale)
  ST7735S_WrData( device, 0x25 );   // Par.11[5:0]=PK8P[5:0]=110000'b  (Voltage of V56 grayscale)
  ST7735S_WrData( device, 0x36 );   // Par.12[5:0]=PK9P[5:0]=111010'b  (Voltage of V60 grayscale)
  ST7735S_WrData( device, 0x00 );   // Par.13[5:0]=SELV0P[5:0]=000000'b  (Voltage of V0 grayscale)
  ST7735S_WrData( device, 0x08 );   // Par.14[5:0]=SELV1P[5:0]=000001'b  (Voltage of V1 grayscale)
  ST7735S_WrData( device, 0x04 );   // Par.15[5:0]=SELV62P[5:0]=000010'b  (Voltage of V62 grayscale)
  ST7735S_WrData( device, 0x10 );   // Par.16[5:0]=SELV63P[5:0]=001001'b  (Voltage of V63 grayscale)

  /*****************************************************/
  ST7735S_WrCmd( device, GMCTRN1 ); // Gamma setting value (Negative Polarity)
  ST7735S_WrData( device, 0x0A );   // Par.1[5:0]=VRF0N[5:0]=000011'b (Variable Resistor VRHN)
  ST7735S_WrData( device, 0x0D );   // Par.2[5:0]=VOS0N[5:0]=011011'b (Variable Resistor VRLN)
  ST7735S_WrData( device, 0x08 );   // Par.3[5:0]=PK0N[5:0]=010010'b  (Voltage of V3 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.4[5:0]=PK1N[5:0]=010001'b  (Voltage of V4 grayscale)
  ST7735S_WrData( device, 0x0F );   // Par.5[5:0]=PK2N[5:0]=110010'b  (Voltage of V12 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.6[5:0]=PK3N[5:0]=101111'b  (Voltage of V20 grayscale)
  ST7735S_WrData( device, 0x02 );   // Par.7[5:0]=PK4N[5:0]=101010'b  (Voltage of V28 grayscale)
  ST7735S_WrData( device, 0x07 );   // Par.8[5:0]=PK5N[5:0]=101111'b  (Voltage of V36 grayscale)
  ST7735S_WrData( device, 0x09 );   // Par.9[5:0]=PK6N[5:0]=101110'b  (Voltage of V44 grayscale)
  ST7735S_WrData( device, 0x0F );   // Par.10[5:0]=PK7N[5:0]=101100'b  (Voltage of V52 grayscale)
  ST7735S_WrData( device, 0x25 );   // Par.11[5:0]=PK8N[5:0]=111001'b  (Voltage of V56 grayscale)
  ST7735S_WrData( device, 0x35 );   // Par.12[5:0]=PK9N[5:0]=111111'b  (Voltage of V60 grayscale)
  ST7735S_WrData( device, 0x00 );   // Par.13[5:0]=SELV0N[5:0]=000000'b  (Voltage of V0 grayscale)
  ST7735S_WrData( device, 0x09 );   // Par.14[5:0]=SELV1N[5:0]=000000'b  (Voltage of V1 grayscale)
  ST7735S_WrData( device, 0x04 );   // Par.15[5:0]=SELV62N[5:0]=000001'b  (Voltage of V62 grayscale)
  ST7735S_WrData( device, 0x10 );   // Par.16[5:0]=SELV63N[5:0]=001001'b  (Voltage of V63 grayscale)

  /*****************************************************/
  ST7735S_WrCmd( device, GCV );       // Enable Gate power save mode
  ST7735S_WrData( device, 0xC0 );     // 0xFC[7:6]=GCV_Enable[1:0]=10'b??Gate Pump Clock Frequency disable
                                      // 0xFC[3:2]=CLK_Variable[1:0]=11'b??Save Power Ability is Large

  /*****************************************************/
  ST7735S_WrCmd( device, COLMOD );
  ST7735S_WrData( device, 0x05 );   // 65K Mode

  /*****************************************************/
  ST7735S_WrCmd( device, CASET );
  ST7735S_WrData( device, 0x00 );   // 65K Mode
  ST7735S_WrData( device, 0x01 );   // 65K Mode
  ST7735S_WrData( device, 0x00 );   // 65K Mode
  ST7735S_WrData( device, 0xA0 );   // 65K Mode

  /*****************************************************/
  ST7735S_WrCmd( device, RASET );
  ST7735S_WrData( device, 0x00 );     // 6
  ST7735S_WrData( device, 0x1A );     //
  ST7735S_WrData( device, 0x00 );     //
  ST7735S_WrData( device, 0x69 );     //

  /*****************************************************/
  clear_full_screen( device, 0x00 );  // clear frame buffer to black

  /*****************************************************/
  ST7735S_WrCmd( device, DISPON );    // Display on

  /*****************************************************/
  ST7735S_WrCmd( device, RAMWR );     // GRAM

  /*****************************************************/
  // use lower speed for read data from ST7735S, min serial clock cycle 150ns ( 6.67MHz )
  spi_set_prescaler( device, SPI_BAUDRATEPRESCALER_16 ); // 108M / 16 = 6.75MBits/s

  /*****************************************************/
  uint8_t buf[3];

  // read id
  ST7735S_ReCmd( device, RDID1, &buf[0], 1 ); // LCD module's manufacturer ID
  ST7735S_ReCmd( device, RDID2, &buf[1], 1 ); // LCD module/driver version ID
  ST7735S_ReCmd( device, RDID3, &buf[2], 1 ); // LCD module/driver ID

  /*****************************************************/
  // use higher speed for write data to ST7735S, min serial clock cycle 66ns ( 15.15MHz )
  spi_set_prescaler( device, SPI_BAUDRATEPRESCALER_8 ); // 108M / 8 = 13.5MBits/s
}

void ST7735S_EnablePanel( uint8_t device  )
{
  nowST7735_Device = device;
}

uint8_t ST7735S_GetPanel( )
{
  return nowST7735_Device;
}

/*****************************************************
 * For safety, set the 2A and 2B command first for ensure the display area,
 * and set cursor to the original position
 *****************************************************/
void paint_full_screen ( uint8_t device, uint8_t *addr )
{	
	/*****************************************************/
	ST7735S_set_display_window( device, 0, 0, (ResolutionWidth - 1), (ResolutionHeight - 1) );
	
  /*****************************************************/
  // SET spi data bus width as 16-bits
  spi_change_data_size( device, 16 );

  /*****************************************************/
  CS_SetLow( device );
  RS_SetHigh( device );

  spi_write_nbytes( device, addr, 12800 ); // 80 * 160 = 12800
  CS_SetHigh( device );

  /*****************************************************/
  // SET spi data bus width as 8-bits
  spi_change_data_size( device, 8 );
}

void paint_section_screen ( uint8_t *d, uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint32_t size )
{
  //	uint32_t getSystemTick,getSystemTick1,getSystemTickInterval;
  //	getSystemTick = HAL_GetTick();
	/*****************************************************/
	ST7735S_set_display_window( nowST7735_Device, x, y, (x + w - 1), (y + h - 1) );
	/*****************************************************/

  /*****************************************************/
  // SET spi data bus width as 16-bits
  spi_change_data_size( nowST7735_Device, 16 );

  /*****************************************************/
  CS_SetLow( nowST7735_Device );
  RS_SetHigh( nowST7735_Device );
  spi_write_nbytes( nowST7735_Device, d, size );
  CS_SetHigh( nowST7735_Device );

  /*****************************************************/
  // SET spi data bus width as 8-bits
  spi_change_data_size( nowST7735_Device, 8 );

	/*****************************************************/
	clearTransmitActive();
  DisplayDriver_TransferCompleteCallback();
}

void setTransmitActive ( void )
{
	isTransmitActive = true;
}

void clearTransmitActive ( void )
{
	isTransmitActive = false;
}

bool getTransmitActive ( void )
{
	return isTransmitActive;
}

int touchgfxDisplayDriverTransmitActive( )
{
	return getTransmitActive( );
}

int touchgfxDisplayDriverShouldTransferBlock(uint16_t bottom)
{
	return 0xFFFF;
}

void touchgfxDisplayDriverTransmitBlock( const uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h )
{
	paint_section_screen( (uint8_t*)pixels, x, y, w, h, (w*h) );
}



