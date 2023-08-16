#include <gui/screen11_screen/Screen11View.hpp>

Screen11View::Screen11View()
{

}

void Screen11View::setupScreen()
{
  presenter->EnablePanel( 10 );

  Screen11ViewBase::setupScreen();
}

void Screen11View::tearDownScreen()
{
  Screen11ViewBase::tearDownScreen();
}

void Screen11View::afterTransition()
{
//  application().gotoScreen12ScreenNoTransition();
}

void Screen11View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
