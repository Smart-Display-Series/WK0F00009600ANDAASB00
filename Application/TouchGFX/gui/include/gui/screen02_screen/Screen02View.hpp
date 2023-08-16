#ifndef SCREEN02VIEW_HPP
#define SCREEN02VIEW_HPP

#include <gui_generated/screen02_screen/Screen02ViewBase.hpp>
#include <gui/screen02_screen/Screen02Presenter.hpp>

class Screen02View : public Screen02ViewBase
{
public:
    Screen02View();
    virtual ~Screen02View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();

    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN02VIEW_HPP
