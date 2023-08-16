#include <gui/screen99_screen/Screen99View.hpp>
#include <gui/screen99_screen/Screen99Presenter.hpp>

Screen99Presenter::Screen99Presenter(Screen99View& v)
    : view(v)
{

}

void Screen99Presenter::activate()
{

}

void Screen99Presenter::deactivate()
{

}

void Screen99Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen99Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
