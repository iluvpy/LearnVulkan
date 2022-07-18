#include "app.hpp"

namespace lve {

    void App::run() {
        while (!m_window.shouldClose()) {
            glfwPollEvents();
        }
    }
}