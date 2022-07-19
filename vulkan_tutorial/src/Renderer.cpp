#include "Renderer.hpp"


void Renderer::init() {
    m_window.init();
    m_instance.init();
    m_debugMessanger.init(&m_instance);
    m_surface.init(&m_instance, &m_window);
    m_device.init(&m_instance);
    m_swapChain.init(&m_device, &m_surface, &m_window);
}

void Renderer::initVulkan() {
    createRenderPass();
    createGraphicsPipeline();
    createFramebuffers();
    createCommandPool();
    createVertexBuffer();
    createCommandBuffers();
    createSyncObjects();
    
}