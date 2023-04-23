#include <iostream>

// Must specify return type before function name
// Parameters must have type (like typescript)
// If the parameters are read-only set them with const (it is more useful when passing by ref)
void printInfo(const std::string name, const int age)
{
    /*
        This could not be possible due to the const keyword
        name = " ";
        age = 0;
    */

    std::cout << name << '\n';
    std::cout << age;
}

int main() // Main function, must return 0 if OK or 1 if ERROR
{
    std::string name = "Álvaro";
    int age = 16;

    printInfo(name, age);
}