#include "Color.h"

using namespace std;

class BGColor {
public:
	static void setDefaultColor() {
		Color::DefaultColor();
		glClear(GL_COLOR_BUFFER_BIT);
	}

	static void setRedColor() {
		Color::RedColor();
		glClear(GL_COLOR_BUFFER_BIT);
	}

	static void setBlueColor() {
		Color::BlueColor();
		glClear(GL_COLOR_BUFFER_BIT);
	}

	static void setGreenColor() {
		Color::GreenColor();
		glClear(GL_COLOR_BUFFER_BIT);
	}

	static void setCyanColor() {
		Color::CyanColor();
		glClear(GL_COLOR_BUFFER_BIT);
	}
};