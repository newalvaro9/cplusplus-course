#include <iostream>
#include <iomanip>

void showBalance(double balance)
{
    std::cout << "Your balance is currently " << std::fixed << std::setprecision(2) << balance << "€" << std::endl;
}

double depositMoney()
{
    double amount;
    std::cout << "Enter the amout to deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid quantity to deposit\n";
        return 0;
    }
}

double withdrawMoney(double balance)
{
    double amount;
    std::cout << "Enter the amout to withdraw: ";
    std::cin >> amount;

    if (amount > 0 && amount <= balance)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid quantity to withdraw\n";
        return 0;
    }
}

int main()
{
    double balance = 0;
    int choice;

    do
    {
        std::cout << "*****************\n";
        std::cout << "Bank of Liliputh\n";
        std::cout << "*****************\n";

        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += depositMoney();
            showBalance(balance);
            break;

        case 3:
            balance -= withdrawMoney(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting our bank!";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }

    } while (choice != 4);

    return 0;
}