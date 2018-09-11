/*
  Plant Ensemble
  Author: Leslie and Krisi
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C8, NOTE_D1, NOTE_E1, NOTE_F7, NOTE_G5, NOTE_A6, NOTE_B5, NOTE_C2
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

  if (analogRead(A0) < 1023 && analogRead(A0) >= 1019)
  {
    tone(8, melody[1], noteDuration);
      delay(pauseBetweenNotes);
  }

if (analogRead(A0) < 1019 && analogRead(A0) >= 1000)
  {
    tone(8, melody[2], noteDuration);
      delay(pauseBetweenNotes);
  }

  if (analogRead(A0) < 1000 && analogRead(A0) >= 920)
  {
    tone(8, melody[3], noteDuration);
      delay(pauseBetweenNotes);
  }

   if (analogRead(A0) < 920 && analogRead(A0) >= 790)
  {
    tone(8, melody[4], noteDuration);
      delay(pauseBetweenNotes);
  }

   if (analogRead(A0) < 790 && analogRead(A0) >= 523)
  {
    tone(8, melody[5], noteDuration);
      delay(pauseBetweenNotes);
  }

     if (analogRead(A0) < 523 && analogRead(A0) >= 401)
  {
    tone(8, melody[6], noteDuration);
      delay(pauseBetweenNotes);
  }

    if (analogRead(A0) < 401 && analogRead(A0) >= 376)
  {
    tone(8, melody[7], noteDuration);
      delay(pauseBetweenNotes);
  }

    if (analogRead(A0) < 376 && analogRead(A0) <= 375)
  {
    tone(8, melody[7], noteDuration);
      delay(pauseBetweenNotes);
  }
  
  Serial.println(analogRead(A0));
  delay(20);
}
