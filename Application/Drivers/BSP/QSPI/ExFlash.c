#include "ExFlash.h"

extern QSPI_HandleTypeDef hqspi;

flash_info_t flash_info = {
	.type = no_flash,
	.size.page = 0,
	.size.subsector = 0,
	.size.sector = 0,
	.size.total = 0,
};

void ex_flash_init ( void )
{
	uint8_t buf[ 3 ];
	
	HAL_QSPI_DeInit( &hqspi );
	BSP_QSPI_Init( );  
	
	if( BSP_QSPI_Reset() == QSPI_ERROR )
    {
	    goto fail;
    }	
	
	if( BSP_QSPI_Read_ID( buf ) != QSPI_OK ) // read external flash ID
		goto fail;
	
	// W25Q128FV(SPI)
	// Maunfacturer and Device Identification
	// +----------------------------------------------------------+
	// | Maunfacturer ID | 		ID15 - ID8	  |		ID7 - ID0	  |
	// +----------------------------------------------------------+
	// |		EFh		 | 		  40h		  | 	  18h		  |
	// +----------------------------------------------------------+
	//
	//
	// MX25L25645G
	// ID Definitions
	// +----------------------------------------------------------+
	// | Maunfacturer ID | 	  Memory Type	  |  Memory Density   |
	// +----------------------------------------------------------+
	// |		C2h		 | 	 	   20h        | 		19h	      |
	// +----------------------------------------------------------+
	
	if( memcmp( buf, "\xEF\x40\x18", 3 ) == 0 )
	{
		flash_info.type 			= w25q128;
		flash_info.size.page 		= 0x100;
		flash_info.size.subsector 	= 0x1000;
		flash_info.size.sector 		= 0x10000;
		flash_info.size.total 		= 0x1000000;	
	
		HAL_QSPI_DeInit( &hqspi );
		
		BSP_QSPI_Init( );
				
		if( BSP_QSPI_EnableMemoryMappedMode( ) == QSPI_OK )
			return;
	}
	if( memcmp( buf, "\xEF\x40\x16", 3 ) == 0 )
	{
		flash_info.type 			= w25q32;
		flash_info.size.page 		= 0x100;
		flash_info.size.subsector 	= 0x1000;
		flash_info.size.sector 		= 0x10000;
		flash_info.size.total 		= 0x400000;		
	
		HAL_QSPI_DeInit( &hqspi );
		
		BSP_QSPI_Init( );
				
		if( BSP_QSPI_EnableMemoryMappedMode( ) == QSPI_OK )
			return;
	}
	
	else			
	{
		flash_info.type = no_flash;
	}
	
	fail: 
	
	/**
	 * show flash error msg
	 **/
  
		
	while( 1 );
}


