#include <iostream>

// 4539148803436467 -- valid

/*
    Get second number
    7646 3430 8841 9354
    /6/6 /4/0 /8/1 /3/4

    Double the number and split if 2 digits
    12 12 8 0 16 2 6 8
    1 2 1 2 8 0 1 6 2 6 8

    Add all digits
    1 2 1 2 8 0 1 6 2 6 8
    37

*/
/*
    Get second number
    7646 3430 8841 9354
    /6/6 /4/0 /8/1 /3/4

    Double the number and split if 2 digits
    12 12 8 0 16 2 6 8
    1 2 1 2 8 0 1 6 2 6 8

    Add all digits
    1 2 1 2 8 0 1 6 2 6 8
    37

*/

int getOneDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int getAndSumEvenNumbers(std::string cardNumber)
{
    int suma = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        suma += getOneDigit((cardNumber[i] - '0') * 2);
    }

    return suma;
}

int getAndSumOddNumbers(std::string cardNumber)
{
    int suma = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        suma += cardNumber[i] - '0';
    }

    return suma;
}

int main()
{
    std::string cardNumber;

    std::cout << "Enter a card number to validate\n";
    std::cin >> cardNumber;
    int result = getAndSumEvenNumbers(cardNumber) + getAndSumOddNumbers(cardNumber);
    if (result % 10 == 0)
    {
        std::cout << "Credit card number is valid!";
    }
    else
    {
        std::cout << "Credit card number is invalid!";
    }
    return 0;
}