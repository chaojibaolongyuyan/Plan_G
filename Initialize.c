#include "Initialize.h"


//ADC≥ı ºªØ
void initial(void)
{
    gpio_init();
    GTM_Tom_init();
    init_TIM();
    initEVADC();
    initMcmcan();
    initMcmcan1();
    initMcmcan2();
    initPeripherals();
    initSTM();
    icm20602_init();
    uart_init(UART_0, 115200, UART0_TX_P14_0, UART0_RX_P14_1);
}
