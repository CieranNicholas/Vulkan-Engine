#include "VeWindow.h"

namespace ve
{
    VeWindow::VeWindow(const int width, const int height, std::string name) : m_width{width}, m_height{height}, m_windowName{name}
    {
        initWindow();
    }

    VeWindow::~VeWindow()
    {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }

    void VeWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        m_window = glfwCreateWindow(m_width, m_height, m_windowName.c_str(), nullptr, nullptr);
    }
}
