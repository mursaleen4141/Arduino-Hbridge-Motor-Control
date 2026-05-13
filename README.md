## H-Bridge DC Motor Control using Arduino
An Arduino-based DC motor control system using the L298N H-Bridge motor driver. This project demonstrates bidirectional motor control and PWM-based speed regulation with visual LED indicators.

## Project Overview
This project was developed to control the speed and direction of a DC motor using:
Arduino Uno
•L298N H-Bridge Motor Driver
•PWM (Pulse Width Modulation)
•Push button inputs
•LED status indicators
The system allows:
•Forward motor rotation
•Reverse motor rotation
•Speed adjustment using PWM signals
•Real-time motor state indication through LEDs

## Objectives
Design and implement an H-Bridge motor control system
Control DC motor speed using PWM
Control motor direction using digital logic
Analyze motor
performance at different duty cycles

## Components Used
Arduino Uno R3
L298N Motor Driver Module
DC Motor
9V Battery
Push Buttons (2)
LEDs (2)
10kΩ Resistors
220Ω Resistors
Breadboard
Jumper Wires
Slide Switch

## Working Principle
The Arduino sends control signals to the L298N motor driver:
•IN1 HIGH & IN2 LOW → Motor rotates forward
•IN1 LOW & IN2 HIGH → Motor rotates reverse
•PWM signal on ENA pin → Controls motor speed
LED indicators show the current motor

## Circuit Connections

## Motor Driver Connections
•ENA pin of L298N connected to Arduino Pin 10 for PWM speed control
•IN1 connected to Arduino Pin 8
•IN2 connected to Arduino Pin 9
•DC motor connected to OUT1 and OUT2 terminals of L298N

## Push Button Connections
•Forward button connected to Arduino Pin 2
•Reverse button connected to Arduino Pin 3
•Both buttons use 10kΩ pull-down resistors

## LED Indicator Connections
•Forward LED connected to Arduino Pin 4 through 220Ω resistor
•Reverse LED connected to Arduino Pin 5 through 220Ω resistor

## Power Connections
•Arduino powered with 5V logic supply
•DC motor powered using external 9V battery
•Common ground shared between Arduino, L298N, and battery for stable operation

## System Operation

1. Idle State
Motor remains OFF
LEDs remain OFF
2. Forward Operation
Motor rotates clockwise
Forward LED turns ON
3. Reverse Operation
Motor rotates counterclockwise
Reverse LED turns ON
4. Speed Control
PWM adjusts the average voltage applied to the motor, controlling its speed efficiently.

## Observations
•Higher PWM duty cycle increases motor speed
•H-Bridge logic successfully controls direction
•LEDs accurately indicate motor state
•Stable grounding improves system reliability

# Arduino Features Used
•Digital Input/Output
•PWM Output
•Motor Driver Interfacing
•Logic Control

## Learning Outcomes
Through this project, we learned:
•Practical implementation of H-Bridge circuits
•PWM-based speed control techniques
•Arduino programming and hardware interfacing
•Importance of grounding and noise reduction in circuits

## Applications
•Robotics
•Automation Systems
•Conveyor Systems
•Smart Vehicles
•Industrial Motor Control

