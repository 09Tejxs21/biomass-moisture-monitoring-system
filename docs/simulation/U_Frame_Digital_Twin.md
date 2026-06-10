# U-Frame Digital Twin Simulation

## Objective

The objective of this MATLAB simulation is to create a digital representation of the proposed contactless biomass monitoring architecture.

The simulation helps evaluate:

- Sensor placement strategy
- Measurement coverage regions
- Mechanical integration constraints
- Multi-node sensing workflow

---

## Simulation Environment

Software:

- MATLAB

Modelled Components:

- Industrial inverted U-frame structure
- Biomass carrying vehicle pathway
- Distributed sensor nodes
- Biomass surface profile

---

## Initial Sensor Placement Strategy

The first proposed architecture uses three sensing nodes:

| Sensor Node | Location | Measurement Purpose |
|---|---|---|
| Top Node | Upper U-frame section | Measures exposed upper biomass surface |
| Left Node | Left vertical frame section | Captures side region characteristics |
| Right Node | Right vertical frame section | Captures opposite side characteristics |

---

## Design Reasoning

A single sensor configuration was avoided because biomass properties may vary spatially.

Single point measurement assumes:

Uniform moisture distribution across the complete load.

This assumption is weak for agricultural biomass.

A distributed sensor configuration provides multi-region observation.

---

## Three Node Architecture Assumption

The three-node configuration represents the minimum coverage approach for the three accessible measurement planes:

- Top surface
- Left side surface
- Right side surface

Further optimization will compare:

- 1 sensor configuration
- 3 sensor configuration
- 5+ sensor configuration

based on:

- Coverage percentage
- Blind zones
- System cost
- Installation complexity

---

## Current Simulation Output

![U Frame Simulation](docs/simulation/U_Frame_Model.png)

---

## Future Development

Upcoming simulation layers:

1. Sensor Field-of-View modelling
2. Coverage analysis
3. Truck movement animation
4. Sensor scanning sequence
5. Calibration model integration
