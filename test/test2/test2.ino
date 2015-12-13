void allOff() {
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  allOff();

}

void flashOne(int num){
  digitalWrite(num, HIGH);
  delay(1);
  digitalWrite(num, LOW);
}

void turnOnLed(int ground, int pin, int zone, int duration) {
  for (int i = 0; i < (duration / 2); i++){
      digitalWrite(ground, HIGH);
      digitalWrite(pin, HIGH);
      digitalWrite(zone, HIGH);
      delayMicroseconds(100);
      digitalWrite(ground, LOW);
      digitalWrite(pin, LOW);
      digitalWrite(zone, LOW);
  }
}


void loop() {
//  return;
  turnOnLed(1, 3, 4, 10000);
  turnOnLed(2, 4, 6, 10000);
}
