#include <iostream>

int main()
{
    int number;

    std::cout << "Enter number of levels: ";
    std::cin >> number;

    int row = 0, column = 0, temp = number;
    int rcount = 1;

    for (int row = 1; row <= number; row++)
    {
        for (int column = 1; column <= temp; column++)
        {
            std::cout << " ";
        }
        temp--;

        for (int counter = 1; counter <= rcount; counter++)
        {
            std::cout << "#";
        }
        rcount += 2;

        std::cout << std::endl;

    }

    return 0;
}