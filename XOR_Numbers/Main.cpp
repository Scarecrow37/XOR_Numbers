#include <iostream>

int main()
{
    int result = 0;

    int count;
    std::cout << "What is count of numbers?" << std::endl;
    std::cin >> count;
    for (int i = 0; i < count; ++i)
    {
        int number;
        std::cout << "Type the numbers." << std::endl;
        std::cin >> number;
        int exponents = 0;
        while (number > 0)
        {
            number /= 2;
            ++exponents;
        }
        int square = 1;
        for (int j = 0; j < exponents; ++j)
        {
            square *= 2;
        }
        std::cout << "First square number of 2 that more then you typed : " << square << std::endl << std::endl;
        result ^= square;
    }
    std::cout << "Execute XOR all numbers : " << result << std::endl;
}
