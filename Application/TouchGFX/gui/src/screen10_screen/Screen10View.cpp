#include <gui/screen10_screen/Screen10View.hpp>

Screen10View::Screen10View()
{

}

void Screen10View::setupScreen()
{
  presenter->EnablePanel( 9 );

  Screen10ViewBase::setupScreen();
}

void Screen10View::tearDownScreen()
{
    Screen10ViewBase::tearDownScreen();
}

void Screen10View::afterTransition()
{
//  application().gotoScreen11ScreenNoTransition();
}

void Screen10View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
