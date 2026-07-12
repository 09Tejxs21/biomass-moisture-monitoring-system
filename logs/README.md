## Implementation Notes

During the internship, the project architecture evolved from an initial proof-of-concept towards an industrially deployable sensing platform. As a result, several design decisions were made that influenced the prototype implementation timeline.

### Key Engineering Decisions

| Decision | Reason | Impact |
|----------|--------|--------|
| **DHT22 → Industrial SHT45 RS485 Probe** | Improved robustness, Modbus RTU compatibility, and long-distance industrial communication. | Complete RS485 validation was deferred until the industrial probe was received. |
| **MLX90614 used only for Version-1 validation** | Intended solely to demonstrate non-contact surface temperature measurement before the dedicated NIR optical subsystem. | The final industrial design does not depend on the MLX90614. |
| **MLX90614 hardware procurement** | The received sensor configuration required additional interfacing and hardware preparation compared to the intended rapid-prototyping breakout module. | Additional debugging and integration effort reduced the available time for subsystem validation. |
| **Adoption of modular optical cartridge architecture** | Enables wavelength-specific NIR cartridges for different industries while retaining a common enclosure and electronics. | Improves maintainability, scalability, and future commercial adaptability. |

### Current Project Status

✅ System architecture finalized.

✅ MATLAB Digital Twin and simulation framework completed.

✅ Firmware repository structured for staged hardware validation.

✅ Industrial component selection completed.

✅ Documentation, calibration strategy, and GitHub organization completed.

⏳ Remaining work is primarily limited to hardware validation and final subsystem integration (RS485 communication, optical sensing hardware, and complete Version-1 assembly).

### Note

The internship concluded with a validated engineering architecture and implementation roadmap rather than a fully integrated hardware prototype. The remaining tasks are confined to subsystem verification and final hardware integration, allowing future development to continue from a well-documented and reproducible foundation.
