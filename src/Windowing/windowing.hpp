// Copyright 2025 Ajay Alamuri

#pragma once
#ifndef WINDOWING_H
#define WINDOWING_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

static class Windowing {
public:
	// Function to initialize the windowing system
	static GLFWwindow* initializeWindowingSystem(int width, int height, std::string title);
private:
	// Window resize callback
	static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
};

#endif WINDOWING_H