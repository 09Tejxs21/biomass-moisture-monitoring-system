# Stage 3 – Integrated Sensor Node

## Objective

Combine all sensing devices into a single ESP32 firmware.

---

## Integrated Sensors

- MLX90614
- Industrial SHT45 Probe

---

## System Architecture

ESP32

├── I²C → MLX90614

└── UART → MAX485 → SHT45

---

## Parameters

- Surface Temperature
- Ambient Temperature
- Relative Humidity

---

## PASS Criteria

Both sensors communicate simultaneously without conflict.

---

## Future Integration

20×4 LCD
