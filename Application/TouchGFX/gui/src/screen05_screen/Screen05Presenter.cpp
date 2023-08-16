#include <gui/screen05_screen/Screen05View.hpp>
#include <gui/screen05_screen/Screen05Presenter.hpp>

Screen05Presenter::Screen05Presenter(Screen05View& v)
    : view(v)
{

}

void Screen05Presenter::activate()
{

}

void Screen05Presenter::deactivate()
{

}

void Screen05Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen05Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
