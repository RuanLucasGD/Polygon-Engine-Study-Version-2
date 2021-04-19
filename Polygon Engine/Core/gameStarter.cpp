#include "gameStarter.h"

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "mathematics.h"

#include "mat2.h"
#include "mat4.h"
#include "mat3.h"

#include <vector>


// codigo do script do vertex shader
const char* vertexShaderSource = R"(
	
	#version 330 core

	uniform mat4 model;

	layout (location = 0) in vec3 pos; 

	void main(){
		
		gl_Position  = model * vec4(pos, 1.0f);
	}
										)";

// codigo do script de fragment shader
const char* fragmentShaderSource = R"(
	
	#version 330 core

	out vec4 color;

	void main(){
		
		color = vec4(1, 0, 0, 1);
	}
										)";

float vertices[] = {
		-0.5f, -0.5f, 0.0f, // left  
		 0.5f, -0.5f, 0.0f, // right 
		 0.0f,  0.5f, 0.0f  // top   
};

int indices[] = {

	0, 1, 2
};


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

	// creating shader program

	unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
	unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

	glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);

	glCompileShader(vertexShader);
	glCompileShader(fragmentShader);

	unsigned int shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);
	glLinkProgram(shaderProgram);

	int success;

	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

	if (!success) {

		char error[512];

		glGetShaderInfoLog(vertexShader, 512, nullptr, error);
		std::cout << error << std::endl;
	}

	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);

	if (!success) {

		char error[512];

		glGetShaderInfoLog(fragmentShader, 512, nullptr, error);
		std::cout << error << std::endl;
	}

	glGetShaderiv(shaderProgram, GL_LINK_STATUS, &success);

	if (!success) {

		char error[512];

		glGetShaderInfoLog(shaderProgram, 512, nullptr, error);
		std::cout << error << std::endl;
	}

	// create triangle model

	unsigned int vbo;
	unsigned int vao;
	unsigned int ebo;

	glGenBuffers(1, &vbo);
	glGenBuffers(1, &ebo);
	glGenVertexArrays(1, &vao);

	glBindVertexArray(vao);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);

	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), 0);

	std::vector<float> model = {

		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1
	};

	glUseProgram(shaderProgram);

	int loc = glGetUniformLocation(shaderProgram, "model");
	glUniformMatrix4fv(loc, 1, GL_FALSE, Mat4Data(mat4Identity).data());

	glEnableVertexAttribArray(0);

	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.1, 0.1, 0.3, 1);
		glClear(GL_COLOR_BUFFER_BIT);


		// rendering triangle

		glUseProgram(shaderProgram);
		glBindVertexArray(vao);
		//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
		glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, 0);


		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}

void Close() {

	glfwDestroyWindow(window);
	glfwTerminate();
}