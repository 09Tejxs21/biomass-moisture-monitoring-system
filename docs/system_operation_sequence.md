# Sensor Operation Sequence

## Stage 1 — Vehicle Entry

Truck enters the monitoring zone.

System detects inspection condition.

---

## Stage 2 — Sensor Node Activation

Each ESP32 sensing node initializes:

- IR temperature sensing
- Ambient humidity sensing
- Future optical sensing modules

---

## Stage 3 — Distributed Measurement

Multiple sensor nodes collect measurements from different biomass regions.

Purpose:

Reduce dependency on single-point measurements.

---

## Stage 4 — Data Processing

Sensor data is combined for environmental compensation and biomass condition estimation.

---

## Stage 5 — Output Generation

Final processed information is transmitted for operator evaluation.
