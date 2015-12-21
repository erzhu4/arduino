int iterations = 5;
int bigNum = 300;
int smallNum = 2;
int col1 = 0;
int col2 = 1;
int col3 = 2;
int col4 = 3;
int col5 = 4;
int col6 = 5;
int col7 = 6;
int col8 = 7;
int col9 = 8;
int col10 = 9;
int col11 = 10;
int col12 = 11;
int col13 = 12;
int col14 = 13;
int col15 = A0;
int col16 = A1;
int g1 = A2;
int g2 = A3;
int g3 = A4;
int g4 = A5;
//int testArr[4] = {col1, col2, col3, col4}

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
    digitalWrite(col10, HIGH);
    digitalWrite(col11, HIGH);
    digitalWrite(col12, HIGH);
    digitalWrite(col13, HIGH);
    digitalWrite(col14, HIGH);
    digitalWrite(col15, HIGH);
    digitalWrite(col16, HIGH);
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
    digitalWrite(col10, LOW);
    digitalWrite(col11, LOW);
    digitalWrite(col12, LOW);
    digitalWrite(col13, LOW);
    digitalWrite(col14, LOW);
    digitalWrite(col15, LOW);
    digitalWrite(col16, LOW);
}

void allGroundOn() {
  digitalWrite(g1, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(g3, HIGH);
  digitalWrite(g4, HIGH);
}

void allGroundOff() {
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
}

void setup() {
//  Serial.begin(9600);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  pinMode(col10, OUTPUT);
  pinMode(col11, OUTPUT);
  pinMode(col12, OUTPUT);
  pinMode(col13, OUTPUT);
  pinMode(col14, OUTPUT);
  pinMode(col15, OUTPUT);
  pinMode(col16, OUTPUT);  
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  allOff();
  allGroundOff();
}

//single led modulated
void flashOne(int ground, int column){
  digitalWrite(ground, HIGH);
  digitalWrite(column, HIGH);
  delayMicroseconds(50);
  digitalWrite(ground, LOW);
  digitalWrite(column, LOW);
}

void displayGround(int ground) {
  digitalWrite(ground, HIGH);
  delayMicroseconds(50);
  digitalWrite(ground, LOW);
  allOff();
}

void turnCubeOn(int duration) {
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration / 4; i++) {
      allOn();
      displayGround(g1);
      allOn();
      displayGround(g2);
      allOn();
      displayGround(g3);
      allOn();
      displayGround(g4);
    }
  }
}

void sweepUp(int duration){
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration / 4; i++) {
      allOn();
      displayGround(g1);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      allOn();
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      allOn();
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      displayGround(g3);
      allOn();
      displayGround(g4);
    }
  }
}

void wavePattern(int duration) {
  for (int x = 0; x < iterations; x++){
//    for (int i = 0; i < duration / 4; i++) {
//      allOn();
//      displayGround(g1);
//      displayGround(g2);
//      displayGround(g3);
//      displayGround(g4);
//    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g2);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
          digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
          digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g3);
          digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g4);
    }
//    for (int i = 0; i < duration / 4; i++) {
//      displayGround(g1);
//      displayGround(g2);
//      displayGround(g3);
//      allOn();
//      displayGround(g4);
//    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g3);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g2);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      displayGround(g1);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g3);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g1);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g2);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g1);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
  }
}

void waveSideWays(int duration){
  for (int x = 0; x < iterations; x++) {
//    for (int i = 0; i < duration / 4; i++){
//      digitalWrite(col1, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col13, HIGH);
//      displayGround(g1);
//      digitalWrite(col1, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col13, HIGH);
//      displayGround(g2);
//      digitalWrite(col1, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col13, HIGH);
//      displayGround(g3);
//      digitalWrite(col1, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col13, HIGH);
//      displayGround(g4);
//    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g3);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col3, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g3);
      digitalWrite(col3, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g3);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g3);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g1);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g2);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g3);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
//    for (int i = 0; i < duration / 4; i++){
//      digitalWrite(col4, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g1);
//      digitalWrite(col4, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g2);
//      digitalWrite(col4, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g3);
//      digitalWrite(col4, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g4);
//    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col3, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col3, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col1, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++){
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
  }
}

void movingBlocks(int duration) {
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col12, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col12, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col12, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      digitalWrite(col12, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col3, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col2, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col6, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col9, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col13, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col11, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col11, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g1);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration / 4; i++) {
      displayGround(g1);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g2);
      digitalWrite(col11, HIGH);
      digitalWrite(col16, HIGH);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
  }
}

