## 👥 Team Members

- Roopa Sri N — GitHub: @Roopasri0803
- Mridula — GitHub: @mridu200620-code

- # SENTINEL-360

Smart wearable safety system for real-time hazard detection and emergency alerts.

## Problem Statement

People with visual impairments and individuals working in hazardous environments may face difficulties detecting obstacles and potential hazards around them in real time.

## Solution

SENTINEL-360 is a smart wearable safety system that detects obstacles in multiple directions using ultrasonic sensors. The system provides immediate alerts through a buzzer to improve user awareness and safety.

## Features

- 3-direction obstacle detection
- Front obstacle detection
- Left obstacle detection
- Right obstacle detection
- Real-time buzzer alerts
- Arduino Uno based system

## Components Used

- Arduino Uno
- 3 × HC-SR04 Ultrasonic Sensors
- Buzzer
- Jumper Wires
- Power supply

## Working

The ultrasonic sensors continuously measure the distance of nearby obstacles. When an obstacle is detected within the predefined alert distance, the Arduino activates the buzzer to warn the user.

## Circuit Diagram

![Circuit Diagram](circuit-diagram.png)

## Project Structure

- `README.md` – Project documentation
- `SENTINEL-360.ino` – Arduino source code
- `circuit-diagram.png` – Circuit connections

## Future Improvements

- Bluetooth emergency alerts
- GPS location tracking
- Mobile application integration
- Vibration alerts
