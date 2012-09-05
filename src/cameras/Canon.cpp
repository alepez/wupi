/*
 * Canon.cpp
 *
 *  Created on: 04/set/2012
 *      Author: pez
 */

#include "Canon.h"

#include <Arduino.h>

Canon::Canon(int irLedPin) :
		irLedPin_(irLedPin) {
	pinMode(irLedPin, OUTPUT);
}

Canon::~Canon() {

}

void Canon::photoNow() {
	for (int i = 0; i != 16; ++i) {
		digitalWrite(irLedPin_, HIGH);
		delayMicroseconds(BURST_PULSE_DURATION);
		digitalWrite(irLedPin_, LOW);
		delayMicroseconds(BURST_PULSE_DURATION);
	}
	delayMicroseconds(PHOTO_NOW_TIME);
	for (int i = 0; i != 16; ++i) {
		digitalWrite(irLedPin_, HIGH);
		delayMicroseconds(BURST_PULSE_DURATION);
		digitalWrite(irLedPin_, LOW);
		delayMicroseconds(BURST_PULSE_DURATION);
	}
}

void Canon::photoDelayed() {
	for (int i = 0; i != 16; ++i) {
		digitalWrite(irLedPin_, HIGH);
		delayMicroseconds(BURST_PULSE_DURATION);
		digitalWrite(irLedPin_, LOW);
		delayMicroseconds(BURST_PULSE_DURATION);
	}
	delayMicroseconds(PHOTO_DELAYED_TIME);
	for (int i = 0; i != 16; ++i) {
		digitalWrite(irLedPin_, HIGH);
		delayMicroseconds(BURST_PULSE_DURATION);
		digitalWrite(irLedPin_, LOW);
		delayMicroseconds(BURST_PULSE_DURATION);
	}
}
