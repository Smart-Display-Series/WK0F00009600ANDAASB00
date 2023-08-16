#include <gui/screen12_screen/Screen12View.hpp>

Screen12View::Screen12View()
{

}

void Screen12View::setupScreen()
{
  presenter->EnablePanel( 11 );

  Screen12ViewBase::setupScreen();
}

void Screen12View::tearDownScreen()
{
    Screen12ViewBase::tearDownScreen();
}

void Screen12View::afterTransition()
{
//  application().gotoScreen13ScreenNoTransition();
}

void Screen12View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
