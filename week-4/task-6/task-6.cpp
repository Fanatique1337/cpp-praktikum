#include <iostream>
#include <cmath>

int main()
{
    double number;
    double cos_part, results[100] = {};
    double max_result;
    int seq;

    std::cout << "Enter the length of the sequence: ";
    std::cin >> number;

    for (seq = 1; seq <= number; seq++)
    {
        cos_part = cos(number + (seq / number));
        results[seq-1] = pow(seq, 2) * cos_part;
    }

    max_result = results[0];
    for (int counter = 0; counter < (sizeof(results) / sizeof(double)); counter++)
    {
        if (results[counter] > max_result)
            max_result = results[counter];
    }

    std::cout << max_result << std::endl;

    return 0;
}