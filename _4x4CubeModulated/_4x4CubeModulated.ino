int iterations = 5;
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

void allOn() {
  ;
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
}

//single led modulated
void flashOne(int ground, int column){
  digitalWrite(ground, HIGH);
  digitalWrite(column, HIGH);
  delayMicroseconds(50);
  digitalWrite(ground, LOW);
  digitalWrite(column, LOW);
}

//layer mod
void flashLayer(int layerNumber, int columns[]) {
  for (int i = 0; i < sizeof(columns); i++) {
    digitalWrite(columns[i], HIGH);
    digitalWrite(layerNumber, HIGH);
  }
  delayMicroseconds(50);
  for (int i = 0; i < sizeof(columns); i++) {
    digitalWrite(columns[i], LOW);
    digitalWrite(layerNumber, LOW);
  }
  
}

//single mod
void waveLayerMod(int duration){
    int arr[] = {col1, col2, col3, col4};
    flashLayer(1, arr);
}

void wavePatternVertical(int duration) {
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
      flashOne(g1, col10);
      flashOne(g1, col11);
      flashOne(g1, col12);
      flashOne(g1, col13);
      flashOne(g1, col14);
      flashOne(g1, col15);
      flashOne(g1, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g2, col1);
      flashOne(g2, col2);
      flashOne(g2, col3);
      flashOne(g2, col4);
      flashOne(g1, col5);
      flashOne(g1, col6);
      flashOne(g1, col7);
      flashOne(g1, col8);
      flashOne(g1, col9);
      flashOne(g1, col10);
      flashOne(g1, col11);
      flashOne(g1, col12);
      flashOne(g1, col13);
      flashOne(g1, col14);
      flashOne(g1, col15);
      flashOne(g1, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g3, col1);
      flashOne(g3, col2);
      flashOne(g3, col3);
      flashOne(g3, col4);
      flashOne(g2, col5);
      flashOne(g2, col6);
      flashOne(g2, col7);
      flashOne(g2, col8);
      flashOne(g1, col9);
      flashOne(g1, col10);
      flashOne(g1, col11);
      flashOne(g1, col12);
      flashOne(g1, col13);
      flashOne(g1, col14);
      flashOne(g1, col15);
      flashOne(g1, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g4, col1);
      flashOne(g4, col2);
      flashOne(g4, col3);
      flashOne(g4, col4);
      flashOne(g3, col5);
      flashOne(g3, col6);
      flashOne(g3, col7);
      flashOne(g3, col8);
      flashOne(g2, col9);
      flashOne(g2, col10);
      flashOne(g2, col11);
      flashOne(g2, col12);
      flashOne(g1, col13);
      flashOne(g1, col14);
      flashOne(g1, col15);
      flashOne(g1, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g4, col1);
      flashOne(g4, col2);
      flashOne(g4, col3);
      flashOne(g4, col4);
      flashOne(g4, col5);
      flashOne(g4, col6);
      flashOne(g4, col7);
      flashOne(g4, col8);
      flashOne(g3, col9);
      flashOne(g3, col10);
      flashOne(g3, col11);
      flashOne(g3, col12);
      flashOne(g2, col13);
      flashOne(g2, col14);
      flashOne(g2, col15);
      flashOne(g2, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g4, col1);
      flashOne(g4, col2);
      flashOne(g4, col3);
      flashOne(g4, col4);
      flashOne(g4, col5);
      flashOne(g4, col6);
      flashOne(g4, col7);
      flashOne(g4, col8);
      flashOne(g4, col9);
      flashOne(g4, col10);
      flashOne(g4, col11);
      flashOne(g4, col12);
      flashOne(g3, col13);
      flashOne(g3, col14);
      flashOne(g3, col15);
      flashOne(g3, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g4, col1);
      flashOne(g4, col2);
      flashOne(g4, col3);
      flashOne(g4, col4);
      flashOne(g4, col5);
      flashOne(g4, col6);
      flashOne(g4, col7);
      flashOne(g4, col8);
      flashOne(g4, col9);
      flashOne(g4, col10);
      flashOne(g4, col11);
      flashOne(g4, col12);
      flashOne(g4, col13);
      flashOne(g4, col14);
      flashOne(g4, col15);
      flashOne(g4, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g3, col1);
      flashOne(g3, col2);
      flashOne(g3, col3);
      flashOne(g3, col4);
      flashOne(g4, col5);
      flashOne(g4, col6);
      flashOne(g4, col7);
      flashOne(g4, col8);
      flashOne(g4, col9);
      flashOne(g4, col10);
      flashOne(g4, col11);
      flashOne(g4, col12);
      flashOne(g4, col13);
      flashOne(g4, col14);
      flashOne(g4, col15);
      flashOne(g4, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g2, col1);
      flashOne(g2, col2);
      flashOne(g2, col3);
      flashOne(g2, col4);
      flashOne(g3, col5);
      flashOne(g3, col6);
      flashOne(g3, col7);
      flashOne(g3, col8);
      flashOne(g4, col9);
      flashOne(g4, col10);
      flashOne(g4, col11);
      flashOne(g4, col12);
      flashOne(g4, col13);
      flashOne(g4, col14);
      flashOne(g4, col15);
      flashOne(g4, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g1, col1);
      flashOne(g1, col2);
      flashOne(g1, col3);
      flashOne(g1, col4);
      flashOne(g2, col5);
      flashOne(g2, col6);
      flashOne(g2, col7);
      flashOne(g2, col8);
      flashOne(g3, col9);
      flashOne(g3, col10);
      flashOne(g3, col11);
      flashOne(g3, col12);
      flashOne(g4, col13);
      flashOne(g4, col14);
      flashOne(g4, col15);
      flashOne(g4, col16);
    }
    for (int i = 0; i < duration / 4; i++) {
      flashOne(g1, col1);
      flashOne(g1, col2);
      flashOne(g1, col3);
      flashOne(g1, col4);
      flashOne(g1, col5);
      flashOne(g1, col6);
      flashOne(g1, col7);
      flashOne(g1, col8);
      flashOne(g2, col9);
      flashOne(g2, col10);
      flashOne(g2, col11);
      flashOne(g2, col12);
      flashOne(g3, col13);
      flashOne(g3, col14);
      flashOne(g3, col15);
      flashOne(g3, col16);
    }
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
      flashOne(g1, col10);
      flashOne(g1, col11);
      flashOne(g1, col12);
      flashOne(g2, col13);
      flashOne(g2, col14);
      flashOne(g2, col15);
      flashOne(g2, col16);
    }
  }
}

void loop() {
  wavePatternVertical(700);
//  waveLayerMod(700);
}
