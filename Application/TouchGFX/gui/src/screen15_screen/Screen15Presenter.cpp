#include <gui/screen15_screen/Screen15View.hpp>
#include <gui/screen15_screen/Screen15Presenter.hpp>

Screen15Presenter::Screen15Presenter(Screen15View& v)
    : view(v)
{

}

void Screen15Presenter::activate()
{

}

void Screen15Presenter::deactivate()
{

}

void Screen15Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen15Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
