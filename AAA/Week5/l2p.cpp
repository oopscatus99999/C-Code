#include <iostream>
#include <functional>
#include <string>
class Button
{
    private:
    std::function<void()> onClickAction;
    public:
    void setonClick(std::function<void()> action)
    {
        onClickAction = action;
    } 
    // call onClickAction
    void click()
    {
        // execute onClickAction
        if(onClickAction)
        {
            onClickAction();
        }
    }
};
// practice 3 
class Robot {
public:
    void recharge(int energy) {
        std::cout << "Recharged by " << energy << std::endl;
    }
};
// processData

// std::function<ReturnType(ParameterType1, ParamterType2)> variableName = functionName;
// write additional function
int additional(int a, int b)
{
    return a + b;
}
// function with number and function object
void processData(int number, std::function<int(int,int)> AddmathFunction)
{

    int result = AddmathFunction(number, number);
    std::cout << "Result: " << result << std::endl;
}

int main()
{
    std::function<int(int, int)> AddmathFunction = additional;
    processData(2, AddmathFunction);

    // practice 2
    int bonus = 10;
    // lambda expression that captures bonus by value
    // auto variableName =[capture](parameters) {body};
    // Store the lambda in an auto variable and call it.
    auto lambdaTest = [bonus](int score)
    {
        return score + bonus;
    };

    std::cout << "Bonus: " << lambdaTest(10) << std::endl;

    // Practice 3
    //Declare a std::function variable that is capable of pointing to the recharge method. 
    //Then, call it on the myBot object.
    // std::function<ReturnType(ClassName*, ParameterTypes...)> var = &ClassName::FunctionName;
    std::function<void(Robot*, int)> func = &Robot::recharge;
    Robot myRobot;
    func(&myRobot, 50);

    // Challenge
    // In main(), create a Button. Use setOnClick to pass in a Lambda expression. 
    // The lambda should print "Button was clicked!".
    // auto lambdaButton = [probably the onclick action](string)
    // return string
    // cout << lambdaButton()
    Button myButton;
    myButton.setonClick( []() { 
        std::cout << "Button was clicked!" << std::endl; 
    });
    // Now, trigger the button
    std::cout << "Pressing the button..." << std::endl;
    myButton.click();


    
}
// practice 1
/*
Goal: Use std::function to pass a custom math rule.
Requirements: Create a function processData that takes two integers and a std::function. 
Inside processData call the function on the two integers and print the result. 
In main, write a normal function that adds two integers, and pass it into processData.
*/
//practice 2
/*
Goal: Write an inline Lambda expression.
Requirements: Create a local integer variable bonus = 10. Write a lambda expression that captures bonus by value. 
The lambda should take one integer parameter score, add the bonus to it, and return it. 
Store the lambda in an auto variable and call it.
*/
// practice 3
/*
Goal: Understand the hidden this pointer in Member Functions.
Requirements: Look at the Robot class below. 
Declare a std::function variable that is capable of pointing to the recharge method. 
Then, call it on the myBot object.
*/

// Challenge
