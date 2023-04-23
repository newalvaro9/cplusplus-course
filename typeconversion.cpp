#include <iostream>

int main()
{
    int correct = 8;
    int questions = 10;

    // double score = correct / questions * 100;
    // Wont work because of integer division: int / int = int --> int 8 / int 10 = int 0.8 --> int 0
    // We have to make sure that at least one divisor is a double int / double || double / int = double

    double score = correct / (double)questions * 100;
    std::cout << score << "%";

    return 0;
}