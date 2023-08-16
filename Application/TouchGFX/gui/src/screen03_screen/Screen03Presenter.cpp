#include <gui/screen03_screen/Screen03View.hpp>
#include <gui/screen03_screen/Screen03Presenter.hpp>

Screen03Presenter::Screen03Presenter(Screen03View& v)
    : view(v)
{

}

void Screen03Presenter::activate()
{

}

void Screen03Presenter::deactivate()
{

}

void Screen03Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen03Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
