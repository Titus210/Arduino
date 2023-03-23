int ledPin = D0; // define the LED pin

void setup() {
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn on the LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // wait for 1 second
  // turn off the LED
  digitalWrite(ledPin, LOW);
  delay(1000); // wait for 1 second
}
