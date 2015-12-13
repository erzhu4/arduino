int iterations = 5;
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
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  allOff();
}

void flashOne(int ground, int column){
  digitalWrite(ground, HIGH);
  digitalWrite(column, HIGH);
  delayMicroseconds(250);
  digitalWrite(ground, LOW);
  digitalWrite(column, LOW);
}

void doShapeFor(int pinArr[][2], int duration) {
  for (int z = 0; z < (duration / 2); z++){
      for (int i = 0; i < sizeof(pinArr); i++){
        flashOne(pinArr[i][0], pinArr[i][1]);
      }
  }
}

void doX(int duration) {
  for (int x = 0; x < iterations; x++){
//    int arr[][2] = {
//      {g1, col3},
//      {g1, col9},
//      {g1, col1},
//      {g1, col7},
//      {g2, col5},
//      {g3, col3},
//      {g3, col9},
//      {g3, col1},
//      {g3, col7}
//    };
    int arr[][2] = {
      {g1, col3},
      {g1, col9},
      {g1, col1},
      {g2, col5}
    };
    doShapeFor(arr, duration);
    allOff();
    delay(250);
  }
}

void wavePattern(int duration) {
  for (int x = 0; x < iterations; x++){
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g1, col1);
      flashOne(g1, col2);
      flashOne(g1, col3);
      flashOne(g1, col4);
      flashOne(g1, col5);
      flashOne(g1, col6);
      flashOne(g1, col7);
      flashOne(g1, col8);
      flashOne(g1, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g2, col1);
      flashOne(g2, col2);
      flashOne(g2, col3);
      flashOne(g1, col4);
      flashOne(g1, col5);
      flashOne(g1, col6);
      flashOne(g1, col7);
      flashOne(g1, col8);
      flashOne(g1, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g3, col1);
      flashOne(g3, col2);
      flashOne(g3, col3);
      flashOne(g2, col4);
      flashOne(g2, col5);
      flashOne(g2, col6);
      flashOne(g1, col7);
      flashOne(g1, col8);
      flashOne(g1, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g3, col1);
      flashOne(g3, col2);
      flashOne(g3, col3);
      flashOne(g3, col4);
      flashOne(g3, col5);
      flashOne(g3, col6);
      flashOne(g2, col7);
      flashOne(g2, col8);
      flashOne(g2, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g3, col1);
      flashOne(g3, col2);
      flashOne(g3, col3);
      flashOne(g3, col4);
      flashOne(g3, col5);
      flashOne(g3, col6);
      flashOne(g3, col7);
      flashOne(g3, col8);
      flashOne(g3, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g2, col1);
      flashOne(g2, col2);
      flashOne(g2, col3);
      flashOne(g3, col4);
      flashOne(g3, col5);
      flashOne(g3, col6);
      flashOne(g3, col7);
      flashOne(g3, col8);
      flashOne(g3, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g1, col1);
      flashOne(g1, col2);
      flashOne(g1, col3);
      flashOne(g2, col4);
      flashOne(g2, col5);
      flashOne(g2, col6);
      flashOne(g3, col7);
      flashOne(g3, col8);
      flashOne(g3, col9);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g1, col1);
      flashOne(g1, col2);
      flashOne(g1, col3);
      flashOne(g1, col4);
      flashOne(g1, col5);
      flashOne(g1, col6);
      flashOne(g2, col7);
      flashOne(g2, col8);
      flashOne(g2, col9);
    }
  }
}

void loop() {
//  int arr[][2] = { {g3, col1},{g2,col1} };
//  doShapeFor(arr, 1000);
//  int arr2[][2] = { {g2,col2}, {g1,col2} };
//  doShapeFor(arr2, 1000);
//  int arr3[][2] = { {g1,col5}, {g1,col6}, {g1,col8}, {g1,col9}, {g2,col6}, {g2,col5}, {g2,col8}, {g2,col9} };
//  doShapeFor(arr3, 1000);
//
  wavePattern(100);
}
