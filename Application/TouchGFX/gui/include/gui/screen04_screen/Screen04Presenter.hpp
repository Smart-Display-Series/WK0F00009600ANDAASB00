#ifndef SCREEN04PRESENTER_HPP
#define SCREEN04PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen04View;

class Screen04Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen04Presenter(Screen04View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen04Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen04Presenter();

    Screen04View& view;
};

#endif // SCREEN04PRESENTER_HPP
