#ifndef SCREEN05VIEW_HPP
#define SCREEN05VIEW_HPP

#include <gui_generated/screen05_screen/Screen05ViewBase.hpp>
#include <gui/screen05_screen/Screen05Presenter.hpp>

class Screen05View : public Screen05ViewBase
{
public:
    Screen05View();
    virtual ~Screen05View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN05VIEW_HPP
