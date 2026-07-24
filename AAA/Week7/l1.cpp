#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
// Concept 1: Containers and std::vector
// std::vector<Type> VariableName;
std::vector<int> score = {10, 20, 30};
score.push_back(40);// add to the end

std::cout << score[0] << std::endl; // print 10 and no bound checking
std::cout << score.at(3) << std::endl;  // check bounds

// if passing a big number, use vector<int> &name to avoid copy-paste
// Use [] that out of bounds cause "undenifed behavior"
//Concept 2: Iterators
// An object acts like a pointer
// Point to specific position inside a container
// Allows you to traverse std library container
/*
std::list is a linked list
Have .begin() for 1st element and .end() that returns iterator 
Use ++ to move by 1
*/
//std::vector<Type>::iterator name = container.begin();
std::vector<std::string> words = {"Hello", "World"};
// use != when compare iterators to avoid support issues
for(std::vector<std::string>::iterator name = words.begin(); name != words.end(); name++)
{
    std::cout << *name << std::endl;
}
//Concept 3: Modern C++ Iteration (auto and Range-based for loops)
// for (const auto &item: container)

for(const auto &num : words)
{
    std::cout << num << std::endl;
}
//Concept 4: Generic Algorithms
std::vector<std::string> names = {"Bob", "Alice", "idk"};

// for_each is an algorithm that applies a specific function to every element in a range
std::for_each(
    names.begin(),
    names.end(),
    // 3rd argument, for each string in the vector, the algo pass it into this lambda, print itself
    [](const std::string &n)
    {
        std::cout << n << std::endl; 
    }
);

}


 