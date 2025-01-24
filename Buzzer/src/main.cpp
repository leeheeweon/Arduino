#include <Arduino.h>

#define ANALOG 0
#define LED_PIN 13

void setup() {
    // write your initialization code here
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // write your code here
    int R = analogRead(ANALOG);
    Serial.println(R);

    if (R > 100) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
}
