#include <iostream>
#include <string>
using namespace std;
// Practice 1:
int countZ(const std::string& text)
{
    int count = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'Z')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string text = "ZZebra Zoo ZZZ apple Zebra";

    std::cout << "Number of Z: " << countZ(text) << std::endl;

    return 0;

// Practice 2:
// constant pointer to an integer
int* const ptrA;
// pointer to an integer constant
const int * ptrB;
// constantpointer to an integer constant
const int *const ptrC;
// Practice 3:
const string greeting = "Hello";
string &ref = greeting; 
ref = "Goodbye";
//2nd line since string greeting will always be Hello and can't change to Goodbye
// ref will validate this 
// SOLUTION: use const string &ref = greeting;

}


