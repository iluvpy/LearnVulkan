#pragma once

#include "lve_window.hpp"

namespace lve {

class App {
public:
    const int WIDTH = 800;
    const int HEIGHT = 600;

    void run();

private:
    LveWindow m_window{WIDTH, HEIGHT, "LearnVulkan App"};
};

}