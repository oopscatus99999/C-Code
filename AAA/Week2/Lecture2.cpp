#include <iostream>
#include <string>
#include "greeter.hpp"

using namespace std;

int main()
{
    string getUser;
    cout << "Username: ";
    getline(cin, getUser);

    printGreeting(getUser);
}

// header file .hpp
// place declaration here
// like int calcAge(int year);
// use #include "name.hpp"
// use " " for local headers
// use <> for global library
// source file .cpp
// place definition here
// EX: like int calcAge(int year)

// use Include Guards
// #ifndef SOMETHING_HPP
// #DEFINE SOMETHING_HPP



// #endif
