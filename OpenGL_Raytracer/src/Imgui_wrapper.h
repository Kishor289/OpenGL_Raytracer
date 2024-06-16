#pragma once
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <iostream>
class Imgui_wrapper
{
private:
	ImGuiIO io;
	ImVec4 view_color;

	int width;
	int height;
	std::string title;

	static void glfw_error_callback(int error, const char* description);
	static void ShowDockSpace();

public:
	GLFWwindow* window;

	Imgui_wrapper();

	void setup(int width, int height, const std::string& title, bool& error);
	virtual void update();
	void Render();
	void Destruct();

};

