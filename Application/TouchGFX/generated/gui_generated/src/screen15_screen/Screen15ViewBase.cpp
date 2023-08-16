/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen15_screen/Screen15ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen15ViewBase::Screen15ViewBase()
{

    __background.setPosition(0, 0, 160, 80);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 160, 80);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    animatedImage1.setXY(0, 0);
    animatedImage1.setBitmaps(BITMAP_PARROT_00_ID, BITMAP_PARROT_01_ID);
    animatedImage1.setUpdateTicksInterval(60);
    animatedImage1.startAnimation(false, true, true);

    textArea1.setXY(94, 28);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 13));
    textArea1.setLinespacing(0);
    textArea1.setRotation(touchgfx::TEXT_ROTATE_270);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    textArea2.setPosition(129, 0, 31, 80);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setRotation(touchgfx::TEXT_ROTATE_270);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    add(__background);
    add(box1);
    add(animatedImage1);
    add(textArea1);
    add(textArea2);
}

void Screen15ViewBase::setupScreen()
{

}
