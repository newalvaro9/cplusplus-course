#include <iostream>

int main()
{
    double temperature;
    char from_unit;
    char to_unit;

    std::cout << "F = Fahrenheit\nC = Celsius\nK = Kelvin\nFrom which unit would you like to convert? ";
    std::cin >> from_unit;

    if (from_unit != 'C' || 'c' || 'F' || 'f' || 'K' || 'k')
    {
        std::cout << "Invalid temperature unit!";
        return 1;
    }

    std::cout << "F = Fahrenheit\nC = Celsius\nK = Kelvin\nTo which unit would you like to convert? ";
    std::cin >> to_unit;

    if (to_unit != 'C' || 'c' || 'F' || 'f' || 'K' || 'k')
    {
        std::cout << "Invalid temperature unit!";
        return 1;
    }

    if (from_unit == 'C' || from_unit == 'c')
    {
        if (to_unit == 'F' || to_unit == 'f')
        {
            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temperature;

            double result = temperature * 9 / 5 + 32;
            std::cout << temperature << "°C is " << result << "°F";
        }
        else if (to_unit == 'K' || to_unit == 'k')
        {
            std::cout << "Enter the temperature in Celsius: ";
            std::cin >> temperature;

            double result = temperature + 273.15;
            std::cout << temperature << "°C is " << result << "K";
        }
    }
    else if (from_unit == 'F' || from_unit == 'f')
    {
        if (to_unit == 'C' || to_unit == 'c')
        {
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temperature;

            double result = (temperature - 32) * 5 / 9;
            std::cout << temperature << "°F is " << result << "°C";
        }
        else if (to_unit == 'K' || to_unit == 'k')
        {
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temperature;

            double result = (temperature - 32) * 5 / 9 + 273.15;
            std::cout << temperature << "°F is " << result << "K";
        }
    }
    else if (from_unit == 'K' || from_unit == 'k')
    {
        if (to_unit == 'C' || to_unit == 'c')
        {
            std::cout << "Enter the temperature in Kelvin: ";
            std::cin >> temperature;

            double result = temperature - 273.15;
            std::cout << temperature << "K is " << result << "°C";
        }
        else if (to_unit == 'F' || to_unit == 'f')
        {
            std::cout << "Enter the temperature in Kelvin: ";
            std::cin >> temperature;

            double result = (temperature - 273.15) * 9 / 5 + 32;
            std::cout << temperature << "K is " << result << "°F";
        }
    }

    return 0;
}