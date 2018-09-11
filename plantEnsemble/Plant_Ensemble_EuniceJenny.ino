/*
  Plant ensemble
  Author: Eunice Kim, Jenny Kim
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C2, NOTE_B0, NOTE_E2, NOTE_G1, NOTE_A2, NOTE_E3, NOTE_B3, NOTE_AS7, NOTE_C7, NOTE_B1 
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

    if (analogRead(A0) >= 1022)
    {
      tone(8, melody[0], noteDuration);
        delay(pauseBetweenNotes);
    }

    if (analogRead(A0) <= 1019){
      tone(8, melody[1], noteDuration);
      delay(pauseBetweenNotes);
    }

   if (analogRead(A0) < 1022 && analogRead(A0) >= 1019)
   {
    tone(8, melody[2], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 1019 && analogRead(A0) >= 1015)
   {
    tone(8, melody[3], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 1015 && analogRead(A0) >= 1012)
   {
    tone(8, melody[4], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 1012 && analogRead(A0) >= 1009)
   {
    tone(8, melody[5], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 1009 && analogRead(A0) >= 1003)
   {
    tone(8, melody[6], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 1003 && analogRead(A0) >= 996)
   {
    tone(8, melody[7], noteDuration);
      delay(pauseBetweenNotes);
   }
      if (analogRead(A0) < 996 && analogRead(A0) >= 990)
   {
    tone(8, melody[8], noteDuration);
      delay(pauseBetweenNotes);
   }
    
    else
    {
      tone(8, melody[9], noteDuration);
      delay(pauseBetweenNotes);
    }
    Serial.println(analogRead(A0));
    delay(20);
}
