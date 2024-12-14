#include "CANTask.h"
#include "FreeRTOS.h"
#include "task.h"

uint8 a,b,c,d,e,f,g,h;
uint8 rxData[8];
uint8 txData[8];
uint8 rxData1[8];
uint8 txData1[8];
uint8 rxData2[8];
uint8 txData2[8];

void CAN0_Trans_5ms()
{
    for(;;)
    {
        CAN0Data_Send(1);
        vTaskDelay(pdMS_TO_TICKS(5));
    }
}

void CAN0_Trans_10ms()
{
    for(;;)
    {
        CAN0Data_Send(2);
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}

void CAN1_Trans_10ms()
{
    for(;;)
    {
        CAN1Data_Send(2);
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}


void CAN2_Trans_5ms()
{
    for(;;)
    {
        CAN2Data_Send(2);
    }
}

void CAN0Data_Process(void)
{
    Data0_ReceiveTrans();
    if(g_mcmcan.rxMsg.messageId==1)
    {
        a=rxData[0];
        b=rxData[1];
        c=rxData[2];
        d=rxData[3];
        e=rxData[4];
        f=rxData[5];
        g=rxData[6];
        h=rxData[7];
    }

}

void CAN0Data_Send(uint32 CANID)
{
    /* Set the message ID that is used during the receive acceptance phase */

    if(CANID==1)
    {
        txData[0]=0;
        txData[1]=1;
        txData[2]=2;
        txData[3]=3;
        txData[4]=4;
        txData[5]=5;
        txData[6]=6;
        txData[7]=7;
    }
    else if(CANID==2)
    {
        txData[0]=8;
        txData[1]=9;
        txData[2]=10;
        txData[3]=11;
        txData[4]=12;
        txData[5]=13;
        txData[6]=14;
        txData[7]=15;

    }

    Data0_SendTrans(CANID);

}

void CAN1Data_Process(void)
{
    Data1_ReceiveTrans();
    if(g_mcmcan1.rxMsg.messageId==1)
    {
        a=rxData1[0];
        b=rxData1[1];
        c=rxData1[2];
        d=rxData1[3];
        e=rxData1[4];
        f=rxData1[5];
        g=rxData1[6];
        h=rxData1[7];
    }

}

void CAN1Data_Send(uint32 CANID)
{
    /* Set the message ID that is used during the receive acceptance phase */

    if(CANID==1)
    {
        txData1[0]=0;
        txData1[1]=1;
        txData1[2]=2;
        txData1[3]=3;
        txData1[4]=4;
        txData1[5]=5;
        txData1[6]=6;
        txData1[7]=7;
    }
    else if(CANID==2)
    {
        txData1[0]=8;
        txData1[1]=9;
        txData1[2]=10;
        txData1[3]=11;
        txData1[4]=12;
        txData1[5]=13;
        txData1[6]=14;
        txData1[7]=15;

    }

    Data1_SendTrans(CANID);

}

void CAN2Data_Process(void)
{
    Data2_ReceiveTrans();
    if(g_mcmcan2.rxMsg.messageId==1)
    {
        a=rxData2[0];
        b=rxData2[1];
        c=rxData2[2];
        d=rxData2[3];
        e=rxData2[4];
        f=rxData2[5];
        g=rxData2[6];
        h=rxData2[7];
    }

}

void CAN2Data_Send(uint32 CANID)
{
    /* Set the message ID that is used during the receive acceptance phase */

    if(CANID==1)
    {
        txData2[0]=0;
        txData2[1]=1;
        txData2[2]=2;
        txData2[3]=3;
        txData2[4]=4;
        txData2[5]=5;
        txData2[6]=6;
        txData2[7]=7;
    }
    else if(CANID==2)
    {
        txData2[0]=8;
        txData2[1]=9;
        txData2[2]=10;
        txData2[3]=11;
        txData2[4]=12;
        txData2[5]=13;
        txData2[6]=14;
        txData2[7]=15;

    }

    Data2_SendTrans(CANID);

}

void Data0_ReceiveTrans(void)
{
   for(int i=0;i<8;i++)
   {
       rxData[i]=g_mcmcan.rxData[i/4]&0xFF;
       g_mcmcan.rxData[i/4]=g_mcmcan.rxData[i/4]>>8;

   }
}

void Data0_SendTrans(uint32 CANID)
{
    for(int i=0;i<8;i++)
    {
        g_mcmcan.txData[i/4]=(txData[i]<<24)+(g_mcmcan.txData[i/4]>>8);
    }
    g_mcmcan.txMsg.messageId = CANID;
    transmitCanMessage();
}

void Data1_ReceiveTrans(void)
{
   for(int i=0;i<8;i++)
   {
       rxData1[i]=g_mcmcan1.rxData[i/4]&0xFF;
       g_mcmcan1.rxData[i/4]=g_mcmcan1.rxData[i/4]>>8;

   }
}

void Data1_SendTrans(uint32 CANID)
{
    for(int i=0;i<8;i++)
    {
        g_mcmcan1.txData[i/4]=(txData1[i]<<24)+(g_mcmcan1.txData[i/4]>>8);
    }
    g_mcmcan1.txMsg.messageId = CANID;
    transmitCanMessage1();
}

void Data2_ReceiveTrans(void)
{
   for(int i=0;i<8;i++)
   {
       rxData2[i]=g_mcmcan2.rxData[i/4]&0xFF;
       g_mcmcan2.rxData[i/4]=g_mcmcan2.rxData[i/4]>>8;

   }
}

void Data2_SendTrans(uint32 CANID)
{
    for(int i=0;i<8;i++)
    {
        g_mcmcan2.txData[i/4]=(txData2[i]<<24)+(g_mcmcan2.txData[i/4]>>8);
    }
    g_mcmcan2.txMsg.messageId = CANID;
    transmitCanMessage2();
}
