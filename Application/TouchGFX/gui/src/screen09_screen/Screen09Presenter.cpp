#include <gui/screen09_screen/Screen09View.hpp>
#include <gui/screen09_screen/Screen09Presenter.hpp>

Screen09Presenter::Screen09Presenter(Screen09View& v)
    : view(v)
{

}

void Screen09Presenter::activate()
{

}

void Screen09Presenter::deactivate()
{

}

void Screen09Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen09Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
