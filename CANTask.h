#include "MCMCAN.h"

extern uint8 a,b,c,d,e,f,g,h;



void Data0_ReceiveTrans(void);
void Data0_SendTrans(uint32 CANID);
void CAN0Data_Process(void);
void CAN0Data_Send(uint32 CANID);
void Data1_ReceiveTrans(void);
void Data1_SendTrans(uint32 CANID);
void CAN1Data_Process(void);
void CAN1Data_Send(uint32 CANID);
void Data2_ReceiveTrans(void);
void Data2_SendTrans(uint32 CANID);
void CAN2Data_Process(void);
void CAN2Data_Send(uint32 CANID);
void CAN0_Trans_5ms();
void CAN1_Trans_10ms();
void CAN2_Trans_5ms();
