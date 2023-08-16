#ifndef SCREEN08PRESENTER_HPP
#define SCREEN08PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen08View;

class Screen08Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen08Presenter(Screen08View& v);

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

    virtual ~Screen08Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen08Presenter();

    Screen08View& view;
};

#endif // SCREEN08PRESENTER_HPP
