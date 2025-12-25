# Smart-Library-Locker-FPGA

## Contributors
- _[Lim Jia Xiang](https://github.com/MrJs-57)_
- _[Liew Ming Heng](https://github.com/MH-Electronic)_

## Description
This repository contains the full implementation of a **Smart Library Locker System** developed for the **EEE320 Microprocessor II** course at Universiti Sains Malaysia. The project leverages the **Altera DE1-SoC FPGA (Cyclone V)** to host a custom-configured **Nios II soft-core processor**, replacing traditional mechanical locks with a secure, automated solution.

By utilizing **Qsys** for system integration, the Altera hardware is configured to support a sophisticated digital environment where the Nios II CPU manages multiple high-level peripherals. The system features **dual-method authentication**, allowing users to unlock lockers via an **RC522 RFID module** scanning student IDs or a **4X4 matrix keypad** for password-based entry. A key innovation includes a power-efficient monitoring system that leverages an **HC-SR04 ultrasonic sensor** to activate the VGA-connected monitor only when a user is detected.

## Key Technical Features
 
**Central Processor:** Custom **Nios II soft-core processor** implemented on the Altera FPGA fabric, serving as the main processing unit for control logic.

**User Interface:** A custom **VGA controller** that outputs a real-time control panel with character buffering to a monitor display.

**Wireless Connectivity:** **HC-06 Bluetooth module** utilized for transmitting real-time usage history and security notifications directly to the user’s mobile device.

**Safety & Support:** Integrated **emergency call system** using an interrupt-driven push button and buzzer to provide immediate technical assistance.

**Software Stack:** Hardware configuration and system integration were performed using **Quartus II** and **Qsys**, while application logic was developed in C using the **Nios II Software Build Tools for Eclipse**.
