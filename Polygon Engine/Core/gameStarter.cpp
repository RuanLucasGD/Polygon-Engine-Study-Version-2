#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "mathematics.h"

#include "mat3.h"

void Create(const char* name, int width, int height) {

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(width, height, name, nullptr, nullptr);

	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

void Loop() {

	Mat3 m = {

		5, 8, -3,
		4, 1, 4,
		7, 5, 1
	};

	Mat3 m2 = {

		3, 40, 3,
		2, 20, 5,
		10, -10, 3
	};

	Mat3 m3 = m * 5;

	/*std::cout << m3.x1 << "   " << m3.y1 << "   " << m3.z1 << std::endl;
	std::cout << m3.x2 << "   " << m3.y2 << "   " << m3.z2 << std::endl;
	std::cout << m3.x3 << "   " << m3.y3 << "   " << m3.z3 << std::endl;*/

	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.3, 0.3, 0.8, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}

void Close() {

	glfwDestroyWindow(window);
	glfwTerminate();
}