#include <gui/screen07_screen/Screen07View.hpp>
#include <gui/screen07_screen/Screen07Presenter.hpp>

Screen07Presenter::Screen07Presenter(Screen07View& v)
    : view(v)
{

}

void Screen07Presenter::activate()
{

}

void Screen07Presenter::deactivate()
{

}

void Screen07Presenter::Rs485NotifyEvent ( Event_t msg )
{
  view.Rs485NotifyEvent( msg );
}

void Screen07Presenter::EnablePanel( uint8_t device )
{
  model->EnablePanel( device );
}
