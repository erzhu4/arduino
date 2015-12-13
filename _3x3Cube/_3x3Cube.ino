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

void eightSquares() {
  digitalWrite(g1, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  delay(num);
  allOff();
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  delay(num);
  allOff();
  digitalWrite(col9, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  allGroundOff();
  digitalWrite(g3, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  delay(num);
  allOff();
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  delay(num);
  allOff();
  digitalWrite(col9, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  allGroundOff();
}

void sweepRight() {
  allGroundOn();
  digitalWrite(col1, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col7, HIGH);
  delay(num);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col8, HIGH);
  delay(num);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col9, HIGH);
  delay(num);
  allOff();
  delay(num);
}


void backAndForth() {
  allGroundOn();
  digitalWrite(col1, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col8, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col6, HIGH);
  digitalWrite(col9, HIGH);
  delay(num/2);
  digitalWrite(col2, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col8, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col1, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
}

void sweepUp() {
  allOn();
  allGroundOff();
  digitalWrite(g1, HIGH);
  delay(num);
  allGroundOff();
  digitalWrite(g2, HIGH);
  delay(num);
  allGroundOff();
  digitalWrite(g3, HIGH);
  delay(num);
  allGroundOff();
  delay(num);
}

void upAndDown() {
  allOn();
  allGroundOff();
  digitalWrite(g1, HIGH);
  delay(num/2);
  allGroundOff();
  digitalWrite(g2, HIGH);
  delay(num/2);
  allGroundOff();
  digitalWrite(g3, HIGH);
  delay(num/2);
  allGroundOff();
  digitalWrite(g2, HIGH);
  delay(num/2);
  allGroundOff();
  digitalWrite(g1, HIGH);
  delay(num/2);
}

void sweepBack() {
  allGroundOn();
  digitalWrite(col1, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col3, HIGH);
  delay(num);
  allOff();
  digitalWrite(col4, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  digitalWrite(col7, HIGH);
  digitalWrite(col8, HIGH);
  digitalWrite(col9, HIGH);
  delay(num);
  allOff();
  delay(num);
}

void sweepDiag() {
  allGroundOn();
  allOff();
  delay(num);
  digitalWrite(col1, HIGH);
  delay(num);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  delay(num);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col7, HIGH);
  delay(num);
  allOff();
  digitalWrite(col6, HIGH);
  digitalWrite(col8, HIGH);
  delay(num);
  allOff();
  digitalWrite(col9, HIGH);
  delay(num);
}

void cross() {
  allGroundOn();
  allOff();
  digitalWrite(col1, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col6, HIGH);
  digitalWrite(col8, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col9, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col4, HIGH);
  digitalWrite(col8, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col1, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col9, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col6, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col3, HIGH);
  delay(num/2);
}

void backAndForthDiag() {
  allGroundOn();
  allOff();
  digitalWrite(col1, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col6, HIGH);
  digitalWrite(col8, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col9, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col9, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col8, HIGH);
  digitalWrite(col6, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col3, HIGH);
  digitalWrite(col5, HIGH);
  digitalWrite(col7, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col2, HIGH);
  digitalWrite(col4, HIGH);
  delay(num/2);
  allOff();
  digitalWrite(col1, HIGH);
  delay(num/2);  
}

void spin() {
  allGroundOn();
  digitalWrite(col5, HIGH);
  digitalWrite(col4, HIGH);
  digitalWrite(col6, HIGH);
  delay(num);
  allOff();
  digitalWrite(col5, HIGH);
  digitalWrite(col1, HIGH);
  digitalWrite(col9, HIGH);
  delay(num);
  allOff();
  digitalWrite(col5, HIGH);
  digitalWrite(col2, HIGH);
  digitalWrite(col8, HIGH);
  delay(num);
  allOff();
  digitalWrite(col5, HIGH);
  digitalWrite(col3, HIGH);
  digitalWrite(col7, HIGH);
  delay(num);
  allOff();
}

void runThrough() {
  int tick = num/2;
  allGroundOff();
  digitalWrite(g1, HIGH);
  for (int i = 1; i < 10; i++){
    allOff();
    digitalWrite(i, HIGH);
    delay(tick);
  }
  allGroundOff();
  digitalWrite(g2, HIGH);
  for (int i = 1; i < 10; i++){
    allOff();
    digitalWrite(i, HIGH);
    delay(tick);
  }
  allGroundOff();
  digitalWrite(g3, HIGH);
  for (int i = 1; i < 10; i++){
    allOff();
    digitalWrite(i, HIGH);
    delay(tick);
  }  
}

void loop() {
  iterations = 5;
  num = 150;
  for (int i = 0; i < iterations; i++) {
    eightSquares();
  }
  for (int i = 0; i < iterations; i++) {
    cross();
  }
  for (int i = 0; i < iterations; i++) {
    upAndDown();
  }
  for (int i = 0; i < iterations; i++) {
    backAndForth();
  }
  for (int i = 0; i < iterations; i++) {
    backAndForthDiag();
  }
  for (int i = 0; i < 2; i++){
    runThrough();
  }
  for (int i = 0; i < iterations; i++) {
    sweepUp();
  }
  for (int i = 0; i < iterations; i++) {
    sweepDiag();
  }
  for (int i = 0; i < iterations; i++) {
    sweepRight();
  }
  for (int i = 0; i < iterations; i++) {
    sweepBack();
  }
  for (int i = 0; i < 50; i++) {
    num = 120 - (2*i);
    spin();
  }
}
