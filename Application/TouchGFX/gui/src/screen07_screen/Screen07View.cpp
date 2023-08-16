#include <gui/screen07_screen/Screen07View.hpp>

Screen07View::Screen07View()
{

}

void Screen07View::setupScreen()
{
  presenter->EnablePanel( 6 );

  Screen07ViewBase::setupScreen();
}

void Screen07View::tearDownScreen()
{
    Screen07ViewBase::tearDownScreen();
}

void Screen07View::afterTransition()
{
//  application().gotoScreen08ScreenNoTransition();
}

void Screen07View::Rs485NotifyEvent( Event_t msg )
{
  if( msg.type == Type_Screen  )  {

    application().switchScreen( msg.data );
  }
  else if( msg.type == Type_Number ) {

    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%06d", msg.data );

    textArea2.invalidate();
  }
}
