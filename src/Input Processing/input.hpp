// Copyright 2025 Ajay Alamuri

#pragma once
#ifndef INPUT_H
#define INPUT_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

static class Inputs {
public:
	// Function to process input
	static void processInput(GLFWwindow* window);
private:
	// Escape key processing (Close)
	static void Escape(GLFWwindow* window);
	// R key processing (Red)
	static void RKey(GLFWwindow* window);
	// G key processing (Green)
	static void GKey(GLFWwindow* window);
	// B key processing (Blue)
	static void BKey(GLFWwindow* window);
};

#endif INPUT_H