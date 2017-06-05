
#include "LCDScreen.h"
#include "Arduino.h"
#include "LiquidCrystal.h"

LCDScreen::LCDScreen(int pinRS, int pinE, int pin4, int pin5, int pin6, int pin7) {
	_pinRS 	= pinRS;
	_pinE 	= pinE;
	_pin4	= pin4;
	_pin5	= pin6;
	_pin6	= pin6;
	_pin7	= pin7;
	init();
}

LCDScreen::~LCDScreen() {

}

void LCDScreen::init() {
	// Set Pin Modes
	pinMode(_pinRS, OUTPUT);
	pinMode(_pinE, OUTPUT);
	pinMode(_pin4, OUTPUT);
	pinMode(_pin5, OUTPUT);
	pinMode(_pin6, OUTPUT);
	pinMode(_pin7, OUTPUT);

	// Set Output Pins To Low
	digitalWrite(_pinRS, LOW);
	digitalWrite(_pinE, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, LOW);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);

	// Initialise LiquidCrystal Object
	LiquidCrystal LCD_Display(_pinRS, _pinE, _pin4, _pin5, _pin6, _pin7);

	LCD_Display.begin(16,2);
	LCD_Display.print("TC V1 - Bob");
}