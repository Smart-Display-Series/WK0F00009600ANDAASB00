#include <gui/screen14_screen/Screen14View.hpp>

Screen14View::Screen14View()
{

}

void Screen14View::setupScreen()
{
  presenter->EnablePanel( 13 );

  Screen14ViewBase::setupScreen();
}

void Screen14View::tearDownScreen()
{
    Screen14ViewBase::tearDownScreen();
}

void Screen14View::afterTransition()
{
//  application().gotoScreen15ScreenNoTransition();
}

void Screen14View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}

