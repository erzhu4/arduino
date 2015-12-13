int num = 120;
int iterations = 10;

int col1 = 1;
int col2 = 2;
int col3 = 3;
int col4 = 4;
int col5 = 5;
int col6 = 6;
int col7 = 7;
int col8 = 8;
int col9 = 9;
int g1 = 10;
int g2 = 11;
int g3 = 12;

void setup() {
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);  
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
}

void allOn() {
    digitalWrite(col1, HIGH);
    digitalWrite(col2, HIGH);
    digitalWrite(col3, HIGH);
    digitalWrite(col4, HIGH);
    digitalWrite(col5, HIGH);
    digitalWrite(col6, HIGH);
    digitalWrite(col7, HIGH);
    digitalWrite(col8, HIGH);
    digitalWrite(col9, HIGH);
}

void allOff() {
    digitalWrite(col1, LOW);
    digitalWrite(col2, LOW);
    digitalWrite(col3, LOW);
    digitalWrite(col4, LOW);
    digitalWrite(col5, LOW);
    digitalWrite(col6, LOW);
    digitalWrite(col7, LOW);
    digitalWrite(col8, LOW);
    digitalWrite(col9, LOW);
}

void allGroundOn() {
  digitalWrite(g1, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(g3, HIGH);
}

void allGroundOff() {
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
}

void turnOnLed(int layer, int number) {
  digitalWrite(layer + 9, HIGH);
  digitalWrite(number, HIGH);
  delay(1);
  digitalWrite(layer + 9, LOW);
  digitalWrite(number, LOW);
}

void loop() {
  for (int i = 0; i < 100; i++){
    turnOnLed(1, 1);
    turnOnLed(2, 2);
    turnOnLed(2, 4);
    turnOnLed(3, 3);
    turnOnLed(3, 5);
    turnOnLed(3, 7);
    turnOnLed(2, 6);
    turnOnLed(2, 8);
    turnOnLed(1, 9);
  }
  for (int i = 0; i < 100; i++){
    turnOnLed(3, 9);
    turnOnLed(3, 1);
    turnOnLed(2, 2);
    turnOnLed(2, 4);
    turnOnLed(2, 6);
    turnOnLed(2, 8);
    turnOnLed(1, 7);
    turnOnLed(1, 5);
    turnOnLed(1, 3);
  }
}
