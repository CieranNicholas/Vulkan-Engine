#pragma once
#include "window/VeWindow.h"

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
    };

}
