// Copyright 2025 Ajay Alamuri

#include <iostream>
#include <Windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Input Processing/input.hpp"
#include "Windowing/windowing.hpp"

#define SCREEN_WIDTH GetSystemMetrics(SM_CXSCREEN)
#define SCREEN_HEIGHT GetSystemMetrics(SM_CYSCREEN)

int main()
{
	// Initialize windowing system and create a window
	GLFWwindow* window = Windowing::initializeWindowingSystem(SCREEN_WIDTH, SCREEN_HEIGHT, "OpenGL Window");

	// Check if window creation and GLAD initialization were successful
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window or initialize GLAD" << std::endl;
		glfwTerminate();
		return -1;
	}

	// Main render loop
	while (!glfwWindowShouldClose(window))
	{
		// Process
		Inputs::processInput(window);

		// Render
		glClear(GL_COLOR_BUFFER_BIT);

		// Poll IO events and swap buffers
		glfwPollEvents();
		glfwSwapBuffers(window);
	}

	// Clean up and exit
	glfwTerminate();
	return 0;
}