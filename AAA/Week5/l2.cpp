#include <iostream>
#include <functional>
#include <string>
class Person{
    public: 
    void sayHello(std::string greeting)
    {
        std::cout << greeting << std::endl;
    }
};
// standard function
int square (int n)
{
    return n * n;
}
// Function object
/*
instead of writing multiple function
write a transform function to accept all math function as parameter
like int
*/
// std::function<ReturnType(ParameterType1, ParamterType2)> variableName = functionName;
// create a mathFunction that can hold any int
// also return an int
void applyMath(int number, std::function<int(int)> mathFunction)
{

    int result = mathFunction(number);
    std::cout << "Result: " << result << std::endl;
}


int main()
{
    // Storing the function in a variable no () after square
    // just grab the address of the square function
    std::function<int(int)> myMath = square;

    // passing the function variable into another function
    applyMath(6, myMath);


    // Lambda expression
// anonymouns function help you write directly inline where you need
// instead of write function name at the beginning
// just use lambda expression
/*
Purpose: write function inside main so you dont need to scroll up to declare new function
[] capture clause
() parameter
{} The body
*/
// auto variableName =[capture](parameters) {body};
    int multiplier = 3;
    // A lambda function that captures 'multiplier' with 1 parameter
    auto multFunct = [multiplier](int x)
    {
        return x * multiplier;
    };

    std::cout << multFunct(10) << std::endl;

    return 0;
    // how member function are different from other function
    // functions live inside class is member function
    // it cant be stored in a std::function because they require an object to run on
    // we have a parameter pointer to point to a person
    /*
    Purpose: know how to point to a specific user 
    */
    // std::function<ReturnType(ClassName*, ParameterTypes...)> var = &ClassName::FunctionName;

    std::function<void(Person*, std::string)> func = &Person::sayHello;

    Person p1;
    func(&p1, "Hello from the function object");
}




