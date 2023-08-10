#ifndef EX_FLASH_H
#define EX_FLASH_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "qspi.h"

#define External_Flash_Offset		0x90000000
#define Application_HeaderAddress 	0x90000200
#define Application_CodeAddress		0x90000000

typedef struct{
	enum{
		no_flash = 0,
		w25q32,
		w25q128,
		mx25l25645g,
	}type;
	
	struct{
		uint32_t page;
		uint32_t subsector;
		uint32_t sector;
		uint32_t total;
	}size;
}flash_info_t;

void ex_flash_init ( void );

extern flash_info_t flash_info;

#endif /* EX_FLASH_H*/
