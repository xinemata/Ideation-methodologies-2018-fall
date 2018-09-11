/*
  Plant Ensemble
  Author: Morgan Boswell and Madison Gibson
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C1, NOTE_D2, NOTE_E3, NOTE_F4, NOTE_FS5, NOTE_G6, NOTE_GS7, NOTE_B0, NOTE_A1
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

    if (analogRead(A0) >= 700)
    {
      tone(8, melody[0], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) <= 700 && analogRead(A0) >= 680){
      tone(8, melody[1], noteDuration);
        delay(pauseBetweenNotes);
    }
          

    if (analogRead(A0) <= 680 && analogRead(A0) >= 660){
      tone(8, melody[2], noteDuration);
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 660 && analogRead(A0) >= 640){
      tone(8, melody[3], noteDuration);
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 640 && analogRead(A0) >= 620){
      tone(8, melody[4], noteDuration); 
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 620 && analogRead(A0) >= 600){
      tone(8, melody[5], noteDuration);
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 600 && analogRead(A0) >= 580){
      tone(8, melody[6], noteDuration);
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 580 && analogRead(A0) >= 560){
      tone(8, melody[7], noteDuration);
        delay(pauseBetweenNotes);
    }    

    if (analogRead(A0) <= 560 && analogRead(A0) >= 540){
      tone(8, melody[8], noteDuration);
        delay(pauseBetweenNotes);

    }

    if (analogRead(A0) <= 540 && analogRead(A0) >= 500){
      tone(8, melody[9], noteDuration);
        delay(pauseBetweenNotes);

    }
    
    else
    {
      tone(8, melody[1], noteDuration);
      delay(pauseBetweenNotes);
    }
    Serial.println(analogRead(A0));
    delay(20);
}

