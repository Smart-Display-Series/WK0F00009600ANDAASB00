#ifndef SCREEN01VIEW_HPP
#define SCREEN01VIEW_HPP

#include <gui_generated/screen01_screen/Screen01ViewBase.hpp>
#include <gui/screen01_screen/Screen01Presenter.hpp>

class Screen01View : public Screen01ViewBase
{
public:
    Screen01View();
    virtual ~Screen01View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN01VIEW_HPP
