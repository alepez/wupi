/*
 * UI.cpp
 *
 *  Created on: 04/set/2012
 *      Author: pez
 */

#include "UI.h"

UI::UI(LiquidCrystal* lcd) :
		lcd_(lcd) {

}

UI::~UI() {

}

void UI::setDisplaySize(uint8_t cols, uint8_t rows) {
	lcd_->begin(cols, rows);
}
