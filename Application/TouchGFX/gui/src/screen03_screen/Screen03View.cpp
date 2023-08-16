#include <gui/screen03_screen/Screen03View.hpp>

Screen03View::Screen03View()
{

}

void Screen03View::setupScreen()
{
  presenter->EnablePanel( 2 );

  Screen03ViewBase::setupScreen();
}

void Screen03View::tearDownScreen()
{
  Screen03ViewBase::tearDownScreen();
}

void Screen03View::afterTransition()
{
//  application().gotoScreen04ScreenNoTransition();
}

void Screen03View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}


