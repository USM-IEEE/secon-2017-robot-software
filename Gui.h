#ifndef GUI_H
#define GUI_H

#include "Robot.h"
#include "libraries/RGBShield/Adafruit_RGBLCDShield.h"
#include "libraries/RGBShield/utility/Adafruit_MCP23017.h"

class Gui {
	Adafruit_RGBLCDShield lcd;

	char current[2][17] = {"End My Suffering", "Existing Is Pain"};
	char display[2][17] = {"End My Suffering", "Existing Is Pain"};

	public:
		void begin();
		void update();
		void test(int col, int row, char val);
		void showNumber(float input);
};

extern Gui gui;

#endif
