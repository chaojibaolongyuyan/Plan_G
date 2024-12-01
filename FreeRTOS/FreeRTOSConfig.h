/*
    FreeRTOS V9.0.0 - Copyright (C) 2016 Real Time Engineers Ltd.
    All rights reserved

    VISIT http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation >>>> AND MODIFIED BY <<<< the FreeRTOS exception.

    ***************************************************************************
    >>!   NOTE: The modification to the GPL is included to allow you to     !<<
    >>!   distribute a combined work that includes FreeRTOS without being   !<<
    >>!   obliged to provide the source code for proprietary components     !<<
    >>!   outside of the FreeRTOS kernel.                                   !<<
    ***************************************************************************

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  Full license text is available on the following
    link: http://www.freertos.org/a00114.html

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS provides completely free yet professionally developed,    *
     *    robust, strictly quality controlled, supported, and cross          *
     *    platform software that is more than just the market leader, it     *
     *    is the industry's de facto standard.                               *
     *                                                                       *
     *    Help yourself get started quickly while simultaneously helping     *
     *    to support the FreeRTOS project by purchasing a FreeRTOS           *
     *    tutorial book, reference manual, or both:                          *
     *    http://www.FreeRTOS.org/Documentation                              *
     *                                                                       *
    ***************************************************************************

    http://www.FreeRTOS.org/FAQHelp.html - Having a problem?  Start by reading
    the FAQ page "My application does not run, what could be wrong?".  Have you
    defined configASSERT()?

    http://www.FreeRTOS.org/support - In return for receiving this top quality
    embedded software for free we request you assist our global community by
    participating in the support forum.

    http://www.FreeRTOS.org/training - Investing in training allows your team to
    be as productive as possible as early as possible.  Now you can receive
    FreeRTOS training directly from Richard Barry, CEO of Real Time Engineers
    Ltd, and the world's leading authority on the world's leading RTOS.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, a DOS
    compatible FAT file system, and our tiny thread aware UDP/IP stack.

    http://www.FreeRTOS.org/labs - Where new FreeRTOS products go to incubate.
    Come and try FreeRTOS+TCP, our new open source TCP/IP stack for FreeRTOS.

    http://www.OpenRTOS.com - Real Time Engineers ltd. license FreeRTOS to High
    Integrity Systems ltd. to sell under the OpenRTOS brand.  Low cost OpenRTOS
    licenses offer ticketed support, indemnification and commercial middleware.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.

    1 tab == 4 spaces!
*/

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*
 * The following #error directive is to remind users that a batch file must be
 * executed prior to this project being built.  The batch file *cannot* be
 * executed from within the IDE!  Once it has been executed, re-open or refresh
 * the Eclipse project and remove the #error line below.
 */
//#error Ensure CreateProjectDirectoryStructure.bat has been executed before building.  See comment immediately above.

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html.
 */

/*----------------------------------------------------------*/

#define configUSE_PREEMPTION				1 //设置为 1，使用抢占式 RTOS 调度器；设置为 0，使用协同式 RTOS 调度器。
#define configUSE_IDLE_HOOK					0 //将其设置为 1，使用空闲钩子， 或设置为 0，忽略空闲钩子。
/* CPU is actually 300MHz */
/*输入驱动生成 滴答 中断的外设所用的内部时钟的执行频率（以赫兹为单位）。 内部时钟通常也是 驱动内部 CPU 的时钟。 此值是 正确配置定时器外围设备所必需的。*/
#define configCPU_CLOCK_HZ					( ( unsigned long ) 300000000UL )
//#define configPERIPHERAL_CLOCK_HZ			( ( unsigned long ) configCPU_CLOCK_HZ / 2UL )

#define configTICK_RATE_HZ					( ( TickType_t ) 1000UL ) //RTOS 滴答 中断的频率。  1S=1Hz, 1000Hz=1ms;
#define configMAX_PRIORITIES				( 6 )  //应用程序任务可用的优先级数量
#define configMINIMAL_STACK_SIZE			( ( unsigned short ) 128 ) //空闲任务使用的堆栈大小。
#define configTOTAL_HEAP_SIZE				( ( size_t ) ( 64U * 1024U ) )  //RAM 堆中可用的 FreeRTOS 总量。
#define configMAX_TASK_NAME_LEN				( 32 )  //任务描述性名称的最大允许长度。
#define configUSE_TRACE_FACILITY			0  //如果想包含其他结构成员和函数来辅助执行可视化和跟踪，将其设置为 1。

