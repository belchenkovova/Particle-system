#include "core.h"

using namespace		engine;

					core::core()
{
	if (++instance_count > 1)
		throw (tools::exception("Engine, Core : Can't have more, than one instance"));

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	glfwWindowHint(GLFW_SAMPLES, 4);

	window = glfwCreateWindow(window_width, window_height, window_name.c_str(), nullptr, nullptr);
	if (window == nullptr)
		throw (tools::exception("Engine, Core : GLFW error"));
	glfwMakeContextCurrent(window);

	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
		throw (tools::exception("Engine, Core : GLEW error"));

	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
}

					core::~core()
{
	glfwTerminate();
}