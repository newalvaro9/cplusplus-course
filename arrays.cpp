#include <iostream>

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

int main()
{
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    double prices[4]; // Set length of the array if declaration only

    // assign values
    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    int pricesSize = sizeof(prices) / sizeof(double);
    int gradesSize = sizeof(grades) / sizeof(char);

    int positionOfGrade;
    char toSearch;

    std::cout << "Enter grade to search for: "; // Will return the index of the grade
    std::cin >> toSearch;

    for (int i = 0; i < gradesSize; i++)
    {
        if (grades[i] == toSearch)
        {
            positionOfGrade = i;
        }
    }

    std::cout << " Prices:\n";
    for (int i = 0; i < pricesSize; i++)
    {
        std::cout << prices[i] << std::endl;
    }

    std::cout << " Grades:\n";
    for (char grade : grades)
    {
        std::cout << grade << std::endl;
    }

    std::cout << "Grade " << toSearch << " is on position " << positionOfGrade << std::endl;
    std::cout << "The array \"prices\" is " << pricesSize << " elements length\n"; // gets size of the array
    std::cout << "The total price is: " << getTotal(prices, pricesSize) << "€";

    return 0;
}