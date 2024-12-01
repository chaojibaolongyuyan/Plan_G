/********************************************************************************************************************
 * \file MCMCAN.h
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

#ifndef MCMCAN_H_
#define MCMCAN_H_ 1

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include "Ifx_Types.h"
#include "IfxCan_Can.h"
#include "IfxCan.h"
#include "IfxCpu_Irq.h"
#include "IfxPort.h"                                        /* For GPIO Port Pin Control                            */
#include "FreeRTOS.h"
#include "task.h"

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define CAN_MESSAGE_ID              (uint32)0x777           /* Message ID that will be used in arbitration phase    */
#define PIN5                        5                       /* LED1 used in TX ISR is connected to this pin         */
#define PIN6                        6                       /* LED2 used in RX ISR is connected to this pin         */
#define INVALID_RX_DATA_VALUE       0xA5                    /* Used to invalidate RX message data content           */
#define INVALID_ID_VALUE            (uint32)0xFFFFFFFF      /* Used to invalidate RX message ID value               */
#define ISR_PRIORITY_CAN_TX         2                       /* Define the CAN TX interrupt priority                 */
#define ISR_PRIORITY_CAN_FIFO0_RX   3                       /* Define the CAN RX interrupt priority                 */
#define ISR_PRIORITY_CAN1_TX        4                       /* Define the CAN TX interrupt priority                 */
#define ISR_PRIORITY_CAN1_FIFO0_RX  5                       /* Define the CAN RX interrupt priority                 */
#define ISR_PRIORITY_CAN2_TX        6                       /* Define the CAN TX interrupt priority                 */
#define ISR_PRIORITY_CAN2_FIFO0_RX  7                       /* Define the CAN RX interrupt priority                 */

#define TX_DATA_LOW_WORD            (uint32)0xC0CAC01A      /* Define CAN data lower word to be transmitted         */
#define TX_DATA_HIGH_WORD           (uint32)0xBA5EBA11      /* Define CAN data higher word to be transmitted        */
#define MAXIMUM_CAN_DATA_PAYLOAD    2                       /* Define maximum classical CAN payload in 4-byte words */


extern IfxPort_Pin_Config          g_led1;                         /* Global LED1 configuration and control structure      */
extern IfxPort_Pin_Config          g_led2;                         /* Global LED2 configuration and control structure      */
extern IfxPort_Pin_Config          g_led3;                         /* Global LED3 configuration and control structure      */
/*********************************************************************************************************************/
/*--------------------------------------------------Data Structures--------------------------------------------------*/
/*********************************************************************************************************************/
typedef struct
{
    IfxCan_Can_Config canConfig;                            /* CAN module configuration structure                   */
    IfxCan_Can canModule;                                   /* CAN module handle                                    */
    IfxCan_Can_Node canSrcNode;                             /* CAN source node handle data structure                */
    IfxCan_Can_Node canDstNode;                             /* CAN destination node handle data structure           */
    IfxCan_Can_NodeConfig canNodeConfig;                    /* CAN node configuration structure                     */
    IfxCan_Filter canFilter;                                /* CAN filter configuration structure                   */
    IfxCan_Message txMsg;                                   /* Transmitted CAN message structure                    */
    IfxCan_Message rxMsg;                                   /* Received CAN message structure                       */
    uint32 txData[MAXIMUM_CAN_DATA_PAYLOAD];                /* Transmitted CAN data array                           */
    uint32 rxData[MAXIMUM_CAN_DATA_PAYLOAD];                /* Received CAN data array                              */
} McmcanType;

/*********************************************************************************************************************/
/*-----------------------------------------------Function Prototypes-------------------------------------------------*/
/*********************************************************************************************************************/
void initMcmcan(void);
void initMcmcan1(void);
void initMcmcan2(void);
void transmitCanMessage(void);
void transmitCanMessage1(void);
void transmitCanMessage2(void);
void initLeds(void);
void intPortCan(void);
void LDE1(void *pvParameters);
void LDE2(void *pvParameters);


#endif /* MCMCAN_H_ */
