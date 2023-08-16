#include <gui/screen08_screen/Screen08View.hpp>

Screen08View::Screen08View()
{

}

void Screen08View::setupScreen()
{
  presenter->EnablePanel( 7 );

  Screen08ViewBase::setupScreen();
}

void Screen08View::tearDownScreen()
{
    Screen08ViewBase::tearDownScreen();
}

void Screen08View::afterTransition()
{
//  application().gotoScreen09ScreenNoTransition();
}

void Screen08View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
