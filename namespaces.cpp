#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int usingNamespace(std::string ns)
{
    if (ns == "first")
    {
        using namespace first;
        return x;
    }
    else if (ns == "second")
    {
        using namespace second;
        return x;
    }
    return 0;
}

int main()
{

    std::cout << first::x << std::endl;  // 1
    std::cout << second::x << std::endl; // 2

    std::cout << usingNamespace("first") << std::endl; // 1
    std::cout << usingNamespace("second");             // 2

    return 0;
}