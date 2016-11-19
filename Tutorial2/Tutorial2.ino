//program for switching LED

int redLED = 9;

int onTime = 500;
int offTime = 500;

void setup() {
  pinMode(redLED, OUTPUT);
}

void loop() {
  
  digitalWrite(redLED, HIGH);
  delay(onTime);
  
  digitalWrite(redLED, LOW);
  delay(offTime);
}
