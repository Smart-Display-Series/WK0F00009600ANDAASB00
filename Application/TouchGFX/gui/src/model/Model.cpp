#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern UART_HandleTypeDef huart5;

Model::Model() : modelListener(0),
    screenIndex(1),
    currenttick(0),
    number(0)
{

}

uint32_t Model::getSysTick( )
{
  // get mSec
  #ifndef SIMULATOR
  return xTaskGetTickCount();
  #else
  return 0;
  #endif
}


void Model::tick()
{
	this->SystemProcess( );

  uint32_t elapsedTick = getSysTick() - currenttick;

  if( elapsedTick < 10 )  // uinit : mSec
    return;

  // reload currently tick
  currenttick = getSysTick();

  Event_t msg;

  if( screenIndex <= 15 ) {

    /*
     * Read the current screen value and confirm it.
     * If the screen value is equal to this screen index,
     * update the number value to the current screen.
     */
    if( GetPanel() == screenIndex ) {

      msg.type = Type_Number;

      number += 2;

      msg.data = number;

      modelListener->Rs485NotifyEvent( msg );

      screenIndex ++;

      msg.type = Type_Screen;

      msg.data = screenIndex;

      modelListener->Rs485NotifyEvent( msg );
    }
  }
  else {

    msg.type = Type_Number;

    msg.data = number++;

    modelListener->Rs485NotifyEvent( msg );
  }

}



void Model::SystemProcess ( void )
{

}

uint8_t Model::GetPanel( void )
{

  return ST7735S_GetPanel() + 1;

}

void Model::EnablePanel ( uint8_t device )
{
  ST7735S_EnablePanel( device );
}
