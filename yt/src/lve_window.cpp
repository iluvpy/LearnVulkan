#include "lve_window.hpp"

namespace lve {

    LveWindow::LveWindow(int width, int height, std::string name) 
        : m_width(width), m_height(height), m_windowName(name)
    {
        initWindow();
    }

    LveWindow::~LveWindow() {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }

    bool LveWindow::shouldClose() { return glfwWindowShouldClose(m_window); }

    void LveWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        m_window = glfwCreateWindow(m_width, m_height, m_windowName.c_str(), nullptr, nullptr);
    }

}