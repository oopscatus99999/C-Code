#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
    // Practice 1: Create and manipulate a std::vector
    std::vector<double> num = {3.14, 2.71};
    std::cout << num.at(0) << std::endl;
    
    // Practice 2: Use basic Iterators.
    std::vector<char> letters = {'A', 'B', 'C'};
    // //std::vector<Type>::iterator name = name.begin();
    for(std::vector<char>::iterator name = letters.begin(); name != letters.end(); name++)
    {
        std::cout << *name << std::endl;
    }
    // Practice 3: Use Modern C++ Iteration.
    // Rewrite the loop from Practice 2.
    // use a range-based for loop and auto.
    for (const auto &character : letters)
    {
        std::cout << character << std::endl;
    }

    // Practce 4: Use a Generic Algorithm
    // Use std::for_each to print every element in the provided vector.
    // Pass a lambda function as the third argument to handle the printing.
    std::vector<int> ids = {101, 102, 103};

    std::for_each(
        ids.begin(), // 1st argu
        ids.end(),  // 2nd argu
        [](const int &numberpls)
        {
            std::cout << numberpls << std::endl;
        }
    );
// Final Challenge
    std::vector<int> values = {10, 20, 30, 40};
    // add 5 into each number
    std::for_each(
        values.begin(),
        values.end(),
        [](int &increment5)
        {
            increment5 += 5;
        }
    );
        for(const auto increment5 : values)
        {
            std::cout << increment5 << std::endl;
        }
}