#ifndef SCREEN99VIEW_HPP
#define SCREEN99VIEW_HPP

#include <gui_generated/screen99_screen/Screen99ViewBase.hpp>
#include <gui/screen99_screen/Screen99Presenter.hpp>

class Screen99View : public Screen99ViewBase
{
public:
    Screen99View();
    virtual ~Screen99View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN99VIEW_HPP
