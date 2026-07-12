#include <iostream>
#include <string>
using namespace std;
void readAndConvert()
{
    int tradenum = 0;
    string stock, name;
    cin >> tradenum >> stock;

    cin.ignore();
    getline(cin, name);
    
    string conf;
    double price;
    int shares;
    cout << stock << " (" << name << ")" << endl;
    for(int i = 0; i < tradenum; i++)
    {
        cin >> conf >> price >> shares;
        cout << "[" << conf << "] " << price * shares << endl;
    }

}
int main()
{
    readAndConvert();
}

// PROBLEM 1: 
/*
Part A: initialize outside the body
then at the end of the while loop
increment
Part B: 
// do while logic translated --> while:
doStuff(); // Run it once manually
while (condition) 
    {
    doStuff(); // Then keep running it if true
    }
*/
// PROBLEM 2:
/*
C++ give us both option of s[i] and s.at(i) 
So we can utilize each of the option for each unique situation
That why C++ did not check bounds automatically
You get more performance for raw performance s[i]
You get more safety for s.at(i) 
*/
// PROBLEM 4: 
/*
Part A: #ifndef GREETER_HPP
        #define GREETER_HPP
        #endif
We use XX.hpp when we want the user to use the function from the XX.cpp
Part B: 
It will cause error since the file contain more than 1 definition
more than 1 .cpp file function so not good
*/
// PROBLEM 5:
/*
It will made 10k activation record
If the Run-Time Stack runs out of physical memory it will crash the program
to use recursion good, we need memoized recursion
*/
