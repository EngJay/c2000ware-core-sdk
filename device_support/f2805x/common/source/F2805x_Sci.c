//###########################################################################
//
// FILE:    F2805x_Sci.c
//
// TITLE:   F2805x SCI Initialization & Support Functions.
//
//###########################################################################
// $TI Release:  $
// $Release Date:  $
// $Copyright:
// Copyright (C) 2012-2024 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#include "F2805x_Device.h"     // F2805x Headerfile Include File
#include "F2805x_Examples.h"   // F2805x Examples Include File

//
// InitSci - This function initializes the SCI(s) to a known state.
//
void
InitSci(void)
{
    //
    // Initialize SCI-A
    //
}

//
// InitSciGpio - This function initializes GPIO pins to function as SCI pins
//
// Each GPIO pin can be configured as a GPIO pin or up to 3 different
// peripheral functional pins. By default all pins come up as GPIO
// inputs after reset.
//
// Caution:
// Only one GPIO pin should be enabled for SCITXDA/B operation.
// Only one GPIO pin shoudl be enabled for SCIRXDA/B operation.
// Comment out other unwanted lines.
//
void
InitSciGpio()
{
   InitSciaGpio();
#if DSP28_SCIB
    InitScibGpio();
#endif
#if DSP28_SCIC
    InitScicGpio();
#endif
}

//
// InitSciaGpio - This function initializes GPIO pins to function as SCI-A
//
void
InitSciaGpio()
{
   EALLOW;

//
// Enable internal pull-up for the selected pins
// Pull-ups can be enabled or disabled disabled by the user.
// This will enable the pullups for the specified pins.
//
    GpioCtrlRegs.GPAPUD.bit.GPIO28 = 0; // Enable pull-up for GPIO28 (SCIRXDA)
//  GpioCtrlRegs.GPAPUD.bit.GPIO7 = 0;   // Enable pull-up for GPIO7 (SCIRXDA)

    GpioCtrlRegs.GPAPUD.bit.GPIO29 = 0; // Enable pull-up for GPIO29 (SCITXDA)
//  GpioCtrlRegs.GPAPUD.bit.GPIO12 = 0;  // Enable pull-up for GPIO12 (SCITXDA)

//
// Set qualification for selected pins to asynch only
// Inputs are synchronized to SYSCLKOUT by default.
// This will select asynch (no qualification) for the selected pins.
//
    GpioCtrlRegs.GPAQSEL2.bit.GPIO28 = 3;  // Asynch input GPIO28 (SCIRXDA)
//  GpioCtrlRegs.GPAQSEL1.bit.GPIO7 = 3;   // Asynch input GPIO7 (SCIRXDA)

//
// Configure SCI-A pins using GPIO regs
// This specifies which of the possible GPIO pins will be SCI functional pins.
//
    GpioCtrlRegs.GPAMUX2.bit.GPIO28 = 1;    // Configure GPIO28 for SCIRXDA
//  GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 2;     // Configure GPIO7 for SCIRXDA
    GpioCtrlRegs.GPAMUX2.bit.GPIO29 = 1;    // Configure GPIO29 for SCITXDA
//  GpioCtrlRegs.GPAMUX1.bit.GPIO12 = 2;    // Configure GPIO12 for SCITXDA

    EDIS;
}

