#include <gui/screen04_screen/Screen04View.hpp>

Screen04View::Screen04View()
{

}

void Screen04View::setupScreen()
{
  presenter->EnablePanel( 3 );

  Screen04ViewBase::setupScreen();
}

void Screen04View::tearDownScreen()
{
  Screen04ViewBase::tearDownScreen();
}

void Screen04View::afterTransition()
{
//  application().gotoScreen05ScreenNoTransition();
}

void Screen04View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
