#ifndef SCREEN99PRESENTER_HPP
#define SCREEN99PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen99View;

class Screen99Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen99Presenter(Screen99View& v);

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

    virtual ~Screen99Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen99Presenter();

    Screen99View& view;
};

#endif // SCREEN99PRESENTER_HPP
