# ESP32 MLX90614 Sensor Node (Wokwi)

## Objective

This simulation validates the embedded sensing node of the proposed industrial biomass monitoring system.

The purpose is to verify:

- ESP32 initialization
- I²C communication
- MLX90614 integration
- Sensor data acquisition
- Firmware architecture

## Simulated Hardware

- ESP32 DevKit V1
- MLX90614 Infrared Temperature Sensor

## I²C Connections

| ESP32 | MLX90614 |
|--------|----------|
| 3V3 | VIN |
| GND | GND |
| GPIO21 | SDA |
| GPIO22 | SCL |

## Current Scope

This simulation validates only the sensing node.

Industrial RS485 communication is planned for physical implementation using:

- MAX485 Transceiver
- Industrial SHT45 Modbus Probe

These components are currently outside the capabilities of the Wokwi simulator.

## Next Stage

- MLX90614 live readings
- Humidity integration
- MAX485 hardware
- RS485 communication
