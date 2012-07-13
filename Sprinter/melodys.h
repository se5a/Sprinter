/*
the first index ([0]) of tones MUST equal the number of notes (and beats) in a melody
the first index ([0]) is the number of times the melody will be played.
tones is a list of notes in a melody
beats is the lenght of each of those notes, matching indexs of the two lists.
beat durations: 4 = quarter note, 8 = eighth note, etc.
*/
#include "pitches.h"



int alarm1_tones[] = {
  4, NOTE_CS8, NOTE_C8, NOTE_CS8, NOTE_C8};
int alarm1_beats[] = {
  6, 8, 8, 8, 8 };

int melody1_tones[] = {
 8, NOTE_C4, NOTE_G3,NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};
int melody1_beats[] = {
 1, 4, 8, 8, 4,4,4,4,4 };
