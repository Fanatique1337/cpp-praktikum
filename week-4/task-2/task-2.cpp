#include <iostream>

int main()
{
    int number;

    std::cout << "Enter number of levels: ";
    std::cin >> number;

    int row = 0, column = 0;

    for (int row = 1; row <= number; row++)
    {
        for (int column = 0; column < row-1; column++)
        {
            std::cout << " ";
        }

        std::cout << row << std::endl;
    }

    return 0;
}