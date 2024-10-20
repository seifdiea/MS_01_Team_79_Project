#include "led.h"

// Initialize the LEDs by setting up the GPIO pins
void led_init(void) {
    gpio_init(RED_LED_PIN);
    gpio_set_dir(RED_LED_PIN, GPIO_OUT);

    gpio_init(BLUE_LED_PIN);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);

    gpio_init(GREEN_LED_PIN);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
}

// Turn on the LED at the specified pin
void led_on(uint pin) {
    gpio_put(pin, true);
}

// Turn off the LED at the specified pin
void led_off(uint pin) {
    gpio_put(pin, false);
}

// LED sequence logic
void led_sequence(void) {
    // All LEDs are off for the first 5 seconds
    led_off(RED_LED_PIN);
    led_off(BLUE_LED_PIN);
    led_off(GREEN_LED_PIN);
    sleep_ms(5000);

    // First sequence: Red, Green, Blue for 1 second each
    led_on(RED_LED_PIN);
    sleep_ms(1000);
    led_off(RED_LED_PIN);

    led_on(GREEN_LED_PIN);
    sleep_ms(1000);
    led_off(GREEN_LED_PIN);

    led_on(BLUE_LED_PIN);
    sleep_ms(1000);
    led_off(BLUE_LED_PIN);

    // All LEDs turn on for 2 seconds, then off
    led_on(RED_LED_PIN);
    led_on(GREEN_LED_PIN);
    led_on(BLUE_LED_PIN);
    sleep_ms(2000);
    led_off(RED_LED_PIN);
    led_off(GREEN_LED_PIN);
    led_off(BLUE_LED_PIN);
}
