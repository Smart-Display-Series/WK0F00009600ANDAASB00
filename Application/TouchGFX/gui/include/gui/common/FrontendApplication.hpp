#ifndef FRONTENDAPPLICATION_HPP
#define FRONTENDAPPLICATION_HPP

#include <gui_generated/common/FrontendApplicationBase.hpp>

class FrontendHeap;

using namespace touchgfx;

class FrontendApplication : public FrontendApplicationBase
{
public:
    FrontendApplication(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplication() { }

    virtual void handleTickEvent()
    {
        model.tick();
        FrontendApplicationBase::handleTickEvent();
    }

    virtual void switchScreen( uint8_t screen ) {

      switch( screen ) {

        case 1:
          gotoScreen99ScreenNoTransition();
          break;

        case 2:
          gotoScreen02ScreenNoTransition();
          break;

        case 3:
          gotoScreen03ScreenNoTransition();
          break;

        case 4:
          gotoScreen04ScreenNoTransition();
          break;

        case 5:
          gotoScreen05ScreenNoTransition();
          break;

        case 6:
          gotoScreen06ScreenNoTransition();
          break;

        case 7:
          gotoScreen07ScreenNoTransition();
          break;

        case 8:
          gotoScreen08ScreenNoTransition();
          break;

        case 9:
          gotoScreen09ScreenNoTransition();
          break;

        case 10:
          gotoScreen10ScreenNoTransition();
          break;

        case 11:
          gotoScreen11ScreenNoTransition();
          break;

        case 12:
          gotoScreen12ScreenNoTransition();
          break;

        case 13:
          gotoScreen13ScreenNoTransition();
          break;

        case 14:
          gotoScreen14ScreenNoTransition();
          break;

        case 15:
          gotoScreen15ScreenNoTransition();
          break;

        default:
          break;
      }
    }

private:
};

#endif // FRONTENDAPPLICATION_HPP
