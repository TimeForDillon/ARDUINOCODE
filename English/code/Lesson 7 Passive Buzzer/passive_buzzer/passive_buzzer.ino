//www.elegoo.com
//2016.12.08

// www.elegoo.com
// 2016.12.08


#include "pitches.h"

// Notes in the melody of "Mary Had a Little Lamb":
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
  
}

void loop() {
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    tone(8, melody[thisNote], duration[thisNote]);
    delay(duration[thisNote] + 50); // Add a slight gap between notes
  }
  delay(1000); // Pause between repetitions
}

// www.elegoo.com
// 2016.12.08

// www.elegoo.com
// 2016.12.08

