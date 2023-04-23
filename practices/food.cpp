#include <iostream>

// :: --> Scope resolution operator
// std::cout --> STanDard Carachter OUTput
// std::endl --> STanDard Endline
// << --> insertion operator
// >> --> extraction operator

// Data can be prefixed with 'const' to make it read-only

// int --> Whole number
// double --> Decimal number

// bool --> Boolean

// char --> Single chracter
// std::string --> Multiple characters

int main()
{
    int pizzas;
    int apples;

    pizzas = 10;
    apples = 6;

    std::cout << "I like coding!\n";
    std::cout << "I ate " << std::to_string(pizzas) << " pizzas today\n";
    std::cout << "In total I ate " << std::to_string(pizzas + apples) << " things today";

    return 0;
}