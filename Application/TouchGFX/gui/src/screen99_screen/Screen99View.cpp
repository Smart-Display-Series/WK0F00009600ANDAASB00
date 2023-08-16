#include <gui/screen99_screen/Screen99View.hpp>

Screen99View::Screen99View()
{

}

void Screen99View::setupScreen()
{
  presenter->EnablePanel( 0 );
  Screen99ViewBase::setupScreen();
}

void Screen99View::tearDownScreen()
{
    Screen99ViewBase::tearDownScreen();
}

void Screen99View::afterTransition()
{
//  application().gotoScreen03ScreenNoTransition();
}

void Screen99View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
