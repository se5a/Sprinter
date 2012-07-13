/*
Alarm for ramps by se5a
much code shamelessly copied from the 
toneMelody example in Arduino by Tom Igoe. 
*/


#include "melodys.h"
int speakerPin = ALARM_PIN;

void play_tune(int tones[], int beats[]){
  int noteNumber = tones[0];
  int reps = beats[0];
  for (int rep = 0; rep < reps; rep++){
    for (int thisNote = 1; thisNote <= noteNumber; thisNote++){
      int thisBeat = 1000/beats[thisNote];
      tone(speakerPin, tones[thisNote],thisBeat);
      int pauseBetweenNotes = thisBeat * 1.30;
      delay(pauseBetweenNotes);
    }
  }
  noTone(speakerPin);
}


