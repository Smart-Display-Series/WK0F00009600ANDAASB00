#include <gui/screen01_screen/Screen01View.hpp>
#include <gui/screen01_screen/Screen01Presenter.hpp>

Screen01Presenter::Screen01Presenter(Screen01View& v)
    : view(v)
{

}

void Screen01Presenter::activate()
{

}

void Screen01Presenter::deactivate()
{

}

void Screen01Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen01Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
