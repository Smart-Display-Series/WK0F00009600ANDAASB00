#ifndef SCREEN11VIEW_HPP
#define SCREEN11VIEW_HPP

#include <gui_generated/screen11_screen/Screen11ViewBase.hpp>
#include <gui/screen11_screen/Screen11Presenter.hpp>

class Screen11View : public Screen11ViewBase
{
public:
    Screen11View();
    virtual ~Screen11View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN11VIEW_HPP
