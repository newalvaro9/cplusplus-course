#include <iostream>

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int array[] = {5, 7, 0, 9, 8, 2, 4, 10, 1, 3, 6};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    for (int number : array)
    {
        std::cout << number << " ";
    }

    return 0;
}