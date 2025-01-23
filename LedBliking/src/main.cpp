#include <Arduino.h>

#define LedPin 7
#define YellowPin 6

void setup() {
    pinMode(LedPin, OUTPUT);
    pinMode(YellowPin, OUTPUT);
}

void loop() {
    for (int i = 0; i < 10; ++i) {
        digitalWrite(LedPin, HIGH);
        delay(1000);
        digitalWrite(LedPin, LOW);
        delay(1000);

        digitalWrite(YellowPin, HIGH);
        delay(1000);
        digitalWrite(YellowPin, LOW);
        delay(1000);
    }

    exit(1);
}
