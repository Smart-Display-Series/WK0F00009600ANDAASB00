#include <gui/screen_screen/screenView.hpp>
uint8_t OldButtonValue = 0;
screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
//    mcuLoadPct = touchgfx::HAL::getInstance()->getMCULoadPct();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent()
{
//    if (HAL::getInstance()->getLCDRefreshCount() > 1)
//    {
//        frameSkippedCounter++;
//    }
//    else
//    {
//        frames++;
//    }
//
//    if (frames + frameSkippedCounter >= 60)
//    {
//        fps = frames;
//        updateFPSAndMCU();
//        frameSkippedCounter = 0;
//        frames = 0;
//    }
}
void screenView::updateFPSAndMCU()
{
//    Unicode::snprintf(mcuLoadValueTextBuffer, MCULOADVALUETEXT_SIZE, "%d", fps);
//    mcuLoadValueText.invalidate();
}

void screenView::ButtonNotifyEvent ( ButtonState_t ButtonStatus )
{

	if(ButtonStatus.buttonValue != OldButtonValue)
	{
		Unicode::snprintf(mcuLoadValueTextBuffer, MCULOADVALUETEXT_SIZE, "%d", ButtonStatus.buttonValue);
		mcuLoadValueText.invalidate();

		OldButtonValue = ButtonStatus.buttonValue;
	}

}
