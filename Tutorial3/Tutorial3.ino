//program for switching 2 LEDs (alternative blinks)

int redLED = 9;
int yellowLED = 8;

int onTime = 500;
int offTime = 500;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  
  //switch LEDs
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  
  //give some delay
  delay(onTime);
  
  //switch LEDs
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  
  //give some delay
  delay(offTime);
}
