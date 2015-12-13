#include <SPI.h>
#include <EthernetV2_0.h>

int iterations = 10;
int num = 100;
int col1 = 1;
int col2 = 2;
int col3 = 3;
int col4 = 4;
int col5 = 5;
int col6 = 6;
int col7 = 7;
int col8 = 8;
int col9 = 9;

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

void setup() {
  // the pins to be OUTPUTS and be LOW intially
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
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

void sweepRight() {
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
}

void sweepBack() {
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
}

void spin() {
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
  for (int i = 0; i < iterations; i++) {
    sweepRight();
  }
  for (int i = 0; i < iterations; i++) {
    sweepBack();
  }
  for (int i = 0; i < iterations; i++) {
    spin();
  }
//  if (mode == 0 ){
//    allOff();
//  } else if (mode == 1){
//    allOn();
//  } else if (mode == 2){
//    sweepLights();
//  } else if (mode == 3){
//    flashPins();
//  } else if (mode == 4) {
//    sweepColor();
//  }
}
