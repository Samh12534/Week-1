#include "mbed.h"
#include "arm_book_lib.h"


#define BLINKING_RATE 500ms


int main()
{
    DigitalOut Led1(LED1);
    DigitalOut Led2(LED2);
    DigitalOut Led3(LED3);

    while (true) {
        Led1 = !Led1;
        ThisThread::sleep_for(BLINKING_RATE);
        Led1 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
        Led2 = !Led2;
        ThisThread::sleep_for(BLINKING_RATE);
        Led2 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
        Led3 = !Led3;
        ThisThread::sleep_for(BLINKING_RATE);
        Led3 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}