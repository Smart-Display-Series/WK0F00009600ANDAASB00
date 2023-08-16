#include <gui/screen02_screen/Screen02View.hpp>
#include <gui/screen02_screen/Screen02Presenter.hpp>

Screen02Presenter::Screen02Presenter(Screen02View& v)
    : view(v)
{

}

void Screen02Presenter::activate()
{

}

void Screen02Presenter::deactivate()
{

}

void Screen02Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen02Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}


