#include <Arduino.h>

#define LED_PIN 13

void setup() {
    // write your initialization code here
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}


void loop() {
    // write your code here
    int R = analogRead(A0);
    Serial.print("potentiometer: ");
    Serial.println(R);

    if (R > 500) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }

}
