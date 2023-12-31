/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Screen01
    void gotoScreen01ScreenNoTransition();

    // Screen02
    void gotoScreen02ScreenNoTransition();

    // Screen03
    void gotoScreen03ScreenNoTransition();

    // Screen04
    void gotoScreen04ScreenNoTransition();

    // Screen05
    void gotoScreen05ScreenNoTransition();

    // Screen06
    void gotoScreen06ScreenNoTransition();

    // Screen07
    void gotoScreen07ScreenNoTransition();

    // Screen08
    void gotoScreen08ScreenNoTransition();

    // Screen09
    void gotoScreen09ScreenNoTransition();

    // Screen10
    void gotoScreen10ScreenNoTransition();

    // Screen11
    void gotoScreen11ScreenNoTransition();

    // Screen12
    void gotoScreen12ScreenNoTransition();

    // Screen13
    void gotoScreen13ScreenNoTransition();

    // Screen14
    void gotoScreen14ScreenNoTransition();

    // Screen15
    void gotoScreen15ScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Screen01
    void gotoScreen01ScreenNoTransitionImpl();

    // Screen02
    void gotoScreen02ScreenNoTransitionImpl();

    // Screen03
    void gotoScreen03ScreenNoTransitionImpl();

    // Screen04
    void gotoScreen04ScreenNoTransitionImpl();

    // Screen05
    void gotoScreen05ScreenNoTransitionImpl();

    // Screen06
    void gotoScreen06ScreenNoTransitionImpl();

    // Screen07
    void gotoScreen07ScreenNoTransitionImpl();

    // Screen08
    void gotoScreen08ScreenNoTransitionImpl();

    // Screen09
    void gotoScreen09ScreenNoTransitionImpl();

    // Screen10
    void gotoScreen10ScreenNoTransitionImpl();

    // Screen11
    void gotoScreen11ScreenNoTransitionImpl();

    // Screen12
    void gotoScreen12ScreenNoTransitionImpl();

    // Screen13
    void gotoScreen13ScreenNoTransitionImpl();

    // Screen14
    void gotoScreen14ScreenNoTransitionImpl();

    // Screen15
    void gotoScreen15ScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
