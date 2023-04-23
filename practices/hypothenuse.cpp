#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double hypothenuse;

    std::cout << "Enter leg A: ";
    std::cin >> a;

    std::cout << "Enter leg B: ";
    std::cin >> b;

    hypothenuse = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypothenuse of your triangle is " << hypothenuse;

    return 0;
}