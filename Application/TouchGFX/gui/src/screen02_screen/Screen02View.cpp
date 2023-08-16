#include <gui/screen02_screen/Screen02View.hpp>

Screen02View::Screen02View()
{

}

void Screen02View::setupScreen()
{
  presenter->EnablePanel( 1 );

  Screen02ViewBase::setupScreen();
}

void Screen02View::tearDownScreen()
{
  Screen02ViewBase::tearDownScreen();
}

void Screen02View::afterTransition()
{
//  application().gotoScreen03ScreenNoTransition();
}

void Screen02View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
