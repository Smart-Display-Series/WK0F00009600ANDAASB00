#include <gui/screen11_screen/Screen11View.hpp>
#include <gui/screen11_screen/Screen11Presenter.hpp>

Screen11Presenter::Screen11Presenter(Screen11View& v)
    : view(v)
{

}

void Screen11Presenter::activate()
{

}

void Screen11Presenter::deactivate()
{

}

void Screen11Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen11Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
