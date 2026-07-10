# Stage 1 – MLX90614 I²C Verification

## Objective

Verify successful communication between the ESP32 and the MLX90614 infrared temperature sensor over the I²C bus.

---

## Hardware Used

- ESP32-WROOM-32E Development Board
- MLX90614 Infrared Temperature Sensor (HW-891 Breakout)
- USB Cable
- Breadboard
- Jumper Wires

---

## Wiring

| MLX90614 | ESP32 |
|----------|-------|
| VIN | 3V3 |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

---

## Software

1. Run I²C Scanner.
2. Verify sensor detection.
3. Read:
   - Ambient Temperature
   - Object Temperature

---

## Expected Output

```
Ambient Temperature : xx.x °C

Object Temperature : xx.x °C
```

---

## PASS Criteria

- ESP32 uploads successfully
- Serial Monitor opens
- Sensor detected
- Temperature changes when object changes

---

## Known Issues

- Loose jumper connections
- Unsoldered header pins
- Incorrect I²C wiring

---

## Next Stage

Proceed to Stage 2 (RS485 Communication).
