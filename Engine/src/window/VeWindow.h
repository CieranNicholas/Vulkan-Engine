#pragma once

#define GLFW_INCLUDE_VULKAN
#include <string>
#include <GLFW/glfw3.h>

namespace ve
{
    class VeWindow
    {
    public:
        VeWindow(int width, int height, std::string name);
        ~VeWindow();

        VeWindow(const VeWindow&) = delete;
        VeWindow& operator=(const VeWindow&) = delete;

        bool shouldClose() const { return glfwWindowShouldClose(m_window); }
    private:
        void initWindow();

        const int m_width = 800;
        const int m_height = 600;

        std::string m_windowName;
        GLFWwindow* m_window;
    };
}
