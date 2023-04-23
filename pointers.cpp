#include <iostream>

int main()
{
    std::string name = "Álvaro";
    int age = 16;
    std::string favFood = "Pizza";

    // Pointers
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFavFood = nullptr;
    
    // Pointer is null
    // std::cout << "Favorite food: " << *pFavFood;  --> error

    pFavFood = &favFood;

    // pName has the memory addres
    // To acces value use * (dereference operator)
    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << "Favorite food: " << *pFavFood;
    return 0;
}