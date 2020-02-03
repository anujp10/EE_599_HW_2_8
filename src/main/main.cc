#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> input = {1, 2, 3, 8, 0, -1, -98, 1002};

    int median = solution.SpecialMedian(input);

    for (unsigned int i = 0; i < input.size(); i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "median = " << median << std::endl;

    return EXIT_SUCCESS;
}