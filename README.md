# wupi: wireless universal photo interface

This is an *Arduino* based tool for controlling cameras with infrared remote.
It can be interfaced with multiple sensors and scheduled for time-lapse
photography.

Firmware is written in C++.  
This is an *Eclipse* project, but I'll add soon other ways to compile the
firmware.

Hardware is not yet defined. The CPU should be ATmega328 (the one used in
Arduino Uno), but bigger or smaller could be used. My target is to fit all
hardware in a 120x60x30 mm box (4.72x2.36x1.18 inches). 

## Features

 - Canon RC-5 infra-red remote interface

### Upcoming features

 - time lapse, from 1 second to 1 day
 - scheduled shots, crontab like
 - delayed triggers
 - Nikon remote 
 - Pentax remote 
 - Olympus remote
 - integrated sound trigger (microphone)
 - integrated light trigger
 - universal interface for additional sensors
 - laser sensor
 - temperature sensor

## Credits and references

 - [Idea from this instructable](http://www.instructables.com/id/Build-your-own-cheap-multi-function-wireless-ca/)
 - [Using enhanced LiquidCrystal library for my cheap 16x1 display](http://code.google.com/p/liquidcrystal440/)
 - [Canon RC-5 protocol explained](http://www.doc-diy.net/photo/rc-1_hacked/index.php)
 - [Eclipse configuration for Arduino](http://arduino.cc/playground/Code/Eclipse)