#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Hello";
    s1 = s1 + "World";
    s1 += "World";
    string s2 = "Hello World";
    cout << s1 << endl;
    cout << s2 << endl;

    if(s1 == s2)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}