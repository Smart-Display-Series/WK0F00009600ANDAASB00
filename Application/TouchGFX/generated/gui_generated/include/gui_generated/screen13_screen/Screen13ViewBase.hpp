/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN13VIEWBASE_HPP
#define SCREEN13VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen13_screen/Screen13Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen13ViewBase : public touchgfx::View<Screen13Presenter>
{
public:
    Screen13ViewBase();
    virtual ~Screen13ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image image1;
    touchgfx::TextArea textArea1;
    touchgfx::TextAreaWithOneWildcard textArea2;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA2_SIZE = 7;
    touchgfx::Unicode::UnicodeChar textArea2Buffer[TEXTAREA2_SIZE];

private:

};

#endif // SCREEN13VIEWBASE_HPP