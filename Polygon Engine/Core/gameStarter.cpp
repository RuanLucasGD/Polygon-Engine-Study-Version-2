#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "mathematics.h"

#include "vec4.h"

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

	/*Vec3 a = { 5, 1 };
	Vec3 b = { 2, 5 };
	Vec3 c = a + b;*/

	/*std::cout << Vec4Normalize({ 4, 5, 1, 4 }).x << std::endl;
	std::cout << Vec4Normalize({ 4, 5, 1, 4 }).y << std::endl;
	std::cout << Vec4Normalize({ 4, 5, 1, 4 }).z << std::endl;
	std::cout << Vec4Normalize({ 4, 5, 1, 4 }).w << std::endl;*/


	//std::cout << c.x << std::endl;
	//std::cout << c.y << std::endl;

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