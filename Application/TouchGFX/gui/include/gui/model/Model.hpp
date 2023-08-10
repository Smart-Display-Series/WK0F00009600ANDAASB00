#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "stm32f7xx_hal.h"
#include "main.h"
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
protected:
    ModelListener* modelListener;
private:
    typedef struct{
		GPIO_TypeDef *Port;
		uint16_t Pin;
    }sPhysicalButtonAttribute_t;

    sPhysicalButtonAttribute_t ButtonState[ 8 ];
};

#endif // MODEL_HPP
