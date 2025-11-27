#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

// settings
extern const unsigned int SCR_WIDTH;
extern const unsigned int SCR_HEIGHT;
extern const char* vertexShaderSource;
extern const char* fragmentShaderSource;

// function prototypes
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

void Practice1();
void Practice2();
void Practice3();