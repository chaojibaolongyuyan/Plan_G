/**********************************************************************************************************************
 * \file gpio.c
 * \copyright Copyright (C) Infineon Technologies AG 2019
 * 
 * Use of this file is subject to the terms of use agreed between (i) you or the company in which ordinary course of 
 * business you are acting and (ii) Infineon Technologies AG or its licensees. If and as long as no such terms of use
 * are agreed, use of this file is subject to following:
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software and 
 * accompanying documentation covered by this license (the "Software") to use, reproduce, display, distribute, execute,
 * and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including the above license grant, this restriction
 * and the following disclaimer, must be included in all copies of the Software, in whole or in part, and all 
 * derivative works of the Software, unless such copies or derivative works are solely in the form of 
 * machine-executable object code generated by a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE 
 * COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN 
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
 * IN THE SOFTWARE.
 *********************************************************************************************************************/


/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "GPIO.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

const IfxPort_Io_ConfigPin configPin[] = {
    {&IfxPort_P23_0, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},         // P00.0
    {&IfxPort_P23_1, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_2, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_3, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_4, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_5, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_6, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P23_7, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P22_2, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},  // P33.0
    {&IfxPort_P22_3, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P22_4, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P22_5, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P22_6, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1},
    {&IfxPort_P22_7, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1}
};


//test code
/*
const IfxPort_Io_ConfigPin configPin[] = {
    {&IfxPort_P22_2, IfxPort_Mode_outputPushPullGeneral, IfxPort_PadDriver_cmosAutomotiveSpeed1}
};
*/

const IfxPort_Io_Config conf = {
    sizeof(configPin)/sizeof(IfxPort_Io_ConfigPin),
    (IfxPort_Io_ConfigPin *)configPin
};


/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
void gpio_init(void)
{

    //IfxPort_Io_initModule(&conf);

    // configure P33.6 as general output
    //PA0-PA7 P23.0-P23.7
    IfxPort_setPinMode(&MODULE_P23, 0, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 1, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 2, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 3, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 4, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 5, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 6, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P23, 7, IfxPort_Mode_outputPushPullGeneral);

    //PB2-PB7 P23.0-P23.7
    IfxPort_setPinMode(&MODULE_P22, 2, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P22, 3, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P22, 4, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P22, 5, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P22, 6, IfxPort_Mode_outputPushPullGeneral);
    IfxPort_setPinMode(&MODULE_P22, 7, IfxPort_Mode_outputPushPullGeneral);

    //set high, led off
    IfxPort_setPinState(&MODULE_P23, 0, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 1, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 2, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 3, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 4, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 5, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 6, IfxPort_State_high);
    IfxPort_setPinState(&MODULE_P23, 7, IfxPort_State_high);
    //set low, valves off
    IfxPort_setPinState(&MODULE_P22, 2, IfxPort_State_low);
    IfxPort_setPinState(&MODULE_P22, 3, IfxPort_State_low);
    IfxPort_setPinState(&MODULE_P22, 4, IfxPort_State_low);
    IfxPort_setPinState(&MODULE_P22, 5, IfxPort_State_low);
    IfxPort_setPinState(&MODULE_P22, 6, IfxPort_State_low);
    IfxPort_setPinState(&MODULE_P22, 7, IfxPort_State_low);

}

uint8 Set_PORT_Output(uint8 PortNum, uint8 Value)
{
    if(Value){
        IfxPort_setPinHigh(&MODULE_P00, PortNum);
    }else{
        IfxPort_setPinLow(&MODULE_P00, PortNum);
    }
    if(IfxPort_getPinState(&MODULE_P00, PortNum) == Value){
        return 1;
    }else{
        return 0;
    }
}
