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
	pinMode(15, INPUT);
}

void loop() {
	const int ms = millis();
	const int s = ms / 1000;
	if ((s != sec) && (s % 2 == 0)) {
		sec = s;
		canon.photoNow();
	}
	if (ms % 250 == 0) {
		int btnVInt = analogRead(15);
		float btnV = btnVInt / 1024.0f;
		ui.print(btnVInt);
	}
}

int main() {
	init();
	setup();
	for (;;) {
		loop();
	}
}
