Traffic Light Controller with STM32

This project implements a traffic light control system using an STM32 microcontroller. It manages two sets of traffic lights (red, yellow, green) with adjustable timing, displayed on two dual-digit 7-segment displays, and supports manual mode switching and light duration adjustments via buttons.

## Overview

The system simulates a dual-direction traffic light with automatic cycling and manual configuration modes. It uses an STM32 MCU (likely an STM32F1 or similar, based on HAL usage) with GPIO for LEDs and 7-segment displays, a timer for scheduling, and buttons for user input. The project demonstrates finite state machine (FSM) design, timer interrupts, and GPIO control.

## Features

- **Automatic Mode**: Cycles through traffic states (Red-Green, Red-Yellow, Green-Red, Yellow-Red) with configurable durations.
- **Manual Adjustment Modes**:
  - Mode 2: Adjust red light duration.
  - Mode 3: Adjust yellow light duration.
  - Mode 4: Adjust green light duration.
- **Display**: Two 2-digit 7-segment displays show remaining time for each direction.
- **Button Controls**:
  - Button 1: Cycle through modes (1-4, loops back to 1).
  - Button 2: Increment light duration (by 1 second).
  - Button 3: Confirm adjustment and return to automatic mode.
- **Timing**: Default durations: Red (6s), Yellow (2s), Green (3s), adjustable from 1s to 99s.

## Usage

1. **Requirements**:
   - STM32 development board (e.g., STM32F103 Blue Pill).
   - STM32CubeIDE or similar for building and flashing.
   - Hardware as described above.

2. **Setup**:
   - Connect LEDs, 7-segment displays, and buttons per GPIO mappings in `main.c`.
   - Load project into STM32CubeIDE, compile, and flash to the MCU.

3. **Operation**:
   - Power on: Starts in Mode 1 (automatic cycling).
   - Press Button 1 to enter adjustment modes (2-4).
   - In Modes 2-4, use Button 2 to adjust, Button 3 to save.
   - Watch LEDs and 7-segment displays for status.
