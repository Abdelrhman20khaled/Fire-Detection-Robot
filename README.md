# Fire Detection Robot

This repository contains the code and design for a simple **Fire Detection Robot**, a learning project developed to demonstrate basic robotics and fire detection principles. The robot is designed to assist in competitions by showcasing how sensors and actuators can work together in a practical application.

## Project Overview

The **Fire Detection Robot** is a basic demonstration of a robot equipped with a fire sensor. The robot remains stationary in a specific position and moves systematically until it detects a fire source. Once fire is detected, the robot activates a pump to extinguish it.

### Features:
- **Fire Sensor**: Detects the presence of fire or high temperatures.
- **Robotic Movement**: The robot moves to locate the fire source.
- **Fire Extinguishing**: A pump is triggered to remove the fire upon detection.
- **Simple Demo**: Designed as a foundational project for understanding robotics and fire detection.

## Project Goals
- To create a simple yet functional robot for fire detection and extinguishing.
- To serve as a learning project for hardware and embedded systems.
- To provide a demo suitable for competitions in the field of robotics.

## Schematic
The schematic for this project includes all necessary components for fire detection and extinguishing. It integrates a **fire sensor**, a **microcontroller** (Atmega32 and Arduino), a **robotic movement system** (DC motors and drivers), and a **pump system** for extinguishing fire. The design ensures seamless coordination between the sensors, actuators, and control logic.

<img src="Sim Images.jpg" width="1000"/>

## Current Status
- Basic functionality implemented and tested.
- Designed for demonstration purposes in robotics competitions.

## Hardware and Tools
- **Fire Sensor**: For detecting fire or heat sources.
- **Robot Platform**: A mobile robot base for movement.
- **Pump System**: Used for extinguishing fire.
- **Microcontroller**: To control the robot's functions (e.g., Arduino, ATmega32, etc.).
- **Development Tools**: IDE for coding and hardware for assembly.

## How it Works
1. The robot starts from a fixed position and systematically scans for a fire.
2. Upon detecting a fire, the sensor sends a signal to the controller.
3. The controller activates the pump system to extinguish the fire.

