#include <iostream>

int main()
{
    int number;

    std::cout << "Enter number of levels: ";
    std::cin >> number;

    int row = 0, column = 0, temp = number;

    for (int row = 1; row <= number; row++)
    {
        for (int column = temp; column > 0; column--)
        {
            std::cout << " ";
        }
        for (int counter = 0; counter < row; counter++)
        {
            std::cout << "#";
        }

        std::cout << std::endl;

        temp--;
    }

    return 0;
}