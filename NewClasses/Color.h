#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

using namespace std;

class Color {
public:

	static void DefaultColor() {
		glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
	}

	static void RedColor() {
		glClearColor(0.7f, 0.1f, 0.1f, 1.0f);
	}

	static void BlueColor() {
		glClearColor(0.1f, 0.1f, 0.7f, 1.0f);
	}

	static void GreenColor() {
		glClearColor(0.1f, 0.7f, 0.1f, 1.0f);
	}

	static void CyanColor() {
		glClearColor(0.1f, 0.57f, 0.7f, 1.0f);
	}

};

