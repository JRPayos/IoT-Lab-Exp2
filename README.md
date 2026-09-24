# IoT-Lab-Exp2
Internet of Things Laboratory Experiment 2
## Smart Home Output Subsystem
A Smart Home Output Subsystem, which focuses in its alert system using LEDS, Buzzer, and Lamps with 4 different states (IDLE,ACTIVE,WARNING,ALARM).
## Implementation Part B
An array of comprising of 8 LEDs to create a light indicator row.
### Connections
LED[8] = { 13, 12, 14, 27, 26, 25, 33, 32 }.

## Implementation Part C
Different 3 LED patterns are created to indicate each state.

## Implementation Part D
1st 12V Lamp included in the system, controlled by MOSFET, served as a dimmable lamp that depends on the alert state.

## Implementation Part E
2nd 12V Lamp included in the system, connected via Relay module which served as a switched lamp that depends on the alarm state. The different 4 alert tones (A_NONE,A_CONFIRM,A_WARN,A_ALARM) are also included to represent each alert state

## Implementation Part F
Combining all functions and actuators to present each individual alert state

**KiCad was used for Schematic Diagram** inside the [IoT_Lab2](https://github.com/JRPayos/IoT-Lab-Exp1/tree/main/IoT_Lab2) folder
