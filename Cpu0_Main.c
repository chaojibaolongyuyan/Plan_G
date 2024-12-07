/**********************************************************************************************************************
 * \file Cpu0_Main.c
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
#include "Ifx_Types.h"
#include "IfxCpu.h"
#include "IfxScuWdt.h"

//#include "GPIO.h"
//#include "Drive_Output.h"
//#include "Frequency_Sample.h"
//#include "Analog_Sample.h"
//#include "Communicate.h"
//#include "Schedule.h"

//#include "zf_device_icm20602.h"
//#include "zf_driver_uart.h"
//#include "stdio.h"
//
//#include "Bsp.h"

#include "App_Config.h"
#include "FreeRTOS.h"
#include "task.h"
#include "CANTASK.h"


IFX_ALIGN(4) IfxCpu_syncEvent g_cpuSyncEvent = 0;

void core0_main(void)
{
    IfxCpu_enableInterrupts();
    
    /* !!WATCHDOG0 AND SAFETY WATCHDOG ARE DISABLED HERE!!
     * Enable the watchdogs and service them periodically if it is required
     */
    IfxScuWdt_disableCpuWatchdog(IfxScuWdt_getCpuWatchdogPassword());
    IfxScuWdt_disableSafetyWatchdog(IfxScuWdt_getSafetyWatchdogPassword());
    
    /* Wait for CPU sync event */
    IfxCpu_emitEvent(&g_cpuSyncEvent);
    IfxCpu_waitEvent(&g_cpuSyncEvent, 1);



    initMcmcan();
    initMcmcan1();
    initMcmcan2();


    //gpio_init();
    //GTM_Tom_init();
    //init_TIM();
    //initEVADC();

    //initMcmcan();
    //initLeds();
    //transmitCanMessage();
    
    //initSTM();
    initLeds();

    //icm20602_init();

//    fifo_init(&uart_data_fifo, FIFO_DATA_8BIT, uart_get_data, 64);              // 初始化 fifo 挂载缓冲区
    //uart_init(UART_0, 115200, UART0_TX_P14_0, UART0_RX_P14_1);             // 初始化串口
//    uart_rx_interrupt(UART_INDEX, 1);                                           // 开启 UART_INDEX 的接收中断
//    uart_write_string(UART_0, "UART Text.");                                // 输出测试信息
//    uart_write_byte(UART_0, '\r');                                          // 输出回车
//    uart_write_byte(UART_0, '\n');                                          // 输出换行
//    printf("start");

    /* Initialize a time variable */
//    Ifx_TickTime ticksFor100ms = IfxStm_getTicksFromMilliseconds(BSP_DEFAULT_TIMER, 100);
//    waitTime(ticksFor100ms);    /* Wait 100 ms */

    /* Create LED1 app task */
    xTaskCreate(CAN0_Trans_5ms, "CAN0_MESSAGE", configMINIMAL_STACK_SIZE, NULL, 1, NULL);

    /* Create LED2 app task */
    xTaskCreate(CAN1_Trans_10ms, "CAN1_MESSAGE", configMINIMAL_STACK_SIZE, NULL, 0, NULL);

    /* Start the scheduler */
    vTaskStartScheduler();

    while(1)
    {

        //run_schedule();
//        for(int i=0;i<65534;i++)
//        {
//            transmitCanMessage1();
//        }

        //measure_PWM();
        //readEVADC();

        //transmitCanMessage();

//        icm20602_get_acc();
//        icm20602_get_gyro();
//        printf("acc_x = %f , acc_y = %f , acc_z = %f , gyro_x = %f , gyro_y = %f , gyro_z = %f\r\n",
//                acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z);
//
//        waitTime(ticksFor100ms);
    }
}

/* Required FreeRTOS callback, called in case of a stack overflow.
 * For the sake of simplicity, this function will loop indefinitely
 * and the root cause can be confirmed by using a debugger
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    while (1)
    {
        __nop();
    }
}


//-------------------------------------------------------------------------     // printf 重定向 此部分不允许用户更改
//-------------------------------------------------------------------------------------------------------------------
//  @brief      重定向printf 到串口
//  @param      ch      需要打印的字节
//  @param      stream  数据流
//  @note       此函数由编译器自带库里的printf所调用
//-------------------------------------------------------------------------------------------------------------------
//int fputc(int ch, FILE *stream)
//{
//    uart_write_byte(UART_0, (char)ch);
//    return(ch);
//}
