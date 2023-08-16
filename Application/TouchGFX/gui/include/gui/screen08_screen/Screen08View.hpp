#ifndef SCREEN08VIEW_HPP
#define SCREEN08VIEW_HPP

#include <gui_generated/screen08_screen/Screen08ViewBase.hpp>
#include <gui/screen08_screen/Screen08Presenter.hpp>

class Screen08View : public Screen08ViewBase
{
public:
    Screen08View();
    virtual ~Screen08View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN08VIEW_HPP
