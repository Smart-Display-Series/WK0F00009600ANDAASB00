#ifndef SCREEN03PRESENTER_HPP
#define SCREEN03PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen03View;

class Screen03Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen03Presenter(Screen03View& v);

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

    virtual ~Screen03Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen03Presenter();

    Screen03View& view;
};

#endif // SCREEN03PRESENTER_HPP
