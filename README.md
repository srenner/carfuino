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
* VSS input to carfuino
* VSS signal may need to be processed with a VR conditioner board, such as [this](http://jbperf.com/dual_VR/v2_1.html)

## Integrations (TBD)
* If using Megasquirt CAN-BUS for VSS input, uses Megasquirt's "Simplified Dash Broadcasting" as described in [this PDF](http://www.msextra.com/doc/pdf/Megasquirt_CAN_Broadcast.pdf)
* May also output VSS to Megasquirt using CAN Receiving as described in [this PDF](http://www.msextra.com/doc/pdf/Megasquirt3_TunerStudio_MS_Lite_Reference-1.4-supplement.pdf)
* Output VSS data through other means (??) to support additional speed-related Arduino projects (ex: speed sensitive power steering assist)
