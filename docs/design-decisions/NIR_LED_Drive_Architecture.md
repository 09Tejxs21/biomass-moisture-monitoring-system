# NIR LED Drive Architecture Decision

## 1. Design Requirement

The biomass monitoring system uses Near Infrared (NIR) illumination as part of the contactless sensing architecture.

The LED subsystem must operate reliably in an industrial truck-gate environment involving:

- Continuous operation cycles
- Dust exposure
- Temperature variations
- Mechanical vibration
- Limited maintenance access

The design priority is not only maximum LED lifetime but predictable failure behavior and stable optical output.

---

# 2. Initial Design Question

Two possible LED connection strategies were evaluated:

1. Complete series connection
2. Complete parallel connection

The decision was made by comparing reliability, failure detection, current stability, and implementation complexity.

---

# 3. Parallel LED Architecture Analysis

## Configuration
  24V Supply
    |
|   |   |
LED LED LED
|   |   |
GND GND GND
## Advantages

- Failure of one LED does not immediately disable the complete illumination system.
- Remaining LEDs continue operating.

---

## Limitations

Parallel LEDs introduce uncontrolled current sharing.

Due to manufacturing tolerances, every LED has slightly different forward voltage characteristics.

Example:

LED A:
Vf = 1.45V

LED B:
Vf = 1.55V


The lower voltage LED conducts more current.

This causes:

Higher current
      ↓
Higher temperature
      ↓
Lower forward voltage
      ↓
Even higher current


This positive feedback mechanism can accelerate degradation.

---

## Critical Industrial Concern

The biggest issue is silent optical degradation.

Example:

One LED failure:

100% illumination
        ↓
75% illumination


The system may continue operating without detecting that illumination intensity has changed.

Since optical sensing depends on emitted light intensity, this can introduce measurement errors.

A reduced reflected signal may incorrectly appear as a change in biomass properties.

---

# 4. Series LED Architecture Analysis

## Configuration
24V Supply
|
Constant Current Driver
|
LED
|
LED
|
LED
|
LED
|
GND

  
---

## Advantages

### Uniform Current Flow

The same current passes through every LED.

Therefore:

- Brightness matching improves
- Thermal behavior becomes predictable
- Driver design becomes simpler


---

### Controlled Failure Behavior

If an LED fails open:

Illumination failure
        ↓
Invalid optical measurement
        ↓
Sensor node fault condition


This creates a fail-visible condition.

Industrial systems generally prefer detectable failure over hidden degradation.

---

# 5. Final Selected Architecture

The selected approach for the first industrial prototype: Series
---

---

# 6. Why Constant Current Driving?

LED brightness is primarily controlled by current, not voltage.

A fixed voltage supply can cause current variations due to:

- LED temperature changes
- Forward voltage differences
- Component tolerances

A constant current driver maintains stable illumination by adjusting voltage automatically.

---

# 7. ESP32 Control Strategy

The ESP32 does not directly power the LEDs.

Instead:

ESP32 GPIO
      |
MOSFET Gate
      |
Controls LED Current Path


Advantages:

- ESP32 remains electrically protected
- High LED current can be switched safely
- Pulsed illumination is possible
- Power consumption can be controlled

---

# 8. System Level Reliability Approach

Instead of adding redundancy inside each LED module, reliability is handled at the sensor-node level.

Example deployment:
<img width="1536" height="1024" alt="image" src="https://github.com/user-attachments/assets/9ed3f30c-047d-4a34-9e8d-216ffa7f28e9" />

Each node contains an independent illumination and sensing unit.

A failure affects only one measurement point instead of the entire monitoring system.

---

# 9. Design Philosophy

The design follows the principle:

"Make failures detectable rather than making every component impossible to fail."

Additional monitoring circuits such as individual LED current sensing were avoided in the initial prototype to reduce:

- Hardware complexity
- PCB size
- Cost
- Firmware overhead

The selected architecture provides a practical balance between industrial reliability and manufacturability.


