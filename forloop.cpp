#include <iostream>

int main()
{
    // break --> Stop loop
    // continue --> skip current pos

    for (int i = 0; i <= 20; i++)
    {
        if (i == 4) // Skip this position
        {
            continue;
        }
        std::cout << i << std::endl;
    }
}