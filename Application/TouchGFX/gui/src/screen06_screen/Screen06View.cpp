#include <gui/screen06_screen/Screen06View.hpp>

Screen06View::Screen06View()
{

}

void Screen06View::setupScreen()
{
  presenter->EnablePanel( 5 );

  Screen06ViewBase::setupScreen();
}

void Screen06View::tearDownScreen()
{
    Screen06ViewBase::tearDownScreen();
}

void Screen06View::afterTransition()
{
//  application().gotoScreen07ScreenNoTransition();
}

void Screen06View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
