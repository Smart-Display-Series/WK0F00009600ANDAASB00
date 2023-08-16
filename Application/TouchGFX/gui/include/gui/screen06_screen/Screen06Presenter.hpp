#ifndef SCREEN06PRESENTER_HPP
#define SCREEN06PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen06View;

class Screen06Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen06Presenter(Screen06View& v);

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

    virtual ~Screen06Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen06Presenter();

    Screen06View& view;
};

#endif // SCREEN06PRESENTER_HPP
