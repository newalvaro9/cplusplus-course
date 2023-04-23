#include <iostream>

void swap(std::string &x, std::string &y) // & gets the memory address of the variable
                                          // Without it we will only copy the variable value and switch the copy instead of the original
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    return 0;
}
