#pragma once

#include <vector>

namespace RenderConfig {
    
    #ifdef NDEBUG
    static const bool enableValidationLayers = false;
    #else
    static const bool enableValidationLayers = true;
    #endif


    const std::vector<const char*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
    };

    const std::vector<const char*> deviceExtensions = {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME
    };

}