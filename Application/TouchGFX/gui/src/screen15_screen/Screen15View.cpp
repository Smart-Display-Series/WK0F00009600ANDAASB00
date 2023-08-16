#include <gui/screen15_screen/Screen15View.hpp>

Screen15View::Screen15View()
{

}

void Screen15View::setupScreen()
{
  presenter->EnablePanel( 14 );

  Screen15ViewBase::setupScreen();
}

void Screen15View::tearDownScreen()
{
  Screen15ViewBase::tearDownScreen();
}

void Screen15View::afterTransition()
{

}

void Screen15View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }

}
