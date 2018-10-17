#include <iostream>

/*
Output the n-th number in the Fibonacci sequence.
*/

int main()
{
    int number;
    int terms[100] = {0, 1};

    std::cout << "Enter the sequence number: ";
    std::cin >> number;

    for (int counter = 2; counter < number; counter++)
    {
        terms[counter] = terms[counter-1] + terms[counter-2];
    }

    std::cout << terms[number-1];

    std::cout << std::endl;

    return 0;
}