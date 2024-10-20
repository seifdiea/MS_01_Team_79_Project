#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

// Define LED pins
#define RED_LED_PIN 18
#define BLUE_LED_PIN 19
#define GREEN_LED_PIN 20

// Function declarations
void led_init(void);
void led_on(uint pin);
void led_off(uint pin);
void led_sequence(void);

#endif // LED_H
