#include <pitches.h> // Include the pitches.h library

const int buzzer = 8; // the passive buzzer on pin 8

int melody[] = {
  NOTE_A4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_CS4, NOTE_D4, NOTE_E4,
  NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_E4, NOTE_D4,
  NOTE_CS4, NOTE_CS4, NOTE_B3, NOTE_CS4, NOTE_D4,

  NOTE_A4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_CS4, NOTE_D4, NOTE_E4,
  NOTE_FS4, NOTE_D4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_CS4,
  NOTE_B3, NOTE_CS4, NOTE_D4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_B3, NOTE_A3,
};

int duration[] = {
  200, 100, 100, 400, 100, 100, 100,
  100, 100, 500, 200, 100, 100,
  250, 250, 250, 250, 500,

  200, 100, 100, 500, 100, 100, 100,
  100, 500, 100, 100, 100, 100,
  100, 100, 100, 100, 100, 100, 100, 100, 300
};

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  int digitalVal = digitalRead(2);
  if (HIGH == digitalVal) {
    noTone(buzzer);
  } else {
    for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
      tone(buzzer, melody[thisNote], duration[thisNote]);
      delay(duration[thisNote] + 50);
    }
    delay(1000);
  }
}
