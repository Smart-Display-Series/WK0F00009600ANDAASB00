/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN06VIEWBASE_HPP
#define SCREEN06VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen06_screen/Screen06Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen06ViewBase : public touchgfx::View<Screen06Presenter>
{
public:
    Screen06ViewBase();
    virtual ~Screen06ViewBase() {}
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

#endif // SCREEN06VIEWBASE_HPP