/**
  ******************************************************************************
  * File Name          : TouchGFXGeneratedHAL.cpp
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#include <TouchGFXGeneratedHAL.hpp>
#include <touchgfx/hal/OSWrappers.hpp>
#include <gui/common/FrontendHeap.hpp>

#include "stm32f7xx.h"

using namespace touchgfx;

namespace {
    // Use the section "TouchGFX_Framebuffer" in the linker to specify the placement of the buffer
    LOCATION_PRAGMA("TouchGFX_Framebuffer")
    uint32_t frameBuf[(160 * 128 * 2 + 3) / 4] LOCATION_ATTRIBUTE("TouchGFX_Framebuffer");
}

void TouchGFXGeneratedHAL::initialize()
{
    HAL::initialize();

    registerEventListener(*(Application::getInstance()));
    setFrameBufferStartAddresses((void*)frameBuf, (void*)0, (void*)0);
    /*
     * Set whether the DMA transfers are locked to the TFT update cycle. If
     * locked, DMA transfer will not begin until the TFT controller has finished
     * updating the display. If not locked, DMA transfers will begin as soon as
     * possible. Default is true (DMA is locked with TFT).
     */
    lockDMAToFrontPorch(false);
}

void TouchGFXGeneratedHAL::configureInterrupts()
{
}

void TouchGFXGeneratedHAL::enableInterrupts()
{
}

void TouchGFXGeneratedHAL::disableInterrupts()
{
}

void TouchGFXGeneratedHAL::enableLCDControllerInterrupt()
{
}

inline uint8_t* TouchGFXGeneratedHAL::advanceFrameBufferToRect(uint8_t* fbPtr, const touchgfx::Rect& rect) const
{
    //       Advance vertically                   Advance horizontally
    fbPtr += rect.y * lcd().framebufferStride() + rect.x * 2;
    return fbPtr;
}

uint16_t* TouchGFXGeneratedHAL::getTFTFrameBuffer() const
{
    return (uint16_t*)frameBuf;
}

void TouchGFXGeneratedHAL::setTFTFrameBuffer(uint16_t* adr)
{
    //setTFTFrameBuffer() not used for selected display interface
}

void TouchGFXGeneratedHAL::flushFrameBuffer(const touchgfx::Rect& rect)
{
  HAL::flushFrameBuffer(rect);
// If the framebuffer is placed in Write Through cached memory (e.g. SRAM) then we need
// to flush the Dcache prior to letting DMA2D accessing it. That's done
// using SCB_CleanInvalidateDCache().
SCB_CleanInvalidateDCache();
}

bool TouchGFXGeneratedHAL::blockCopy(void* RESTRICT dest, const void* RESTRICT src, uint32_t numBytes)
{
  return HAL::blockCopy(dest, src, numBytes);
}

void TouchGFXGeneratedHAL::InvalidateCache()
{
// If the framebuffer is placed in Write Through cached memory (e.g. SRAM) then we need
// to flush the Dcache prior to letting DMA2D accessing it. That's done
// using SCB_CleanInvalidateDCache().
SCB_CleanInvalidateDCache();
}

void TouchGFXGeneratedHAL::FlushCache()
{
// If the framebuffer is placed in Write Through cached memory (e.g. SRAM) then we need
// to flush the Dcache prior to letting DMA2D accessing it. That's done
// using SCB_CleanInvalidateDCache().
SCB_CleanInvalidateDCache();
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
