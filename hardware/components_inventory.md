# Hardware Inventory

| Category | Component | Purpose | Current Status | Validation Notes |
|---|---|---|---|---|
| Controller | ESP32-WROOM Development Board | Main embedded controller for sensor acquisition, processing, and communication | ✅ Validated | USB-UART interface configured using CP2102 driver. Firmware flashing and Serial communication verified through Arduino IDE |
| Power Conversion | LM2596 DC-DC Buck Converter | Converts industrial DC supply voltage to regulated 5V rail for ESP32 and peripheral electronics | ⏳ Pending Validation | To be tested using controlled 24V DC input from bench power supply before connection to ESP32 |
| Development Interface | Arduino IDE Environment | Firmware development, compilation, and uploading platform | ✅ Validated | ESP32 board package installed and successful firmware upload achieved |
| Communication Interface | CP2102 USB-UART Bridge | Enables programming and serial debugging between PC and ESP32 | ✅ Validated | Driver issue identified and resolved; stable COM port communication established |
| Prototyping Platform | Breadboard | Temporary circuit assembly and sensor interface testing | Available | Will be used for sensor bring-up before PCB-level implementation |
| Temperature Sensor | MLX90614 IR Temperature Sensor | Contactless surface temperature measurement of biomass material | ⏳ Upcoming Integration | I2C communication validation planned |
| Humidity Sensor | Ambient Humidity Sensor | Measurement of surrounding environmental humidity conditions | ⏳ Upcoming Integration | Interface validation pending sensor availability |
| Industrial Communication | RS485 Interface Module | Long-distance robust communication for distributed sensing nodes | Future Stage | Planned migration after local sensor validation |
