
/*Simple PIR sketch: Written by ScottC, 19th Dec 2013

 http://arduinobasics.blogspot.com/
 
 ----------------------------------------------------*/

void setup(){
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);
}

void loop(){
 digitalWrite(13,digitalRead(2));
}
