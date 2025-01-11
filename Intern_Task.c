#include "Intern_Task.h"





void X_TASK_5ms()
{
    measure_PWM();
    readEVADC();
    transferData();
    get_PORT_STATUS();
}

void X_TASK_500ms()
{

}
