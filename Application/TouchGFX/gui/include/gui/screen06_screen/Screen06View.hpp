#ifndef SCREEN06VIEW_HPP
#define SCREEN06VIEW_HPP

#include <gui_generated/screen06_screen/Screen06ViewBase.hpp>
#include <gui/screen06_screen/Screen06Presenter.hpp>

class Screen06View : public Screen06ViewBase
{
public:
    Screen06View();
    virtual ~Screen06View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN06VIEW_HPP
