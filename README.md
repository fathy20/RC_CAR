# RC_CAR
Autonomous Car Project
Overview
This project aims to design and implement an autonomous car that can navigate a course without any human intervention. Using embedded systems such as sensors and actuators, the car processes environmental inputs and makes real-time decisions to control its movement.

The system supports multiple operation modes, including manual control and several autonomous navigation methods.

Author
Eng. Fathy Ahmed

WhatsApp: +201002137288

Features
Initialization of the car's embedded control system

Bluetooth communication for mode and velocity selection

Four operational modes:

Manual Mode — Car direction controlled manually via Bluetooth commands

Line Follower Mode — Car follows a line track using IR sensors

Ultrasonic Mode — Car automatically navigates using ultrasonic obstacle detection

Map Line Mode — Advanced line tracking possibly using predefined maps or path algorithms

How It Works
The system initializes hardware and peripherals.

Bluetooth communication prompts the user to select velocity (1 to 4).

Bluetooth communication prompts the user to select mode (1 to 4).

Based on the mode selected, the car runs the respective control algorithm continuously.

Hardware and Software Components
Microcontroller: ATMEGA32 (assumed from schematic)

Motor Driver: L298N

Sensors: Ultrasonic sensor (HC-SR04), IR line sensors

Communication: Bluetooth module for remote input

Software: Embedded C with modular functions for different driving modes

Files Provided
main.c — Main control program

APP_DRIVER/MultipleTasksCar_Interface.h (not provided here) — Interface header with key functions for control

CAR.pdf — Hardware schematic and wiring diagram

Notes
Velocity and mode inputs are characters '1' to '4' received over Bluetooth.

The main loop executes the selected mode indefinitely.

Modular design facilitates easy extension or modification of modes.