#if DSP28_SCIB
//
// InitScibGpio - This function initializes GPIO pins to function as SCI-B
//
void
InitScibGpio()
{
    EALLOW;

    //
    // Enable internal pull-up for the selected pins
    // Pull-ups can be enabled or disabled disabled by the user.
    // This will enable the pullups for the specified pins.
    //
    GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;  // Enable pull-up for GPIO11 (SCIRXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO15 = 0;  // Enable pull-up for GPIO15 (SCIRXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO19 = 0;  // Enable pull-up for GPIO19 (SCIRXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO23 = 0;  // Enable pull-up for GPIO23 (SCIRXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO30 = 0;  // Enable pull-up for GPIO30 (SCIRXDB)

    GpioCtrlRegs.GPAPUD.bit.GPIO9  = 0;  // Enable pull-up for GPIO9  (SCITXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO14 = 0;  // Enable pull-up for GPIO14 (SCITXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO18 = 0;  // Enable pull-up for GPIO18 (SCITXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO22 = 0;  // Enable pull-up for GPIO22 (SCITXDB)
//  GpioCtrlRegs.GPAPUD.bit.GPIO31 = 0;  // Enable pull-up for GPIO31 (SCITXDB)

    //
    // Set qualification for selected pins to asynch only
    // Inputs are synchronized to SYSCLKOUT by default.
    // This will select asynch (no qualification) for the selected pins.
    //
    GpioCtrlRegs.GPAQSEL1.bit.GPIO11 = 3;   // Asynch input GPIO11 (SCIRXDB)
//  GpioCtrlRegs.GPAQSEL1.bit.GPIO15 = 3;   // Asynch input GPIO15 (SCIRXDB)
//  GpioCtrlRegs.GPAQSEL2.bit.GPIO19 = 3;   // Asynch input GPIO19 (SCIRXDB)
//  GpioCtrlRegs.GPAQSEL2.bit.GPIO23 = 3;   // Asynch input GPIO23 (SCIRXDB)
//  GpioCtrlRegs.GPAQSEL2.bit.GPIO30 = 3;   // Asynch input GPIO30 (SCIRXDB)

    //
    // Configure SCI-B pins using GPIO regs
    // This specifies which of the GPIO pins will be SCI functional pins.
    //
    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 2;       // Configure GPIO11 for SCIRXDB
//  GpioCtrlRegs.GPAMUX1.bit.GPIO15 = 2;       // Configure GPIO15 for SCIRXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO19 = 2;       // Configure GPIO19 for SCIRXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO23 = 3;       // Configure GPIO23 for SCIRXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO30 = 2;       // Configure GPIO30 for SCIRXDB


    GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 2;        // Configure GPIO9 for SCITXDB
//  GpioCtrlRegs.GPAMUX1.bit.GPIO14 = 2;       // Configure GPIO14 for SCITXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO18 = 2;       // Configure GPIO18 for SCITXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO22 = 3;       // Configure GPIO22 for SCITXDB
//  GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 2;       // Configure GPIO31 for SCITXDB

    EDIS;
}
#endif

#if DSP28_SCIC
//
// InitScicGpio - This function initializes GPIO pins to function as SCI-C
//
void
InitScicGpio()
{
   EALLOW;

    //
    // Enable internal pull-up for the selected pins
    // Pull-ups can be enabled or disabled disabled by the user.
    // This will enable the pullups for the specified pins.
    //
    GpioCtrlRegs.GPAPUD.bit.GPIO26 = 0;  // Enable pull-up for GPIO26 (SCIRXDC)
//  GpioCtrlRegs.GPBPUD.bit.GPIO39 = 0;  // Enable pull-up for GPIO39 (SCIRXDC)

    GpioCtrlRegs.GPAPUD.bit.GPIO27 = 0;  // Enable pull-up for GPIO27 (SCITXDC)
//  GpioCtrlRegs.GPBPUD.bit.GPIO42 = 0;  // Enable pull-up for GPIO42 (SCITXDC)

    //
    // Set qualification for selected pins to asynch only
    // Inputs are synchronized to SYSCLKOUT by default.
    // This will select asynch (no qualification) for the selected pins.
    //
    GpioCtrlRegs.GPAQSEL2.bit.GPIO26 = 3;  // Asynch input GPIO26 (SCIRXDC)
//  GpioCtrlRegs.GPBQSEL1.bit.GPIO39 = 3;  // Asynch input GPIO39 (SCIRXDC)

    //
    // Configure SCI-C pins using GPIO regs
    // This specifies which of the GPIO pins will be SCI functional pins.
    //
    GpioCtrlRegs.GPAMUX2.bit.GPIO26 = 2; // Configure GPIO26 for SCIRXDC
//  GpioCtrlRegs.GPBMUX1.bit.GPIO39 = 2; // Configure GPIO39 for SCIRXDC

    GpioCtrlRegs.GPAMUX2.bit.GPIO27 = 2; // Configure GPIO27 for SCITXDC
//  GpioCtrlRegs.GPBMUX1.bit.GPIO42 = 2; // Configure GPIO42 for SCITXDC

    EDIS;
}
#endif

//
// End of file.
//

