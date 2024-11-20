#include <IfxCan_Can.h>
#include <IfxCan.h>
#include <IfxCan_reg.h>
#include <CAN_Main.h>
// CAN handle
IfxCan_Can can;

// CAN Node handles
IfxCan_Can_Node canNode[TESTED_NODES];

// data buffers
uint32 txData[2];
uint32 rxData[2];


// create module configuration
IfxCan_Can_Config canConfig;
IfxCan_Can_InterruptConfig canintConfig;



void initCanModule(void) {





    IfxCan_Can_initModule(&canConfig,&MODULE_CAN0);

    // choose the interrupt groups configuration
    // Tx interrupts



}
