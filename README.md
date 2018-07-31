# carfuino

**CAR** + per**F**ormance + ard**UINO** = carfuino. Pronounced "car-fween-oh." Or however you want. I don't care. Vehicle performance monitor.

## Overview
* Provides a display of various performance metrics:
  * Base view with trip info
  * Realtime g-force
  * 0-60 acceleration time
  * 60-0 braking distance in feet
  * 0-100-0 acceleration & braking time
  * 1/4 mile time and speed
* Designed for a 1980s-1990s aesthetic

## Hardware details
* [SparkFun AST-CAN485 Dev Board](https://www.sparkfun.com/products/14483)
* [ADXL335 3-axis accelerometer](https://www.sparkfun.com/products/9269)
* 16x2 character LCD
* RGB LED to show system status
* Button to switch between modes and view records

## Extra Arduino dependencies
* TBD

## Vehicle dependencies
* Speedometer input to carfuino via CAN bus
* VSS pulse count input to carfuino via CAN bus (used to measure distance traveled)
