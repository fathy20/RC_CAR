# Autonomous Car Project

---

## Project Overview
This project aims to design and implement an **autonomous car** capable of navigating a predefined course **without human intervention**.
By integrating embedded systems technologies such as sensors, actuators, and real-time control algorithms, the car can perceive its environment,
make intelligent decisions, and respond accordingly.

---

## Author
**Eng. Fathy Ahmed**  
📞 WhatsApp: +201002137288

---

## Features
- **Multi-mode Operation**:
  - **Manual Mode**: Direct control via Bluetooth commands.
  - **Line Follower Mode**: Uses IR sensors to follow a line on the track.
  - **Ultrasonic Mode**: Detects obstacles and navigates automatically using ultrasonic sensors.
  - **Map Line Mode**: Advanced line navigation based on predefined path mapping.

- **Bluetooth Communication** for selecting:
  - Velocity level (1 to 4)
  - Operation mode (1 to 4)

- **Real-time Decision Making** and control for smooth autonomous driving.

---

## System Architecture
- **Microcontroller**: ATMEGA32  
- **Motor Driver**: L298N  
- **Sensors**: HC-SR04 Ultrasonic sensor, IR line sensors  
- **Communication Module**: Bluetooth  
- **Programming Language**: Embedded C  

---

## Usage Instructions
1. **Initialization**: On startup, the system initializes all hardware components and drivers.  
2. **Velocity Selection**: The user sets the velocity level via Bluetooth (input values `'1'` to `'4'`).  
3. **Mode Selection**: The user selects the operation mode via Bluetooth (input values `'1'` to `'4'`).  
4. **Execution**: The car continuously executes the selected mode algorithm:
   - `'1'`: Manual control  
   - `'2'`: Line follower  
   - `'3'`: Ultrasonic automatic navigation  
   - `'4'`: Map line navigation  

---

## File Structure
- **`main.c`** — Main program handling initialization, mode & velocity selection, and control loop.  
- **`APP_DRIVER/MultipleTasksCar_Interface.h`** — Interface header for car control tasks (required).  
- **`CAR.pdf`** — Hardware schematic and wiring diagram for the autonomous car system.

---

## Notes
- Bluetooth commands must be within the character range `'1'` to `'4'` to be valid.  
- The design emphasizes modularity, allowing easy enhancement and integration of additional control modes.  
- Proper power management and sensor calibration are essential for reliable operation.

---

## Contact & Support
For any questions or support regarding this project, please contact:  
**Eng. Fathy Ahmed** — WhatsApp: +201002137288  

---

Thank you for your interest in this Autonomous Car project!  
Drive safe, innovate, and keep exploring embedded systems! 🚗🤖

