#include <iostream>

int main()
{

    std::string name = "Álvaro";
    int age = 16;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
}