#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Hello";
    //1st way
    s1 = s1 + " World";
    // 2nd way
    // s1 += "World";
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

    // print out Alex Hello World char by char
    for(int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << "-";
    }
    cout << endl;
    // use .at()
    string word = "sigma";
    cout << "Use array: " << word[0] << endl;
    // cout << "use array[10]: " << word[10] << endl;


    cout << "Use .at(0): " << word.at(0) << endl;
    // cout << "use .at(10): " << word.at(10) << endl;
    // the .at(10) will print out of range
    // but the array wont do anything

    // use cin
    // getline(cin, //whatever here)
    int id;
    string fullname;

    cout << "ID: ";
    cin >> id;
    cin.ignore();

    cout << "Full Name: ";
    getline(cin, fullname);

    cout << "ID: " << id << endl;
    cout << "Fullname " << fullname << endl;
}