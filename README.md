# meguinance

**MEG**asquirt + ard**UIN**o + perform**ANCE** = meguinance. Vehicle performance monitor for [Megasquirt](http://megasquirt.info/).

## Overview
* Provides a display of various performance metrics.
* Designed for a 1980s-1990s aesthetic.

## Hardware details
* [SparkFun AST-CAN485 Dev Board](https://www.sparkfun.com/products/14483)
* [ADXL335 3-axis accelerometer](https://www.sparkfun.com/products/9269)
* 16x2 character LCD

## Extra Arduino dependencies
* TBD

## Vehicle dependencies
* VSS input to meguinance (either from Megasquirt CAN-BUS or direct connection)

## Megasquirt details
* If using Megasquirt CAN-BUS for speed input, uses Megasquirt's "Simplified Dash Broadcasting" as described in [this PDF](http://www.msextra.com/doc/pdf/Megasquirt_CAN_Broadcast.pdf).
