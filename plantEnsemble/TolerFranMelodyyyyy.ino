/*
  Plant Ensemble
  author: fran and toler
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_AS1, NOTE_D3, NOTE_CS8, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDuration = 1000/8;

int pauseBetweenNotes = noteDuration * 1.30;

void setup() {
    Serial.begin(9600);
    tone(8, melody[8], noteDuration);
    delay(pauseBetweenNotes);
    
}

void loop() {
  if (analogRead(A0) >= 1017)
  {
  tone(8, melody[0], noteDuration);
  delay(pauseBetweenNotes);
  }
  if(analogRead(A0)< 1016){
     tone(8, melody[4], noteDuration);
     delay(pauseBetweenNotes);
  }
   if(analogRead(A0)< 1014){
     tone(8, melody[2], noteDuration);
     delay(pauseBetweenNotes);
  }
   if(analogRead(A0)< 1010){
     tone(8, melody[6], noteDuration);
     delay(pauseBetweenNotes);
   }
  if(analogRead(A0)< 1009){
     tone(8, melody[9], noteDuration);
     delay(pauseBetweenNotes);
  
   }  else
  {
    tone(8, melody[1], noteDuration);
    delay(pauseBetweenNotes);
  }

  Serial.println(analogRead(A0));
  delay(20);
}