//void innerOuter(int duration) {
//  for (int x = 0; x < iterations; x++){
//    for (int i = 0; i < duration; i++) {
//      displayGround(g1);
//      digitalWrite(col6, HIGH);
//      digitalWrite(col7, HIGH);
//      digitalWrite(col10, HIGH);
//      digitalWrite(col11, HIGH);
//      displayGround(g2);
//      digitalWrite(col6, HIGH);
//      digitalWrite(col7, HIGH);
//      digitalWrite(col10, HIGH);
//      digitalWrite(col11, HIGH);
//      displayGround(g3);
//      displayGround(g4);
//    }
//    for (int i = 0; i < duration; i++) {
//      allOn();
//      displayGround(g1);
//      digitalWrite(col1, HIGH);
//      digitalWrite(col2, HIGH);
//      digitalWrite(col3, HIGH);
//      digitalWrite(col4, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col13, HIGH);
//      digitalWrite(col14, HIGH);
//      digitalWrite(col15, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g2);
//      digitalWrite(col1, HIGH);
//      digitalWrite(col2, HIGH);
//      digitalWrite(col3, HIGH);
//      digitalWrite(col4, HIGH);
//      digitalWrite(col5, HIGH);
//      digitalWrite(col8, HIGH);
//      digitalWrite(col9, HIGH);
//      digitalWrite(col12, HIGH);
//      digitalWrite(col13, HIGH);
//      digitalWrite(col14, HIGH);
//      digitalWrite(col15, HIGH);
//      digitalWrite(col16, HIGH);
//      displayGround(g3);
//      allOn();
//      displayGround(g4);
//    }
//  }
//}

void sweepSideWays(int duration){
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col4, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col12, HIGH);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col3, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g3);
      digitalWrite(col3, HIGH);
      digitalWrite(col7, HIGH);
      digitalWrite(col11, HIGH);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col2, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g3);
      digitalWrite(col2, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      digitalWrite(col5, HIGH);
      digitalWrite(col9, HIGH);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      allOff();
      displayGround(g1);
      allOff();
      displayGround(g2);
      allOff();
      displayGround(g3);
      allOff();
      displayGround(g4);
    }
  }
}

