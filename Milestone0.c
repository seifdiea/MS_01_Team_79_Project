#include "pico/stdlib.h"
#include "led.h"

int main() {

    const uint led_pin = 18; 

   // Initialize standard IO and the LEDs
    stdio_init_all();
    led_init();

    // Continuously repeat the 10-second cycle
    while (true) {
        led_sequence();
    }
}