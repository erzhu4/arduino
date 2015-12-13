int button = 2;
int counter = 4;
int mode = 0;
bool pause = false;

void setup() {
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(button), blink, CHANGE);
}

void allOff() {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}

void allOn() {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
}

void sweepColor() {
  allOff();
  for (int i = 0; i < 10; i++){
    for (int x = 0; x < 30; x++){
      if (pause) {
        pause = false;
        return;
      }
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      delay(10 - i);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      delay(i);
    }
  }
   for (int i = 0; i < 10; i++){
    for (int x = 0; x < 30; x++){
      if (pause) {
        pause = false;
        return;
      }
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      delay(10 - i);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      delay(i);
    }
  }
  for (int i = 0; i < 10; i++){
    for (int x = 0; x < 30; x++){
      if (pause) {
        pause = false;
        return;
      }
      digitalWrite(9, LOW);
      digitalWrite(11, HIGH);
      delay(10 - i);
      digitalWrite(11, LOW);
      digitalWrite(9, HIGH);
      delay(i);
    }
  }
}

void loop() {

  if (mode == 0){
    allOff();
  }

  if (mode == 1){
    allOff();
    digitalWrite(counter, HIGH);
    counter += 1;
    if (counter > 12){ counter = 4;}
    delay(75);
  }

  if (mode == 2){
    for (int i = 9; i < 12; i ++){
      if (pause) {
        pause = false;
        return;
      }
      allOff();
      digitalWrite(i, HIGH);
      delay(350);
    }
  }

  if (mode == 3){
    for (int i = 4; i < 12; i ++){
      if (pause) {
        pause = false;
        return;
      }
      allOff();
      digitalWrite(i, HIGH);
      digitalWrite((16 - i), HIGH);
      delay(250);
    }
  }

  if (mode == 4){
    sweepColor();
  }
}

//ghetto ass debouncer
void blink() {
  while (digitalRead(button) == HIGH){
    delay(250);
      if (digitalRead(button) == LOW){
        pause = true;
        mode += 1;
        if (mode > 4){mode = 0;}
        delay(50);
      }
  }
}
