#ifndef SCREENVIEW_HPP
#define SCREENVIEW_HPP

#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <gui/screen_screen/screenPresenter.hpp>

class screenView : public screenViewBase
{
public:
    screenView();
    virtual ~screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent ();
    void updateFPSAndMCU();
    virtual void ButtonNotifyEvent ( ButtonState_t ButtonStatus );
protected:
    uint8_t mcuLoadPct = 0 ;
    uint16_t frameSkippedCounter = 0;
    uint16_t frames = 0;
    uint16_t fps = 0;
};

#endif // SCREENVIEW_HPP
