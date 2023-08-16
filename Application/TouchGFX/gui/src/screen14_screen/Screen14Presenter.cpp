#include <gui/screen14_screen/Screen14View.hpp>
#include <gui/screen14_screen/Screen14Presenter.hpp>

Screen14Presenter::Screen14Presenter(Screen14View& v)
    : view(v)
{

}

void Screen14Presenter::activate()
{

}

void Screen14Presenter::deactivate()
{

}

void Screen14Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen14Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
