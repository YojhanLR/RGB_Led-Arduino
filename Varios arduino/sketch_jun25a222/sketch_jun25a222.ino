/*
  Super Mario Brothers Overworld Melody

  Note Durations: 
    1 = whole note, 2 = half note,
    4 = quarter note, 8 = eighth note, 
    and so on.
 
 */
 #include "pitches.h"
 
 int arrayLength;

// intro notes and durations
int smbIntroNotes[] = {
NOTE_E4, NOTE_E4,0,NOTE_E4,0, NOTE_C4, NOTE_E4, 0, 
NOTE_G4, 0, 0, NOTE_G3, 0, 0 
};
int smbIntroDurations[] = {
8 , 8, 8, 8, 8, 8, 8, 8,
8, 8, 4, 8, 8, 4
};

// part A notes and durations
int smbANotes[] = {
NOTE_C4, 0, 0, NOTE_G3, 0, NOTE_E3, 0,
0, NOTE_A3, 0, NOTE_B3, 0, NOTE_AS3, NOTE_A3, 0,
NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, 0, NOTE_F4, NOTE_G4,
0, NOTE_E4, 0, NOTE_C4, NOTE_D4, NOTE_B3, 0,
NOTE_C4, 0, 0, NOTE_G3, 0, NOTE_E3, 0,
0, NOTE_A3, 0, NOTE_B3, 0, NOTE_AS3, NOTE_A3, 0,
NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, 0, NOTE_F4, NOTE_G4,
0, NOTE_E4, 0, NOTE_C4, NOTE_D4, NOTE_B3, 0
};
int smbADurations[] = {
8, 8, 8, 8, 4, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
6, 6, 6, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4, 
8, 8, 8, 8, 4, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
6, 6, 6, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4 
};

// part B notes and durations
int smbBNotes[] = {
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4, 
0, NOTE_GS3, NOTE_A3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4,
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4,
0, NOTE_C5, 0, NOTE_C5, NOTE_C5, 0, 0,
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4,
0, NOTE_GS3, NOTE_A3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4,
0, NOTE_DS4, 0, 0, NOTE_D4, 0,
NOTE_C4, 0, 0, 0,
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4,
0, NOTE_GS3, NOTE_A3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4,
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4,
0, NOTE_C5, 0, NOTE_C5, NOTE_C5, 0, 0,
0, NOTE_G4, NOTE_FS4, NOTE_FF4, NOTE_DS4, 0, NOTE_E4,
0, NOTE_GS3, NOTE_A3, NOTE_C4, 0, NOTE_A3, NOTE_C4, NOTE_D4,
0, NOTE_DS4, 0, 0, NOTE_D4, 0,
NOTE_C4, 0, 0, 0
};
int smbBDurations[] = {
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4, 
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
4, 8, 8, 8, 8, 4, 
8, 8, 4, 2, 
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4, 
4, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 
4, 8, 8, 8, 8, 4, 
8, 8, 4, 2
};

// part C notes and durations
int smbCNotes[] = {
NOTE_C4, NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, NOTE_D4, 0, 
NOTE_E4, NOTE_C4, 0, NOTE_A3, NOTE_G3, 0, 0,
NOTE_C4, NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, NOTE_D4, NOTE_E4,
0,
NOTE_C4, NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, NOTE_D4, 0, 
NOTE_E4, NOTE_C4, 0, NOTE_A3, NOTE_G3, 0, 0,
NOTE_E4, NOTE_E4, 0, NOTE_E4, 0, NOTE_C4, NOTE_E4, 0,
NOTE_G4, 0, 0, NOTE_G3, 0, 0
};
int smbCDurations[] = {
8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4, 
8, 8, 8, 8, 8, 8, 8, 8, 
1, 
8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 4, 
8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 4, 8, 8, 4 
};

