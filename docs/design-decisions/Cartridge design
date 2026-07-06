** Major Highlights on previous decisions **
##  Industrial RS485 Communication

### Decision

Use RS485 (Modbus RTU) communication for industrial sensor networking.

### Motivation

- Long cable distances
- High EMI immunity
- Industrial compatibility
- Easy future expansion

### Alternatives Considered

- I²C
- UART
- CAN

### Justification

RS485 is widely adopted for distributed industrial instrumentation and provides reliable communication in electrically noisy environments.

---

## Environmental Compensation

### Decision

Combine NIR measurements with:

- MLX90614 surface temperature
- Industrial SHT45 ambient temperature & humidity

### Motivation

Compensate moisture estimation for changing environmental conditions.

### Justification

Environmental compensation improves repeatability and reduces seasonal measurement drift.

---

## Physics-Based Moisture Correction

### Decision

Introduce an optional software correction model based on moisture diffusion (Fick's Second Law).

### Motivation

Surface moisture may differ from internal moisture.

### Implementation

The correction uses precomputed lookup tables generated in MATLAB rather than solving the diffusion equation in real time.

### Benefit

Improves moisture estimation while requiring no additional hardware.

---
** Recent Decisions(with attempt serial no.) **
##  Universal Optical Module


### Decision

Separate the sensing system into:

- Universal Optical Module
- Application-Specific Optical Cartridge

### Motivation

Enable a single hardware platform to support multiple industries.

### Benefit

Only the cartridge changes while the enclosure, electronics and communication remain unchanged.

---

## Decision 007 — Replaceable Optical Cartridge

**Status:** Far yet accepted , not sure about implementation

### Decision

Develop slide-in optical cartridges containing:

- NIR LED(s)
- Matching photodiode
- Calibration data
- Optical alignment features

### Motivation

- Fast field replacement
- Easy maintenance
- Product scalability

### Benefit

Different cartridges can be manufactured for different industrial applications without redesigning the complete system.

---

## Decision 008 — Wavelength-Based Product Family

**Status:** Accepted

### Decision

Different cartridges shall differ primarily in optical wavelength configuration.

### Example

| Cartridge | Application |
|------------|------------|
| 1450 nm | Biomass Moisture |
| Dual Wavelength | Grain |
| Custom Optical Set | Future Applications |

### Benefit

Transforms the project from a single sensor into a universal industrial sensing platform.

---

## Decision 009 — Modular MATLAB Digital Twin

**Status:** Accepted

### Decision

Develop the MATLAB simulation using independent modules rather than a single script.

### Planned Modules

- Universal Module
- Cartridge
- Authentication
- Dashboard
- Optical Beam
- Cartridge Replacement

### Benefit

Improves maintainability while accurately representing the modular hardware architecture.

---

## Decision 010 — Industrial Maintainability

**Status:** Accepted

### Decision

Design the hardware for rapid field servicing.

### Planned Features

- Slide-in cartridge
- Blind-mate connector
- Dust protection
- Optical window
- Locking mechanism

### Benefit

Minimizes downtime during maintenance while improving long-term system reliability.

---

# Future Decisions

The following topics remain under evaluation.

- Secure cartridge authentication
- Predictive maintenance
- EEPROM-based calibration storage
- Cartridge lifecycle monitoring
- Self-diagnostics
- Optical self-calibration
- Industrial dashboard integration
