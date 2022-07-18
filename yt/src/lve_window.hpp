#pragma once

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <string>

namespace lve {

class LveWindow {
public:
    LveWindow(int width, int height, std::string name);
    LveWindow(const LveWindow&) = delete;
    LveWindow &operator=(const LveWindow&) = delete;
    bool shouldClose();
    ~LveWindow(); 
private:
    GLFWwindow *m_window;
    const int m_width;    
    const int m_height;    
    std::string m_windowName;
     
    void initWindow();

};

}