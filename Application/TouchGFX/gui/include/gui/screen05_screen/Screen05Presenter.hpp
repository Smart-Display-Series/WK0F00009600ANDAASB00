#ifndef SCREEN05PRESENTER_HPP
#define SCREEN05PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen05View;

class Screen05Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen05Presenter(Screen05View& v);

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

    virtual ~Screen05Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen05Presenter();

    Screen05View& view;
};

#endif // SCREEN05PRESENTER_HPP
