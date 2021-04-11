#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "mathematics.h"

#include "mat2.h"

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

	Mat2 m = { 1, 2, 3, 4 };
	Mat2 m2 = { 5, 6, 7, 8 };

	Mat2 m3 = m * 5;

	/*std::cout << m3.x1 << std::endl;
	std::cout << m3.y1 << std::endl;
	std::cout << m3.x2 << std::endl;
	std::cout << m3.y2 << std::endl;*/

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