## Firmware Preparation

Developed initial I2C scanner firmware for ESP32 communication validation.

The scanner will be used to verify physical connectivity and address detection of:
- MLX90614 infrared temperature sensor
- SHT45 humidity sensor

## Validation Results

- ESP32-WROOM development board successfully detected through CP2102 USB-UART interface.
- CP210x driver configured for Windows development environment.
- Firmware compilation and flashing verified using Arduino IDE.
- Serial communication established at 115200 baud rate.

## Observations

Initial upload failure occurred due to missing CP2102 driver configuration.
After driver installation, stable USB-UART communication was achieved.
