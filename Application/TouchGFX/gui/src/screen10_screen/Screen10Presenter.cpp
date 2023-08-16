#include <gui/screen10_screen/Screen10View.hpp>
#include <gui/screen10_screen/Screen10Presenter.hpp>

Screen10Presenter::Screen10Presenter(Screen10View& v)
    : view(v)
{

}

void Screen10Presenter::activate()
{

}

void Screen10Presenter::deactivate()
{

}

void Screen10Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen10Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
