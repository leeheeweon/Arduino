#include <Arduino.h>

#define BUZZER 13
#define BUTTON_A 7
#define BUTTON_B 6
#define BUTTON_C 5
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988
#define C6 1047
// 도(523Hz), 레(587Hz), 미(659 Hz), 파 (698 Hz),
// 솔(784), 라(880 Hz), 시(988 Hz), 도(1047 Hz)
// 솔솔라라솔솔미
int duration = 200;

void setup() {
    // write your initialization code here
    pinMode(BUTTON_A,INPUT);
    pinMode(BUTTON_B,INPUT);
    pinMode(BUTTON_C,INPUT);
}


void loop() {
    // write your code here
    if (digitalRead(BUTTON_A)) {
        tone(BUZZER,G5, duration);
    } else if (digitalRead(BUTTON_B)) {
        tone(BUZZER,A5, duration);
    } else if (digitalRead(BUTTON_C)) {
        tone(BUZZER,E5, duration);
    }
}
