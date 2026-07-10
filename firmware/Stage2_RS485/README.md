# Stage 2 – RS485 Communication

## Objective

Establish UART to RS485 communication between the ESP32 and the industrial SHT45 probe using the MAX485 transceiver.

---

## Hardware Used

- ESP32
- MAX485 TTL-RS485 Module
- Industrial SHT45 RS485 Probe

---

## Communication

UART

↓

MAX485

↓

RS485

↓

Modbus RTU

---

## Tasks

- UART configuration
- Driver Enable (DE) control
- Receiver Enable (RE) control
- Modbus frame transmission
- Modbus response reception

---

## Expected Output

- Ambient Temperature
- Relative Humidity
- Successful Modbus response

---

## PASS Criteria

- Probe responds correctly
- No communication timeout
- Stable data

---

## Next Stage

Integrate MLX90614 and RS485 sensor together.
