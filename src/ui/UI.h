/*
 * UI.h
 *
 *  Created on: 04/set/2012
 *      Author: pez
 */

#ifndef UI_H_
#define UI_H_

#include <LiquidCrystal440/LiquidCrystal440.h>

class UI {
public:
	UI(LiquidCrystal* lcd);
	virtual ~UI();
	void setDisplaySize(uint8_t cols, uint8_t rows);
	template<class T> void print(T s) {
		lcd_->clear();
		lcd_->setCursor(0, 0);
		lcd_->print(s);
	}
private:
	LiquidCrystal* const lcd_;
};

#endif /* UI_H_ */
