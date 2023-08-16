#include <gui/screen05_screen/Screen05View.hpp>

Screen05View::Screen05View()
{

}

void Screen05View::setupScreen()
{
  presenter->EnablePanel( 4 );

  Screen05ViewBase::setupScreen();
}

void Screen05View::tearDownScreen()
{
    Screen05ViewBase::tearDownScreen();
}

void Screen05View::afterTransition()
{
//  application().gotoScreen06ScreenNoTransition();
}

void Screen05View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
