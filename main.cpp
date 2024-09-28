#include <SoftwareSerial.h>

#define RX_PIN 10  
#define TX_PIN 11  
#define LOCK_PIN 7 

SoftwareSerial bluetooth(RX_PIN, TX_PIN);

void setup() {
  bluetooth.begin(9600);
  Serial.begin(9600);
  
  pinMode(LOCK_PIN, OUTPUT);
  digitalWrite(LOCK_PIN, LOW);

  Serial.println("Bluetooth Door Lock Ready. Waiting for commands...");
}

void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();

    if (command == '1') {
      digitalWrite(LOCK_PIN, HIGH);
      Serial.println("Door Unlocked");
    }
    else if (command == '0') {
      digitalWrite(LOCK_PIN, LOW);
      Serial.println("Door Locked");
    }
  }
}
