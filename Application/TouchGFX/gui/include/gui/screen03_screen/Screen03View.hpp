#ifndef SCREEN03VIEW_HPP
#define SCREEN03VIEW_HPP

#include <gui_generated/screen03_screen/Screen03ViewBase.hpp>
#include <gui/screen03_screen/Screen03Presenter.hpp>

class Screen03View : public Screen03ViewBase
{
public:
    Screen03View();
    virtual ~Screen03View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN03VIEW_HPP
