#ifndef SCREEN09PRESENTER_HPP
#define SCREEN09PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen09View;

class Screen09Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen09Presenter(Screen09View& v);

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

    virtual ~Screen09Presenter() {};

    virtual void Rs485NotifyEvent ( Event_t msg );

    virtual void EnablePanel( uint8_t device );

private:
    Screen09Presenter();

    Screen09View& view;
};

#endif // SCREEN09PRESENTER_HPP
