#include <iostream>
#include <cmath>

// More of cmath https://cplusplus.com/reference/cmath/

int main()
{
    std::cout << std::max(10, 6); // Bigger value --> 10
    std::cout << std::min(10, 6); // Smallest value --> 6
    std::cout << pow(2, 4);       // Power, arg1 = base, arg2 = exponent --> 2*2*2*2 --> 16
    std::cout << sqrt(9);         // Square root of a number --> 3
    std::cout << abs(-4);         // Absolute value of a number --> 4
    std::cout << round(2.14);     // Round double to nearest integer --> 2
    std::cout << ceil(2.14);      // Round up double --> 3
    std::cout << floor(2.14);     // Round down double --> 3

    return 0;
}