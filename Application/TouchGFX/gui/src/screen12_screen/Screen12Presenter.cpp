#include <gui/screen12_screen/Screen12View.hpp>
#include <gui/screen12_screen/Screen12Presenter.hpp>

Screen12Presenter::Screen12Presenter(Screen12View& v)
    : view(v)
{

}

void Screen12Presenter::activate()
{

}

void Screen12Presenter::deactivate()
{

}

void Screen12Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen12Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}

