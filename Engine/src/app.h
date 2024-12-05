#pragma once
#include "window/VeWindow.h"
#include "graphics/VePipeline.h"

namespace ve
{
    class app
    {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();
    private:
        VeWindow m_window{WIDTH, HEIGHT, "Vulkan Engine"};
        VePipeline m_pipeline{"src/shaders/simple_shader.vert.spv", "src/shaders/simple_shader.frag.spv"};
    };

}
