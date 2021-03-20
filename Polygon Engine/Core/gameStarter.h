#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

extern "C" {

	GLFWwindow* window;

	__declspec(dllexport) void Create(const char* name, int width, int height);
	__declspec(dllexport) void Loop();
	__declspec(dllexport) void Close();
}
