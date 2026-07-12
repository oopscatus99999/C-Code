#include <iostream>
using namespace std;
void modifyValues(int a, int& b) 
{
    a = 100;
    b = 200;
}
void doMath(long a);
void doMath(double a);
int main() 
{
    int x = 5;
    int y = 10;
    modifyValues(x, y);
    std::cout << "x is " << x << ", y is " << y << std::endl;
    return 0;
    cout << "Do Math" << doMath(6);
}
// TODO TASK 1: Exactly what will print to the screen
// and why didn't the other variable change?
// x will print out 5 instead of 100 since it is pass by value
// the x will get copied and turn into a = 100
// however, a did not get return value of a so it did not get return back to main
// so x will print 5
// y is 200 because it is pass by reference
// y get pass along the modifyValue function
// the y address will know equal to 200
// then got pass down back to main
// so therefore y is 200 

void doMath(long a)
{
    return a;
}
void doMath(double a)
{
    return a;
}
// TODO TASK 2:

/*
You wrote two functions for a math library:
void doMath(long a);
void doMath(double a);
In your main() function, you write: doMath(5);
It will pannic, it will say the function is ambiguous
And wont run
*/

// TODO TASK 3:
/*
void createProfile(std::string name = "Guest", int age, bool isAdmin = false);
int age does not have a value attach to it
so we should put mandatory parameter (age) come FIRST before other
void createProfile(std::string name = (int = age, "Guest", bool isAdmin = false);

*/