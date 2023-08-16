#ifndef SCREEN07VIEW_HPP
#define SCREEN07VIEW_HPP

#include <gui_generated/screen07_screen/Screen07ViewBase.hpp>
#include <gui/screen07_screen/Screen07Presenter.hpp>

class Screen07View : public Screen07ViewBase
{
public:
    Screen07View();
    virtual ~Screen07View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void afterTransition();
    virtual void Rs485NotifyEvent ( Event_t msg );
protected:
};

#endif // SCREEN07VIEW_HPP
