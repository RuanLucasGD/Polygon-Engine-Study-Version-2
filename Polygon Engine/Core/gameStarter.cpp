#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "vec3.h"

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

	Vec3 vec1 = { 2, 2, 3 };
	Vec3 vec2 = { 2, 2, 3 };
	Vec3 vec3 = vec1 / 5.0f;

	/*std::cout << vec3.x << std::endl;
	std::cout << vec3.y << std::endl;
	std::cout << vec3.z << std::endl;*/

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