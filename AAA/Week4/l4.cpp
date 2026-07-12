#include <iostream>
int main()
{

    // Undefined Behavior (UB) & The C++ Philosophy
    int array[67];
    // array[68] = {100};
    std::cout << array[68] << std::endl;
    /*
    POSSIBLE OUTCOME:
    Crash
    Random Value
    Value = 0
    Appears to work
    Behave differently each time run
    */

    // MEMCHECK Valgrind
    // Example A:
    int *arr = new int[50];
    arr[50] == 99;

    // COMMAND:
    // g++ -g file.cpp -o file
    // valgrind ./file
    // Got Conditional jump or move depends on uninitialised value(s)

    // Example B:

    int x;  // did not initialize x value
    if(x == 5)
    {
        std::cout << "X is 5" << std::endl;
    }
    // Got Conditional jump or move depends on uninitialised value(s)
    // Translation: You tried to use an if statement (a conditional jump) 
    // on a variable that has random garbage memory in it because you never initialized it!

    // Example C: Invalid free() / delete / delete[]
    int y = 5;
    int *p = &y;
    delete p;   // BUG! 'x' is on the Stack, not the Heap!
    // p is just pointing to y so you cant delete p
    // SOLUTION:
    int *p = new int(5);
    std::cout << *p << std::endl;

    delete p;

    // This work since you create a p pointer on the heap
    // So you can delete p

    // LLDB: The Interactive Debugger
    

}