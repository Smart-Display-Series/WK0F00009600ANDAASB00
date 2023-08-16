#include <gui/screen06_screen/Screen06View.hpp>
#include <gui/screen06_screen/Screen06Presenter.hpp>

Screen06Presenter::Screen06Presenter(Screen06View& v)
    : view(v)
{

}

void Screen06Presenter::activate()
{

}

void Screen06Presenter::deactivate()
{

}

void Screen06Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen06Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
