#include <gui/screen13_screen/Screen13View.hpp>

Screen13View::Screen13View()
{

}

void Screen13View::setupScreen()
{
  presenter->EnablePanel( 12 );

  Screen13ViewBase::setupScreen();
}

void Screen13View::tearDownScreen()
{
    Screen13ViewBase::tearDownScreen();
}

void Screen13View::afterTransition()
{
//  application().gotoScreen14ScreenNoTransition();
}

void Screen13View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
