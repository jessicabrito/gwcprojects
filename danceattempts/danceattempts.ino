int timer = 1000;
int ledPins[] = {
  8, 10
};
int pinCount = 6;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}
serial.begin


void loop() {

  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH); 
  digitalWrite(-12, HIGH);
  digitalWrite(10, LOW);
  delay(1000);                      // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(10, HIGH);
  digitalWrite(-12, LOW);  
  digitalWrite(13, LOW);
  delay(1000);              

}



