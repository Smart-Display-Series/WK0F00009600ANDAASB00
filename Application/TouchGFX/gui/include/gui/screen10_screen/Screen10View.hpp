#ifndef SCREEN10VIEW_HPP
#define SCREEN10VIEW_HPP

#include <gui_generated/screen10_screen/Screen10ViewBase.hpp>
#include <gui/screen10_screen/Screen10Presenter.hpp>

class Screen10View : public Screen10ViewBase
{
public:
    Screen10View();
    virtual ~Screen10View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN10VIEW_HPP
