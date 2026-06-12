# Smart-Car-Parking-System-Using-Arduino
Developed an automated smart parking system using Arduino Uno, IR sensors, servo motor, and LCD display. The system detects vehicle entry and exit, controls the parking gate automatically, and displays parking slot availability in real time.

## Project Overview

The Smart Car Parking System is an Arduino-based automation project designed to manage vehicle parking efficiently. The system uses IR sensors to detect vehicle entry and exit, a servo motor to control the parking gate, and an LCD display to show available parking slots in real time.

This project helps reduce manual parking management and demonstrates the application of Embedded Systems and IoT concepts in smart infrastructure.

## Features

-Automatic vehicle detection
- Automatic gate opening and closing
- Real-time parking slot monitoring
- LCD display for parking status
- Low-cost and easy-to-implement design
- Suitable for smart parking applications

## Components Used

- Arduino Uno
- IR Sensor × 2
- Servo Motor (SG90)
- 16×2 LCD Display with I2C Module
- Breadboard
- Jumper Wires
- Power Supply

## Working Principle

1. The entry IR sensor detects an incoming vehicle.
2. The servo motor opens the parking gate automatically.
3. After the vehicle enters, the gate closes.
4. The available parking slot count is updated.
5. When a vehicle exits, the exit sensor detects it.
6. The parking count is updated again and displayed on the LCD.

##  Circuit Connections

| Component | Arduino Pin |
|------------|------------|
| IR Sensor 1 | D2 |
| IR Sensor 2 | D3 |
| Servo Motor | D4 |
| LCD SDA | A4 |
| LCD SCL | A5 |
| VCC | 5V |
| GND | GND |

## 💻 Technologies Used

- Arduino IDE
- Embedded C/C++
- Sensor Interfacing
- Servo Motor Control
- LCD Communication (I2C)

## Future Improvements

- IoT-based mobile monitoring
- Cloud data storage
- RFID-based vehicle authentication
- Mobile app integration
- Automatic parking fee calculation

## Applications

- Shopping Malls
- Colleges & Universities
- Office Buildings
- Smart Cities
- Residential Complexes
 AI/ML Enthusiast
