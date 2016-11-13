//these are my global variables
int LEDPin = 13;
int myDelay = 2500;

void setup () {
  pinMode(LEDPin, OUTPUT);
}

void loop() { 
  digitalWrite(LEDPin, HIGH);
  delay(100);
  digitalWrite(LEDPin, LOW);
  delay(myDelay);
   
  //climax-i-fier!  
  if (myDelay != 0) 
    myDelay -= 100;
}
