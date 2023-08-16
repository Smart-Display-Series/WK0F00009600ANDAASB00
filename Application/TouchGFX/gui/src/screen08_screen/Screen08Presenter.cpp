#include <gui/screen08_screen/Screen08View.hpp>
#include <gui/screen08_screen/Screen08Presenter.hpp>

Screen08Presenter::Screen08Presenter(Screen08View& v)
    : view(v)
{

}

void Screen08Presenter::activate()
{

}

void Screen08Presenter::deactivate()
{

}

void Screen08Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen08Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
