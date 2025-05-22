# Autonomous Car Project

---

## Project Overview
This project aims to design and implement an **autonomous car** capable of navigating a predefined course **without human intervention**. By integrating embedded systems technologies such as sensors, actuators, and real-time control algorithms, the car can perceive its environment, make intelligent decisions, and respond accordingly.

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

## File Structure
```
Project/
├── .settings/
├── .vs/
├── APP_DRIVER/
│   ├── MultipleTasksCar_Interface.h
│   ├── MultipleTasksCar_Prg.c
│   └── MultipleTasksCar_Private.h
├── Debug/
├── HAL_DRIVERS/
│   ├── Bluetooth_Interface.h
│   ├── BlueTooth_prg.c
│   ├── DCMOTOR_CFG.h
│   ├── DCMOTOR_Interface.h
│   ├── DCMOTOR_PRG.c
│   ├── DCMOTOR_Private.h
│   ├── IR_Interface.h
│   ├── IR_Prg.c
│   ├── Servo_Interface.h
│   ├── Servo_Prg.c
│   ├── Servo_Private.h
│   ├── UltraSonic_Interface.h
│   ├── UltraSonic_Prg.c
│   └── UltraSonic_Private.h
├── MCAL_DRIVERS/
│   ├── DIO_interface.h
│   ├── DIO_prg.c
│   ├── DIO_private.h
│   ├── INTERRUPT_Interface.h
│   ├── INTERRUPT_prg.c
│   ├── INTERRUPT_private.h
│   ├── TIMER_CFG.h
│   ├── TIMER_Interface.h
│   ├── TIMER_PRG.c
│   ├── TIMER_Private.h
│   ├── UART_Interface.h
│   ├── UART_Prg.c
│   └── UART_Private.h
├── Serivecs_driver/
│   ├── BIT_MATH.h
│   └── STD_TYPES.h
├── .cproject
├── .project
└── main.c
```

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

## Layer Architecture
1. **Application Layer (APP_DRIVER)**:
   - Contains MultipleTasksCar modules that implement the main car control algorithms

2. **Hardware Abstraction Layer (HAL_DRIVERS)**:
   - Bluetooth: Communication interface
   - DCMOTOR: Motor control drivers
   - IR: Infrared sensor interface for line detection
   - Servo: Servo motor control
   - UltraSonic: Distance measurement and obstacle detection

3. **Microcontroller Abstraction Layer (MCAL_DRIVERS)**:
   - DIO: Digital Input/Output control
   - INTERRUPT: Interrupt handling
   - TIMER: Timer configuration and control
   - UART: Serial communication protocol

4. **Services Layer (Serivecs_driver)**:
   - BIT_MATH: Bit manipulation macros
   - STD_TYPES: Standard data types definitions

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
