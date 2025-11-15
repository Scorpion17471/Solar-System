// Copyright 2025 Ajay Alamuri

#include "input.hpp"

// Function to process input
void Inputs::processInput(GLFWwindow* window)
{
	// Process key inputs
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) Escape(window);
	if (glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS) RKey(window);
	if (glfwGetKey(window, GLFW_KEY_G) == GLFW_PRESS) GKey(window);
	if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) BKey(window);
}

// Escape key processing (Close)
void Inputs::Escape(GLFWwindow* window)
{
	glfwSetWindowShouldClose(window, true);
}

// R key processing (Red)
void Inputs::RKey(GLFWwindow* window)
{
	// Set clear color state to red
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
}

// G key processing (Green)
void Inputs::GKey(GLFWwindow* window)
{
	// Set clear color state to green
	glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
}

// B key processing	(Blue)
void Inputs::BKey(GLFWwindow* window)
{
	// Set clear color state to blue
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}