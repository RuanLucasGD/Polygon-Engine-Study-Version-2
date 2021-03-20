#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

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