void rain(int duration) {
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration/4; i++) {
      //start rain on 1
      digitalWrite(col9, HIGH);
      displayGround(g1);
      digitalWrite(col11, HIGH);
      displayGround(g2);
      digitalWrite(col13, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col11, HIGH);
      displayGround(g1);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      displayGround(g3);
      digitalWrite(col6, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      //start rain on 11
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      displayGround(g2);
      digitalWrite(col6, HIGH);
      displayGround(g3);
      digitalWrite(col7, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col1, HIGH);
      displayGround(g1);
      digitalWrite(col6, HIGH);
      displayGround(g2);
      digitalWrite(col7, HIGH);
      displayGround(g3);
      digitalWrite(col2, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      //start rain on 5
      digitalWrite(col6, HIGH);
      displayGround(g1);
      digitalWrite(col7, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      displayGround(g3);
      digitalWrite(col5, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      //start rain on 15;
      digitalWrite(col7, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      displayGround(g2);
      digitalWrite(col5, HIGH);
      displayGround(g3);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      //start rain on 8;
      digitalWrite(col2, HIGH);
      displayGround(g1);
      digitalWrite(col5, HIGH);
      displayGround(g2);
      digitalWrite(col15, HIGH);
      displayGround(g3);
      digitalWrite(col8, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col5, HIGH);
      displayGround(g1);
      digitalWrite(col15, HIGH);
      displayGround(g2);
      digitalWrite(col8, HIGH);
      displayGround(g3);
      digitalWrite(col3, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col15, HIGH);
      displayGround(g1);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      displayGround(g3);
      digitalWrite(col10, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col8, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      displayGround(g2);
      digitalWrite(col10, HIGH);
      displayGround(g3);
      digitalWrite(col2, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col3, HIGH);
      displayGround(g1);
      digitalWrite(col10, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      displayGround(g3);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col10, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      displayGround(g2);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      displayGround(g4);
    }
   for (int i = 0; i < duration/4; i++) {
      digitalWrite(col2, HIGH);
      displayGround(g1);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      displayGround(g3);
      digitalWrite(col11, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/4; i++) {
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col9, HIGH);
      displayGround(g2);
      digitalWrite(col11, HIGH);
      displayGround(g3);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
  }
}

void crossPlane(int duration) {
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration/2; i++) {
      //step 1
      displayGround(g1);
      displayGround(g2);
      displayGround(g3);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 2
      displayGround(g1);
      displayGround(g2);
      digitalWrite(col16, HIGH);
      displayGround(g3);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 3
      displayGround(g1);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g3);
      digitalWrite(col14, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 4
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g2);
      digitalWrite(col14, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      displayGround(g3);
      digitalWrite(col13, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col7, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 5
      digitalWrite(col15, HIGH);
      digitalWrite(col12, HIGH);
      displayGround(g1);
      digitalWrite(col14, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      displayGround(g2);
      digitalWrite(col13, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col7, HIGH);
      displayGround(g3);
      digitalWrite(col9, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col3, HIGH);      
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 6
      digitalWrite(col14, HIGH);
      digitalWrite(col8, HIGH);
      digitalWrite(col11, HIGH);
      displayGround(g1);
      digitalWrite(col13, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col7, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col3, HIGH);
      displayGround(g3);
      digitalWrite(col5, HIGH);
      digitalWrite(col2, HIGH);   
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 7
      digitalWrite(col13, HIGH);
      digitalWrite(col4, HIGH);
      digitalWrite(col10, HIGH);
      digitalWrite(col7, HIGH);
      displayGround(g1);
      digitalWrite(col9, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col3, HIGH);
      displayGround(g2);
      digitalWrite(col5, HIGH);
      digitalWrite(col2, HIGH);
      displayGround(g3);
      digitalWrite(col1, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step 8
      digitalWrite(col9, HIGH);
      digitalWrite(col6, HIGH);
      digitalWrite(col3, HIGH);
      displayGround(g1);
      digitalWrite(col5, HIGH);
      digitalWrite(col2, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step whatever
      digitalWrite(col5, HIGH);
      digitalWrite(col2, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step whatever
      digitalWrite(col1, HIGH);
      displayGround(g1);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      //step whatever
      displayGround(g1);
      displayGround(g2);
      displayGround(g3);
      displayGround(g4);
    }
  }
}

void rainSideWays(int duration){
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col5, HIGH);
      displayGround(g1);
      digitalWrite(col7, HIGH);
      displayGround(g2);
      digitalWrite(col10, HIGH);
      displayGround(g3);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col6, HIGH);
      displayGround(g1);
      digitalWrite(col8, HIGH);
      displayGround(g2);
      digitalWrite(col11, HIGH);
      displayGround(g3);
      digitalWrite(col5, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col7, HIGH);
      displayGround(g1);
      digitalWrite(col13, HIGH);
      displayGround(g2);
      digitalWrite(col12, HIGH);
      displayGround(g3);
      digitalWrite(col6, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col8, HIGH);
      displayGround(g1);
      digitalWrite(col14, HIGH);
      displayGround(g2);
      digitalWrite(col1, HIGH);
      displayGround(g3);
      digitalWrite(col7, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col9, HIGH);
      displayGround(g1);
      digitalWrite(col15, HIGH);
      displayGround(g2);
      digitalWrite(col2, HIGH);
      displayGround(g3);
      digitalWrite(col8, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col10, HIGH);
      displayGround(g1);
      digitalWrite(col16, HIGH);
      displayGround(g2);
      digitalWrite(col3, HIGH);
      displayGround(g3);
      digitalWrite(col13, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col11, HIGH);
      displayGround(g1);
      digitalWrite(col1, HIGH);
      displayGround(g2);
      digitalWrite(col4, HIGH);
      displayGround(g3);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col12, HIGH);
      displayGround(g1);
      digitalWrite(col2, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      displayGround(g3);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col13, HIGH);
      displayGround(g1);
      digitalWrite(col3, HIGH);
      displayGround(g2);
      digitalWrite(col10, HIGH);
      displayGround(g3);
      digitalWrite(col16, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col14, HIGH);
      displayGround(g1);
      digitalWrite(col4, HIGH);
      displayGround(g2);
      digitalWrite(col11, HIGH);
      displayGround(g3);
      digitalWrite(col13, HIGH);// first account
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col15, HIGH);
      displayGround(g1);
      digitalWrite(col5, HIGH);
      displayGround(g2);
      digitalWrite(col12, HIGH);
      displayGround(g3);
      digitalWrite(col14, HIGH);
      displayGround(g4);
    }
    for (int i = 0; i < duration/2; i++) {
      digitalWrite(col16, HIGH);
      displayGround(g1);
      digitalWrite(col6, HIGH);
      displayGround(g2);
      digitalWrite(col9, HIGH);
      displayGround(g3);
      digitalWrite(col15, HIGH);
      displayGround(g4);
    }
  }
}

//      digitalWrite(col5, HIGH);
//      displayGround(g1);
//      digitalWrite(col7, HIGH);
//      displayGround(g2);
//      digitalWrite(col10, HIGH);
//      displayGround(g3);
//      digitalWrite(col16, HIGH);
//      displayGround(g4);

void loop() {
  iterations = 5;
  rainSideWays(500);
  crossPlane(300);
  rain(500);
  wavePattern(300);
  waveSideWays(300);
  movingBlocks(500);
  sweepSideWays(300);
  iterations = 1;
  bigNum = 450;
  smallNum = 10;
  for (int i = bigNum; i > 0; i -= smallNum * 2){
    rainSideWays(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum * 2){
    rain(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum){
    crossPlane(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum){
    sweepSideWays(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum){
    wavePattern(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum){
    waveSideWays(i);
  }
  for (int i = bigNum; i > 0; i -= smallNum){
    movingBlocks(i);
  }
}
