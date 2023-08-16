#ifndef SCREEN04VIEW_HPP
#define SCREEN04VIEW_HPP

#include <gui_generated/screen04_screen/Screen04ViewBase.hpp>
#include <gui/screen04_screen/Screen04Presenter.hpp>

class Screen04View : public Screen04ViewBase
{
public:
    Screen04View();
    virtual ~Screen04View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN04VIEW_HPP