// part D notes and durations
int smbDNotes[] = {
NOTE_E4, NOTE_C4, 0, NOTE_G3, 0, NOTE_GS3, 0,
NOTE_A3, NOTE_F4, 0, NOTE_F4, NOTE_A3, 0, 0,
NOTE_B3, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4,
NOTE_E4, NOTE_C4, 0, NOTE_A3, NOTE_G3, 0, 0,
NOTE_E4, NOTE_C4, 0, NOTE_G3, 0, NOTE_GS3, 0,
NOTE_A3, NOTE_F4, 0, NOTE_F4, NOTE_A3, 0, 0,
NOTE_B3, NOTE_F4, 0, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_D4,
NOTE_C4, NOTE_E3, 0, NOTE_E3, NOTE_C2, 0, 0
};
int smbDDurations[] = {
8, 8, 8, 8, 4, 8, 8,
8, 8, 8, 8, 8, 8, 4,
6, 6, 6, 6, 6, 6,
8, 8, 8, 8, 8, 8, 4,
8, 8, 8, 8, 4, 8, 8,
8, 8, 8, 8, 8, 8, 4,
8, 8, 8, 8, 6, 6, 6,
8, 8, 8, 8, 8, 8, 4
};



int tempo = 1000;

void setup() {
  
  Serial.begin(9600);
  //int songLength = sizeof(noteDurations) / sizeof(int);
  
  // iterate over the notes of the melody:
  
  arrayLength = sizeof(smbIntroDurations) / sizeof(int);
  playNotes(smbIntroNotes, smbIntroDurations, arrayLength);
  
 arrayLength = sizeof(smbADurations) / sizeof(int);
  playNotes(smbANotes, smbADurations, arrayLength);
  
  arrayLength = sizeof(smbBDurations) / sizeof(int);
  playNotes(smbBNotes, smbBDurations, arrayLength);
  
  arrayLength = sizeof(smbCDurations) / sizeof(int);
  playNotes(smbCNotes, smbCDurations, arrayLength);
  
  arrayLength = sizeof(smbADurations) / sizeof(int);
  playNotes(smbANotes, smbADurations, arrayLength);
  
  arrayLength = sizeof(smbDDurations) / sizeof(int);
  playNotes(smbDNotes, smbDDurations, arrayLength);
  
  /* playNotes(smbDNotes, smbDDurations, arrayLength);
  
  arrayLength = sizeof(smbCDurations) / sizeof(int);
  playNotes(smbCNotes, smbCDurations, arrayLength);
  
  arrayLength = sizeof(smbDDurations) / sizeof(int);
  playNotes(smbDNotes, smbDDurations, arrayLength);
  
  arrayLength = sizeof(smbADurations) / sizeof(int);
  playNotes(smbANotes, smbADurations, arrayLength);
  
  arrayLength = sizeof(smbBDurations) / sizeof(int);
  playNotes(smbBNotes, smbBDurations, arrayLength);
  
  arrayLength = sizeof(smbCDurations) / sizeof(int);
  playNotes(smbCNotes, smbCDurations, arrayLength);
  
  arrayLength = sizeof(smbADurations) / sizeof(int);
  playNotes(smbANotes, smbADurations, arrayLength);
  
  arrayLength = sizeof(smbDDurations) / sizeof(int);
  playNotes(smbDNotes, smbDDurations, arrayLength);
  
  playNotes(smbDNotes, smbDDurations, arrayLength);
  
  arrayLength = sizeof(smbCDurations) / sizeof(int);
  playNotes(smbCNotes, smbCDurations, arrayLength);
  
  arrayLength = sizeof(smbDDurations) / sizeof(int);
  playNotes(smbDNotes, smbDDurations, arrayLength); */
}

void loop() {
  // not needed.
}

void playNotes(int myNotes[], int myDurations[], int myLength) {
  
  Serial.println(arrayLength);
  for (int thisNote = 0; thisNote < arrayLength; thisNote++) {
    // to calculate the note duration, take one second 
    // divided by the note type.
    int noteDuration = tempo/myDurations[thisNote];
    analogWrite(10,myNotes[thisNote]);
    tone(3, myNotes[thisNote],noteDuration);
   

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(3);
   
    
  }
}
