#include <gui/screen01_screen/Screen01View.hpp>

Screen01View::Screen01View()
{

}

void Screen01View::setupScreen()
{
    Screen01ViewBase::setupScreen();
}

void Screen01View::tearDownScreen()
{
    Screen01ViewBase::tearDownScreen();
}

void Screen01View::afterTransition()
{

}

void Screen01View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}

