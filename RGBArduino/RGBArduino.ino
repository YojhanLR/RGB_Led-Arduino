//pin definitions.  must be PWM-capable pins!
const int bluePin = 9;
const int redPin = 10;
const int greenPin = 11;
const int pirPin = 2;

int u, d, c, p;
int input;
int lastColor[3] = {255,255,0};

void setup() {
  //set all three of our led pins to output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(pirPin,INPUT);

  //start the Serial connection
  Serial.begin(9600);

  for(int i=0; i<4; i++){
    inicio();
  }
}

void loop() {
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
  int value= digitalRead(pirPin);
  if (value == HIGH)
  {
    movimiento();
  }
  else{
    analogWrite(redPin, lastColor[0]);
    analogWrite(greenPin, lastColor[1]);
    analogWrite(bluePin, lastColor[2]);
    }
}

void inicio() {
  amarillo();
  delay(300);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(300);
  amarillo();
}

void movimiento(){
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(50);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(50);
  }

void amarillo(){
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  }
