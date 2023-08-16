#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#ifndef SIMULATOR
#include "main.h"
#include "BSP/Panel/ST7735S.h"
#include "cmsis_os.h"
#endif

typedef enum{

  Type_Screen = 0x00,

  Type_Number,

}eMessageType_t;

typedef struct{

  eMessageType_t type;

  uint32_t data;

}Event_t;

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void SystemProcess ( void );

    void EnablePanel ( uint8_t device );

    uint8_t GetPanel( void );

protected:
    ModelListener* modelListener;

private:
    uint32_t getSysTick( );

    uint8_t screenIndex;
    uint32_t currenttick;
    uint32_t number;

    typedef struct{

#ifndef SIMULATOR
      GPIO_TypeDef *Port;
#endif
      uint16_t Pin;

    }sPhysicalButtonAttribute_t;



    sPhysicalButtonAttribute_t ButtonState[ 8 ];
};

#endif // MODEL_HPP
