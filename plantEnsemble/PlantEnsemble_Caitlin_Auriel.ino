/*
  Plant Ensemble
  Authors: Caitlin Leard and Auriel Byrd
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_A1, NOTE_B2, NOTE_C3, NOTE_D4, NOTE_E5, NOTE_F6, NOTE_G7, NOTE_F3, NOTE_E2, NOTE_D2
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDuration = 1000/4;

int pauseBetweenNotes = noteDuration * 1.30;

void setup() {
    Serial.begin(9600);
    tone(8, melody[0], noteDuration);
    delay(pauseBetweenNotes);
}

void loop() {

    if (analogRead(A0) >= 1023)
    {
      tone(8, melody[0], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) < 1023 && analogRead(A0) >= 1021){
      tone(8, melody[1], noteDuration);
        delay(pauseBetweenNotes);
    }
    if (analogRead(A0) < 1021 && analogRead(A0) >= 1019){
      tone(8, melody[2], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) < 1019 && analogRead(A0) >= 1017){
      tone(8, melody[3], noteDuration);
        delay(pauseBetweenNotes);
    }
        
    if (analogRead(A0) < 1017 && analogRead(A0) >= 1015){
      tone(8, melody[4], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) < 1015 && analogRead(A0) >= 1013){
      tone(8, melody[5], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) < 1013 && analogRead(A0) >= 1011){
      tone(8, melody[6], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) < 1011 && analogRead(A0) >= 1009){
      tone(8, melody[7], noteDuration);
        delay(pauseBetweenNotes);
    }

        if (analogRead(A0) < 1009 && analogRead(A0) >= 1007){
      tone(8, melody[8], noteDuration);
        delay(pauseBetweenNotes);
        
        }  else
    {
      tone(8, melody[9], noteDuration);
      delay(pauseBetweenNotes);
    }
    Serial.println(analogRead(A0));
    delay(20);
}
