
#ifndef LCDSCREEN_H_
#define LCDSCREEN_H_

#include "LiquidCrystal.h"

class LCDScreen {
private:
	LiquidCrystal LCD_Display;
	int _pinRS;
	int _pinE;
	int _pin4;
	int _pin5;
	int _pin6;
	int _pin7;
	char chrBuffer[16];
	void init();

public:
	LCDScreen(int pinRS, int pinE, int pin4, int pin5, int pin6, int pin7);
	void DisplayMenu(int intMenuItem, double dblValue);
	void Update(double dblValue);

	virtual ~LCDScreen();
};

#endif /* LCDSCREEN_H_ */