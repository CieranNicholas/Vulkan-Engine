#include "app.h"

// std
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main()
{
    ve::app app {};

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}