/*
Plant Ensenble
Author: Jae
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_E6, NOTE_DS5, NOTE_E5, NOTE_DS4, NOTE_B4, NOTE_C5, NOTE_E4, NOTE_C4
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
  if (analogRead(A0) >= 410)
  {
    tone(8, melody[0], noteDuration);
      delay(pauseBetweenNotes);
  }
   if (analogRead(A0) < 410 && analogRead(A0) >=400)
   {   
      tone(8, melody[1], noteDuration);
      delay(pauseBetweenNotes);
  }  
  if (analogRead(A0) < 400 && analogRead(A0) >=380)
  {    
      tone(8, melody[2], noteDuration);
      delay(pauseBetweenNotes);
  }  
  if (analogRead(A0) < 380 && analogRead(A0) >=360)
  {    
      tone(8, melody[3], noteDuration);
      delay(pauseBetweenNotes);
  }  
  if (analogRead(A0) < 360 && analogRead(A0) >=340)
  {    
      tone(8, melody[4], noteDuration);
      delay(pauseBetweenNotes);
  } 
  if (analogRead(A0) < 340 && analogRead(A0) >=320)
  {    
      tone(8, melody[5], noteDuration);
      delay(pauseBetweenNotes);
  }
  if (analogRead(A0) < 320 && analogRead(A0) >=300)
  {    
      tone(8, melody[6], noteDuration);
      delay(pauseBetweenNotes);
  }
  if (analogRead(A0) < 300 && analogRead(A0) >=280)
  {    
      tone(8, melody[7], noteDuration);
      delay(pauseBetweenNotes);
  }  
  if (analogRead(A0) < 280 && analogRead(A0) >=260)
  {    
      tone(8, melody[8], noteDuration);
      delay(pauseBetweenNotes);
  } 
  if (analogRead(A0) < 260 && analogRead(A0) >=200)
  {    
      tone(8, melody[1], noteDuration);
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
