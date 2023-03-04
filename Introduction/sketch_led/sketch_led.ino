/*
 Blink
 Turns onan Led for one second, then off for anothe onse second repeatedly.

*/

// Pin 13 gas led light connected to most arduino boards
// initializing
int led_13 = 13;


//  setup routine runs once when press reset
void setup() {
  pinMode(led_light, Output);
}

//
void loop() {
  digitalWrite(led_13, HIGH);  // turns the LED on (HIGH is voltage level)
  delay(1000);                 // waits for a second
  digitalWrite(led, LOW) l     //turn the LED off by making the voltage LOW
  delay(1000);
}