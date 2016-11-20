//program for custom switching 2 LEDs (alternative blinks)
int redLED = 9;
int yellowLED = 8;

int onTime = 200;
int offTime = 200;

void setup() {

  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  
  redTweaks();
  
  yellowTweaks();  
}

void redTweaks() {
  Serial.print("Red LED is blinking: ");
  for(int i=0; i<4; i++) {
    Serial.print(i);
    digitalWrite(redLED, HIGH);
    delay(onTime);
    digitalWrite(redLED, LOW);
    delay(offTime);  
  }
 Serial.println(" "); 
}

void yellowTweaks() {
  Serial.print("Yellow LED is blinking: ");
  for (int i = 0; i<4; i++){
    Serial.print(i);
    digitalWrite(yellowLED, HIGH);
    delay(onTime);
    digitalWrite(yellowLED, LOW);
    delay(offTime);
  }
   Serial.println(" ");
}
