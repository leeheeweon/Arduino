#include <Arduino.h>

#define Button 7
#define YellowPin 5

void setup() {
    // write your initialization code here
    pinMode(Button, INPUT);
    pinMode(YellowPin, OUTPUT);
    Serial.begin(9600);
}


void loop() {
    // write your code here
    if (digitalRead(Button) == HIGH) {
        digitalWrite(YellowPin, HIGH);
        Serial.println("Button pressed");
    } else if (digitalRead(Button) == LOW) {
        digitalWrite(YellowPin, LOW);
        Serial.println("Button released");
    }
}
