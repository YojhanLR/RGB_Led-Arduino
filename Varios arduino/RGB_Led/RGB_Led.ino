//Serial RGB led controller
//Author: Trevor Shannon
//see http://trevorshp.com/creations/android_led.htm

//pin definitions.  must be PWM-capable pins!
const int bluePin = 9;
const int redPin = 10;
const int greenPin = 11;

//maximum duty cycle to be used on each led for color balancing.  
//if "white" (R=255, G=255, B=255) doesn't look white, reduce the red, green, or blue max value.
const int max_red = 255;
const int max_green = 255;
const int max_blue = 255;

byte colors[3] = {0, 0, 0}; //array to store led brightness values
byte lineEnding = 0x0A; //10 in decimal, ASCII newline character

void setup(){
  //set all three of our led pins to output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  //start the Serial connection
  Serial.begin(115200);
}

void loop(){
 

  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);

}
