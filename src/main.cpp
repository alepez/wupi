/*
 * main.cpp
 *
 *  Created on: 02/set/2012
 *      Author: pez
 */

#include "config.h"
#include "cameras/Canon.h"
#include "ui/UI.h"

#include <Arduino.h>

Canon canon(WUPI_CAMERA_IR);
LiquidCrystal lcd(WUPI_LCD_RS, WUPI_LCD_EN, WUPI_LCD_D4, WUPI_LCD_D5, WUPI_LCD_D6, WUPI_LCD_D7);
UI ui(&lcd);

int sec = 0;

void setup() {
	ui.setDisplaySize(8, 2);
	ui.print("camera");
}

void loop() {
	int s = millis() / 1000;
	if ((s != sec) && (s % 2 == 0)) {
		sec = s;
		canon.photoNow();
	}
}

int main() {
	init();
	setup();
	for (;;) {
		loop();
	}
}
