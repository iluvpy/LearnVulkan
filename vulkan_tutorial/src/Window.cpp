#include "Window.hpp"


Window::Window() {

}

~Window::Window() {
    glfw
}

void Window::initWindow() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
    m_window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
    glfwSetWindowUserPointer(window, this);
    glfwSetFramebufferSizeCallback(window, framebufferResizeCallback);
}


bool Window::windowOpen() {
    return !glfwWindowShouldClose(m_window);
}


GLFWwindow *getWindowPtr() {
    return m_window;
}