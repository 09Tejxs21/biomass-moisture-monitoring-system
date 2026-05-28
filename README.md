# biomass-moisture-monitoring-system
ESP32-based contactless biomass monitoring system integrating MLX90614 IR temperature sensing and ambient humidity measurement using distributed sensor nodes mounted on an industrial inverted U-frame for real-time truck inspection carrying biomass.

---

# Project Objective
This project explores the development of a rugged environmental monitoring architecture for biomass transport environments where traditional contact-based sensing becomes unreliable due to dust, vibration, thermal gradients, and operational constraints.

The system aims to:
- Monitor thermal characteristics of biomass loads
- Measure surrounding environmental humidity
- Explore distributed industrial sensing concepts
- Develop an embedded monitoring node using ESP32 architecture

---

# System Concept
Multiple distributed sensing units are intended to be mounted across an industrial inverted U-shaped frame through which biomass-carrying trucks pass for inspection and environmental monitoring.

---

# Hardware Stack
| Component | Role |
|---|---|
| ESP32-WROOM-32E | Embedded controller |
| MLX90614 | Contactless IR temperature sensing |
| Ambient Humidity Sensor | Environmental humidity monitoring |
| RS485/Modbus | Industrial communication architecture |
| Shielded Cabling | EMI reduction and field reliability |

---

# Current Development Status
- [x] Repository initialized
- [ ] ESP32 environment setup
- [ ] I2C communication validation
- [ ] Sensor acquisition
- [ ] Breadboard prototype
- [ ] RS485 integration
- [ ] Industrial enclosure planning

---

# Engineering Focus Areas
- Contactless sensing
- Embedded systems
- Industrial communication
- Environmental instrumentation
- EMI-aware system design
- Distributed sensing architecture

---

# Repository Structure
```
firmware/   → Embedded development code
hardware/   → Wiring and hardware documentation
docs/       → Technical documentation
images/     → Prototype images and diagrams
logs/       → Engineering observations and debugging
```

---

# Acknowledgement

This project is being developed under the guidance of Prof. Dhiraj K. Mahajan, Department of Mechanical Engineering, IIT Ropar. The development and prototyping activities are being supported through access to infrastructure and technical resources made available within the IIT Ropar ecosystem.
---

# License

MIT License
