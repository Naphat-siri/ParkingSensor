# Home Parking Assist System with Light Assistance

A simple Arduino-based project designed to help drivers safely park their vehicles in dimly lit areas. The system uses an ultrasonic sensor to detect a vehicle's proximity and triggers visual and auditory alerts to assist the driver.

## Key Features

- **Ultrasonic Distance Measurement**: Detects vehicle proximity using the HC-SR04 ultrasonic sensor.
- **Visual Alerts**: 
- **White LED**: Lights up when a vehicle is detected, providing illumination in the parking area.
- **Red LED**: Blinks when the vehicle gets too close to an obstacle.
- **Auditory Alerts**: A buzzer sounds to warn the driver of potential collisions.
- **Arduino UNO**: Acts as the main control unit for processing sensor data and managing outputs.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- White LED
- Red LED
- Buzzer
- Jumper Wires, Breadboard, and Resistors

## How It Works

1. The ultrasonic sensor measures the distance between the vehicle and an obstacle.
2. If a vehicle is detected, the White LED turns on to illuminate the parking area.
3. If the vehicle gets too close, the system triggers a Red LED to blink and a buzzer to sound, alerting the driver.

## Setup

- Assemble the circuit using an Arduino UNO, ultrasonic sensor, white and red LEDs, buzzer, and necessary connections.
- Upload the provided `sketch_may15a.ino` code to the Arduino.
- Place the system in the garage to assist in parking.

## Sample Circuit

 ![image](https://github.com/user-attachments/assets/6aee6ac6-b5b0-42db-8a68-8f8b12ebb05a)
