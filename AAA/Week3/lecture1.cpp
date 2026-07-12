#include <iostream>
#include <iomanip>
using namespace std;
void foo(int x);
void fool(int &y);
double number(double x);
int numberss(int x);
int square(int square)
{
    return square * square;
}
int square(double square)
{
    return square * square;
}
double Vector(double x, double y = 0.0)
{
    return x * y;
}
int main()
{
    cout << "Pass by value" << endl;
    int num = 100;
    foo(num);
    cout << "foo value " << num << endl;
    cout << "foo memory add: " << &num << endl;


    cout << "Pass by reference" << endl;
    fool(num);
    cout << "foo value " << num << endl;
    cout << "foo memory addy: " << &num << endl;


    // Type Conversion
    cout << "Type Conversion" << endl;
    // Pass int  into double
    int four = 4;
    double result = number(four);
    cout << fixed << setprecision(1);
    cout << "Will print out 4.0: "  << result << endl;

    
    double four9 = 4.9;
    int res = numberss(four9);
    cout << "Will print out 4 and not 4.9: " << res << endl;




    // Function Overloading
    cout << "Function Overloading" << endl;
    cout << "Square double " << square(6.7) << endl;
    cout << "Square int: " << square(6) << endl;


    // Default Argument
    cout << "Default Argument" << endl;
    cout << "Vector: " << Vector(5.0, 6.0) << endl;

}
// pass by value
// has to copy 1 to 1 of the variable
void foo(int x)
{
    x = 69;
    cout << "foo value: " << x << endl;
    cout << "foo memory addy: " << &x << endl;
}
// pass by reference
// no copy but just use temp ptr to 1st value
void fool(int &y)
{
    cout << "foo value: " << y << endl;
    cout << "foo memory addy: " << &y << endl;
}
double number(double x)
{
    return x;
}
int numberss(int x)
{
    return x;
}
