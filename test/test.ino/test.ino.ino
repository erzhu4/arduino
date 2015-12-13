void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void turnOn(num){
  digitalWrite(num, HIGH);
  delay(1);
  digitalWrite(num, LOW);
}

void allOff() {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
}

void loop() {
  turnOn(0);
  turnOn(1);
  turnOn(2);
  turnOn(3);
}
