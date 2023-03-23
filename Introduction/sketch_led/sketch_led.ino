/*
 Blink
 Turns onan Led for one second, then off for anothe onse second repeatedly.

*/

// Pin 13 gas led light connected to most arduino boards
// initializing

int led_13 = 13;
int led_12 = 12;
int led_11 = 11;
int change = 0;


//  setup routine runs once when press reset
void setup() {
  pinMode(led_13, OUTPUT);
  pinMode(led_11, OUTPUT);
  pinMode(led_12, OUTPUT);
}

//
void loop() {


  for(change = 0; change <= 10;change++){
      digitalWrite(led_13, HIGH);  // turns the LED on (HIGH is voltage level)
    delay(200);                 // waits for a second
  digitalWrite(led_13, LOW);   //turn the LED off by making the voltage LOW
  delay(90);

  // switch the lights alternatively 


  // if green is high switch orange and red twice on alternatively

    if(change = 30){
    digitalWrite(led_12, HIGH);
    delay(500);
    digitalWrite(led_12, LOW);
    delay(500);
    digitalWrite(led_11, HIGH);
    delay(500);
     digitalWrite(led_11,LOW);
     delay(1000);
    }
   change = 0;

}


  }
