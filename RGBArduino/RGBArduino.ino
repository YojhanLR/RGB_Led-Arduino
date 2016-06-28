
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
  NOTE_E4, NOTE_E4, 0, NOTE_E4, 0, NOTE_C4, NOTE_E4, 0,
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


/*-------------------------------------------------------------------------------------------------------------------
  --------------------------------------------------------------------------------------------------------------------
  -------------------------------------C O D I G O --- A R D U I N O----------------------------------------------------
  --------------------------------------------------------------------------------------------------------------------
  --------------------------------------------------------------------------------------------------------------------*/


//Definiciones de pines.  Deben ser pines PWM en el Arduino para el RGB Led!
const int bluePin = 9;
const int redPin = 10;
const int greenPin = 11;
const int pirPin = 2;
const int pinBuzzer = 12;

//Recibe las unidades, decenas y centenas y el resultado p
int u, d, c, p; 
//Donde se cambiara el color
int input; 
//Amarillo por defecto
int lastColor[3] = {246, 112, 0};

unsigned long previousMillis = 0;        // will store last time LED was updated
const long interval = 90000;           // interval at which to blink (milliseconds)

void setup() {
  //Se asignan los pines a usar
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(pirPin, INPUT);

  //Se empieza la serializacion
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    inicio(); //Parpadeo de luces para indicar inicio
  }
}
/*--------------------------------------------*/
void loop() {

  /*Revisa si se estan enviando datos desde la App*/
  if (Serial.available()) {
    input = Serial.read() - 48;
    delay(10);
    c = Serial.read() - 48;
    delay(10);
    d = Serial.read() - 48;
    delay(10);
    u = Serial.read() - 48;
    delay(10);
    p = (100 * c) + (10 * d) + u;
    if (input == 1) {
      analogWrite(redPin, p);
      lastColor[0] = p;
    }
    if (input == 2) {
      analogWrite(greenPin, p);
      lastColor[1] = p;
    }
    if (input == 3) {
      analogWrite(bluePin, p);
      lastColor[2] = p;
    }
  }
  /*Revisa si hay moviminto en el PIR*/
  int value = digitalRead(pirPin);
  if (value == HIGH)
  {
    movimiento();
    
  }
  else {
    analogWrite(redPin, lastColor[0]);
    analogWrite(greenPin, lastColor[1]);
    analogWrite(bluePin, lastColor[2]);
  }

  /*Revisa si ya ha pasado el tiempo estimado*/
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    
    cambioHora();
    
    previousMillis =  millis();
    analogWrite(redPin, lastColor[0]);
    analogWrite(greenPin, lastColor[1]);
    analogWrite(bluePin, lastColor[2]);
  }

}

/*--------------------------------------------*/

void inicio() {
  amarillo();
  delay(300);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(300);
  amarillo();
}

void movimiento() {
  azul();
  for(int i=255; i>1; i--){
    analogWrite(greenPin,i);
    delay(7);
    }
  for(int i=0; i<255; i++){
    analogWrite(greenPin,i);
    delay(7);
    }
}

void cambioHora() {
  int FADESPEED = 1;

  // fade from blue to violet
  for (int red = 0; red < 256; red++) {
    analogWrite(redPin, red);
    delay(FADESPEED);
  }
  // fade from violet to red
  for (int blue = 255; blue > 0; blue--) {
    analogWrite(bluePin, blue);
    delay(FADESPEED);
  }
  // fade from red to yellow
  for (int green = 0; green < 256; green++) {
    analogWrite(greenPin, green);
    delay(FADESPEED);
  }
  // fade from yellow to green
  for (int red = 255; red > 0; red--) {
    analogWrite(redPin, red);
    delay(FADESPEED);
  }
  // fade from green to teal
  for (int blue = 0; blue < 256; blue++) {
    analogWrite(bluePin, blue);
    delay(FADESPEED);
  }
  // fade from teal to blue
  for (int green = 255; green > 0; green--) {
    analogWrite(greenPin, green);
    delay(FADESPEED);
  }

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  
  comenzarCancion();

  for (int i = 0; i < 30; i++) {
    amarillo();
    delay(20);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(20);
  }
  for (int i = 0; i < 30; i++) {
    azul();
    delay(20);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(20);
  }
  for (int i = 0; i < 30; i++) {
    rojo();
    delay(20);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(20);
  }
  for (int i = 0; i < 30; i++) {
    verde();
    delay(20);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(20);
  }

}

void playNotes(int myNotes[], int myDurations[], int myLength) {

  Serial.println(arrayLength);
  for (int thisNote = 0; thisNote < arrayLength; thisNote++) {
    // to calculate the note duration, take one second
    // divided by the note type.
    int noteDuration = tempo / myDurations[thisNote];
    analogWrite(redPin, myNotes[thisNote]);
    tone(pinBuzzer, myNotes[thisNote], noteDuration);


    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(pinBuzzer);


  }
}

void comenzarCancion() {
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

}


void amarillo() {
  analogWrite(redPin, 246);
  analogWrite(greenPin, 112);
  analogWrite(bluePin, 0);
}

void azul() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
}


void rojo() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void verde() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
}
