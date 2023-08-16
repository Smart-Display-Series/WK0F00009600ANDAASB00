#include <gui/screen09_screen/Screen09View.hpp>

Screen09View::Screen09View()
{

}

void Screen09View::setupScreen()
{
  presenter->EnablePanel( 8 );
  Screen09ViewBase::setupScreen();
}

void Screen09View::tearDownScreen()
{
    Screen09ViewBase::tearDownScreen();
}

void Screen09View::afterTransition()
{
//  application().gotoScreen10ScreenNoTransition();
}

void Screen09View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
