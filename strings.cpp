#include <iostream>

// More of string class: https://cplusplus.com/reference/string/string/
int main()
{
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    if (name.empty())
    {
        std::cout << "You didn't enter your full name";
        return 1;
    }
    else
    {
        if (name.length() > 18)
        {
            std::cout << "Your full name must not exceed 18 characters";
            return 1;
        }
        std::cout << "Hello " << name << std::endl;

        int pos = name.find(' ');
        name.insert(pos + 1, ".");
        name.erase(pos, 1);

        name.append("@gmail.com");
        std::cout << "Your new email is " << name;
    }

    return 0;
}