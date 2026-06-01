/*
  ESP32 I2C Bus Scanner

  Purpose:
  Validate communication between ESP32 and connected I2C sensors.

  Expected Devices:
  SHT45     -> 0x44
  MLX90614  -> 0x5A
*/

#include <Wire.h>

#define SDA_PIN 21
#define SCL_PIN 22

void setup() {

  Serial.begin(115200);

  Wire.begin(SDA_PIN, SCL_PIN);

  Serial.println();
  Serial.println("ESP32 I2C Scanner Initialized");
}

void loop() {

  byte error;
  byte address;

  int deviceCount = 0;

  Serial.println("Scanning I2C Bus...");

  for(address = 1; address < 127; address++) {

    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if(error == 0) {

      Serial.print("Device detected at address: 0x");

      if(address < 16)
        Serial.print("0");

      Serial.println(address, HEX);

      deviceCount++;
    }
  }

  if(deviceCount == 0) {
    Serial.println("No devices detected.");
  }
  else {
    Serial.println("Scan completed successfully.");
  }

  Serial.println("-------------------------");

  delay(5000);
}
