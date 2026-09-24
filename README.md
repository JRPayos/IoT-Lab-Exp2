# IoT-Lab-Exp2
Internet of Things Laboratory Experiment 2
## Implementation Part B
Done in simulated Arduino Uno R3 via TinkerCad.
### Connections
LDR pin = A0, 
LED pin = D9,
Power sources = 5v & GND
## Implementation Part C
Done in actual ESP32 Dev Module Board.

## Implementation Part D
## Implementation Part E
## Implementation Part F

### Connections
LDR pin = GPI0 34,
LED pin = GPIO 4,
Power Source = 3v3 and GND
### Debugging
the default THRESHOLD value is = 1600, but on the actual implementation and testing in laboratory environment, it only reads around 100-240 raw value. Hence, the THRESHOLD value is changed to 100, as below 100 raw value would mean dimmed/dark environment, that would turn on the LED. <br><br>
**KiCad was used for Schematic Diagram** inside the [IoT_Lab1](https://github.com/JRPayos/IoT-Lab-Exp1/tree/main/IoT_Lab1) folder