/*将 configUSE_16_BIT_滴答S 定义为 1，会将 滴答Type_t 定义为 (typedef) 无符号的 16 位类型。
  将 configUSE_16_BIT_滴答S 定义为 0，会将 滴答Type_t 定义为 (typedef) 无符号的 32 位类型。*/
#define configUSE_16_BIT_TICKS				0

/*此参数控制空闲优先级任务的行为。 它仅在以下情况下有效：
1、使用抢占式调度器。
2、应用程序创建运行在空闲优先级的任务*/
#define configIDLE_SHOULD_YIELD				0
#define configUSE_MALLOC_FAILED_HOOK 		0  //如果 configUSE_MALLOC_FAILED_HOOK 设置为 1，那么应用程序必须定义 malloc() 失败的钩子函数
#define configCHECK_FOR_STACK_OVERFLOW		0  //堆栈溢出检测
#define configUSE_TICK_HOOK					0  //TICK 钩子函数
#define configUSE_COUNTING_SEMAPHORES 		1  //将其设置为 1，将在构建中包含计数信号量功能，或设置为 0，将在构建中忽略计数信号量功能。
#define configUSE_RECURSIVE_MUTEXES			1  //将其设置为 1，将在构建中包含递归互斥锁功能，或设置为 0，将在构建中忽略递归互斥锁功能。
#define configUSE_MUTEXES					1  //将其设置为 1，将在构建中包含互斥功能，或设置为 0，将在构建中忽略互斥功能。

/* Co-routine definitions. */
#define configUSE_CO_ROUTINES 				0 //将其设置为 1，将在构建中包含协程功能，或设置为 0，将在构建中忽略协程功能。
#define configMAX_CO_ROUTINE_PRIORITIES 	( 2 ) //应用程序协程可用的优先级数量 。 任意数量的协程可共用相同的优先级。

/* Software timer configuration. */
#define configUSE_TIMERS					1  //将其设置为 1，将包含软件定时器功能，或设置为 0，将忽略软件定时器功能
#define configTIMER_TASK_PRIORITY			( 3 ) //设置软件定时器服务/守护任务的优先级。
#define configTIMER_QUEUE_LENGTH			( 5 ) //设置软件定时器命令队列的长度
#define configTIMER_TASK_STACK_DEPTH		configMINIMAL_STACK_SIZE //设置分配给软件定时器服务/守护任务的堆栈深度。

/* Set the following definitions to 1 to include the API function, or zero
 to exclude the API function. */

#define INCLUDE_vTaskPrioritySet				1
#define INCLUDE_uxTaskPriorityGet				1
#define INCLUDE_vTaskDelete						1
#define INCLUDE_vTaskCleanUpResources			1
#define INCLUDE_vTaskSuspend					1
#define INCLUDE_vTaskDelayUntil					1
#define INCLUDE_vTaskDelay						1

#define configMAX_SYSCALL_INTERRUPT_PRIORITY	64 /* Interrupt above priority 64 are not effected by critical sections, but cannot call interrupt safe FreeRTOS functions. */
#define configKERNEL_INTERRUPT_PRIORITY			2  /* This is defined here for clarity, but the value must not be changed from 2. */
#define configKERNEL_YIELD_PRIORITY				1  /* This is defined here for clarity, but must not be changed from its default value of 1. */

//#define configSUPPORT_STATIC_ALLOCATION         1

/* Interrupt priorities. */
//#define configINTERRUPT_PRIORITY_TX				16
//#define configINTERRUPT_PRIORITY_RX				18
//#define configHIGH_FREQUENCY_TIMER_PRIORITY		( configMAX_SYSCALL_INTERRUPT_PRIORITY - 1UL )

/* Default definition of configASSERT(). */
#define configASSERT( x ) if( ( x ) == 0 ) 		{ portDISABLE_INTERRUPTS(); __debug(); for( ;; ); }


#endif /* FREERTOS_CONFIG_H */

