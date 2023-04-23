#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch (randNum)
    {
    case 1:
        std::cout << "You won a bumper sticker!\n";
        break;
    case 2:
        std::cout << "You won a t-shirt!\n";
            break;
    case 3:
        std::cout << "You won a free lunch!\n";
        break;
    case 4:
        std::cout << "You won a gift card!\n";
        break;
    case 5:
        std::cout << "You won concert tickets!\n";
        break;
    }
}