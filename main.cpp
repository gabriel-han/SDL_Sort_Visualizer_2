#include "Engine.hpp"
#include "Engine.cpp"
#undef main

int main()
{
    try
    {
        // If the max number is higher than the window width it draws nothing other than a black screen :^)
        // Default draw method is line
        // Default sorting algorithm is bubble sort
        SortVis::Engine visualization(
            {1024, 768},
            1024,
            SortVis::Engine::SortAlgorithm::bubbleSort,
            SortVis::Engine::DrawMethod::line);
        visualization.run();
    }
    catch (std::runtime_error &error)
    {
        std::cerr << error.what() << "\n";
    }
}
