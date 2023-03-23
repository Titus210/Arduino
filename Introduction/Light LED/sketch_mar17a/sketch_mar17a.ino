// define pins

int led_12 = 12;
int led_13 = 13;

void setup() {
  pinMode(led_12,OUTPUT);
  pinMode(led_13,OUTPUT);
}

void loop() {
  digitalWrite(led_12, HIGH);
  delay(400);
  digitalWrite(led_12, LOW);

  digitalWrite(led_13, HIGH);
  delay(1400);
  digitalWrite(led_13, LOW);
}
