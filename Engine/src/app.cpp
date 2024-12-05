#include "app.h"

namespace ve
{
    void app::run()
    {
        while (!m_window.shouldClose())
        {
            glfwPollEvents();
        }
    }
}