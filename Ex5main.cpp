#include "mbed.h"
#include "arm_book_lib.h"

#define BLINKING_RATE 200ms

DigitalOut Led1(LED1);
DigitalOut Led2(LED2);
DigitalOut Led3(LED3);

void blink() {
    for (int i = 0; i < 5; i++) {
        Led1 = !Led1;
        Led2 = !Led2;
        Led3 = !Led3;
        ThisThread::sleep_for(BLINKING_RATE);
        Led1 = 0;
        Led2 = 0;
        Led3 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}

int main()
{
    blink();
    Led1 = !Led1;
    Led2 = 0;
    Led3 = 0;
}
