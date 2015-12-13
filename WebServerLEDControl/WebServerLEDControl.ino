#include <SPI.h>
#include <EthernetV2_0.h>
 
int pins[] = {2,3,5}; // the digital pins you want to control. 
// NOTE: do not attempt to control the pins used by the SPI bus or 0,1, and 4 pins
 
// define the controller's MAC address
byte mac[] = { 
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
 
// set the server at port 80 for HTTP
int port = 80;
String ipAddress = "";
boolean pause = false;
EthernetServer server(port);
IPAddress ip(192, 168,1,12);
// Ethernet controller SPI CS pin
#define W5200_CS  10
// SD card SPI CS pin
#define SDCARD_CS 4

int num = 500;

void allOff() {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}

void allOn() {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
}


void flashPins() {
  allOff();
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  delay(num);
  allOff();
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(num);
  allOff();
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(num);
  allOff();
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(num);
  allOff();
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(num);
}

void sweepLights() {
  for (int i = 1; i < 10; i++){
    digitalWrite(i, HIGH);
    delay(num / 10);
    allOff();
  }
}

void sweepColor() {
  allOff();
  for (int i = 0; i < 10; i++){
    for (int x = 0; x < 30; x++){
      if (pause) {
        pause = false;
        return;
      }
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      delay(10 - i);
      digitalWrite(8, HIGH);
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
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      delay(10 - i);
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
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
      digitalWrite(7, HIGH);
      delay(10 - i);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      delay(i);
    }
  }
}

void setup() {
  // the pins to be OUTPUTS and be LOW intially
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  allOff();
 
  Serial.begin(9600);
  // make sure that the SD card is not selected for the SPI port
  // by setting the CS pin to HIGH
  pinMode(SDCARD_CS,OUTPUT);
  digitalWrite(SDCARD_CS,HIGH);
  // loop until we get a connection to the access point
  Ethernet.begin(mac, ip);
  // now that we have a good ethernet connection we can start the server
  server.begin();
  Serial.print("The server can be accessed at: ");
  Serial.println(Ethernet.localIP());
}

int mode = 0;
 
void loop() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    Serial.println("new client");
    // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        // look for the string "pin=" in the browser/client request
        // The string "pin=" is found in the browser/client rquest, this meanst that the user wants to toggle the LEDs
        if (!client.find("a=")) {
          ; 
        } else {
          pause = true;
          int firstNumber = (client.read()-48); // get first number i.e. if the pin 13 then the 1st number is 1
          int secondNumber = (client.read()-48);
          mode = firstNumber;
          if (secondNumber != -16){
            num = secondNumber * 100;
          }
          Serial.print(firstNumber);
          // Send HTTP response back to browser/client
          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println("Connnection: close");
          client.println();
          client.println("sup bitches!!!!");
          client.println(firstNumber);
          client.println(secondNumber);
          break;
        } 
      }
    }
    // give the web browser time to receive the data
    delay(1);
    // close the connection:
    client.stop();
    pause = false;
    Serial.println("client disonnected");
  }
  allOff();
  if (mode == 0 ){
    allOff();
  } else if (mode == 1){
    allOn();
  } else if (mode == 2){
    sweepLights();
  } else if (mode == 3){
    flashPins();
  } else if (mode == 4) {
    sweepColor();
  }
}
