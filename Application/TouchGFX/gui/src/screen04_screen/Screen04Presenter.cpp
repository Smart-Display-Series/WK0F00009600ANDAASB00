#include <gui/screen04_screen/Screen04View.hpp>
#include <gui/screen04_screen/Screen04Presenter.hpp>

Screen04Presenter::Screen04Presenter(Screen04View& v)
    : view(v)
{

}

void Screen04Presenter::activate()
{

}

void Screen04Presenter::deactivate()
{

}

void Screen04Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen04Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
