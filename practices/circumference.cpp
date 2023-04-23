#include <iostream>

double circumference(double radius)
{
    const double pi = 3.14159; // read-only data
    return 2 * pi * radius;
}

int main()
{
    double radius;
    std::cout << "What's the radius of your circle? ";
    std::cin >> radius;

    std::cout << "The circumference of the circle is: " << circumference(radius);
    return 0;
}
