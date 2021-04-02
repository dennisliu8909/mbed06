#include "mbed.h"

using namespace std;

Timeout flipper;
DigitalOut led1(LED1);
DigitalOut led2(LED2);

void flip() {
    led2 = !led2;
}

int main() {
    led2 = 1;

    flipper.attach(&flip, 2s);

    while(1) {
        led1 = !led1;
        ThisThread::sleep_for(200ms);
    }
}
