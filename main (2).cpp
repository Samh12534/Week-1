#include "mbed.h"
#include "arm_book_lib.h"

#define BLINKING_RATE 300ms

int main()
{
    DigitalOut Led1(LED1);
    DigitalOut Led2(LED2);
    DigitalOut Led3(LED3);

    while (true) {
        Led1 = !Led1;
        Led2 = !Led2;
        Led3 = !Led3;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}