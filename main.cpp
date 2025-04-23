#include "mbed.h"
#include "arm_book_lib.h"

#define BLINKING_RATE 200ms
#define BLINKING_RATE2 400ms
#define BLINKING_RATE3 600ms

int main()
{
    DigitalOut Led1(LED1);
    DigitalOut Led2(LED2);
    DigitalOut Led3(LED3);

    while (true) {
        Led1 = !Led1;
        ThisThread::sleep_for(BLINKING_RATE);
        Led1 = 0;
        Led2 = !Led2;
        ThisThread::sleep_for(BLINKING_RATE2);
        Led2 = 0;
        Led3 = !Led3;
        ThisThread::sleep_for(BLINKING_RATE3);
        Led3 = 0;
    }
}