void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //initialize serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, world!"); //print message to serial monitor
  delay(1000); //wait for 1 second
}
