#ifndef SCREEN09VIEW_HPP
#define SCREEN09VIEW_HPP

#include <gui_generated/screen09_screen/Screen09ViewBase.hpp>
#include <gui/screen09_screen/Screen09Presenter.hpp>

class Screen09View : public Screen09ViewBase
{
public:
    Screen09View();
    virtual ~Screen09View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN09VIEW_HPP
