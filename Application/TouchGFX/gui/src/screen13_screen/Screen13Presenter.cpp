#include <gui/screen13_screen/Screen13View.hpp>
#include <gui/screen13_screen/Screen13Presenter.hpp>

Screen13Presenter::Screen13Presenter(Screen13View& v)
    : view(v)
{

}

void Screen13Presenter::activate()
{

}

void Screen13Presenter::deactivate()
{

}

void Screen13Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen13Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
