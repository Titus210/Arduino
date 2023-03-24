// set pin number
int led_12 = 12;

void setup() {
  pinMode(led_12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_12, 1);
  delay(400);
    digitalWrite(led_12, 0);
  delay(400);
}
