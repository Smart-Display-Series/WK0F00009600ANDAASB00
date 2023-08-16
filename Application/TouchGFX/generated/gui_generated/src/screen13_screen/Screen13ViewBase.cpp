/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen13_screen/Screen13ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen13ViewBase::Screen13ViewBase()
{

    __background.setPosition(0, 0, 160, 80);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 160, 80);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_PARROT_01_ID));

    textArea1.setXY(93, 28);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 13));
    textArea1.setLinespacing(0);
    textArea1.setRotation(touchgfx::TEXT_ROTATE_270);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));

    textArea2.setPosition(129, 0, 31, 80);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setRotation(touchgfx::TEXT_ROTATE_270);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID49).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID48));

    add(__background);
    add(box1);
    add(image1);
    add(textArea1);
    add(textArea2);
}

void Screen13ViewBase::setupScreen()
{

}
