#include <iostream>

int multiply(int a, int b) 
{
    int result = a * b;
    return result;
}

void printMath() 
{
    int x = 5;
    int y = 4;
    int answer = multiply(x, y);
    std::cout << "Answer is: " << answer << std::endl;
}

int main() 
{
    printMath();
    return 0;
}
// TASK 1: Tracking the Stack Lifecycle
/*
Program start 
Push main into STACK
main calls printMath --> PUSH printMath() into Stack    (printMath --> main)
printMath calls multiply --> PUSH multiply() into Stack (multiply --> printMath --> main)
multiply finish (return the value) --> pop multiply from the Stack (printMath --> main
printMath print the answer and finish --> pop printMath from the Stack (main)
main get call, main hit return 0 --> pop main from the Stack (Stack empty)
DONE
*/
// TASK 2:
/*
Argument: a = 5, b = 4
Local Var: result
Return Ptr: Physical memory address like 0x1A2Z
Return Val: temporary memory to place result = 20
Saved Register: result
*/
// TASK 3:
/*
1) It get pop on the run-time stack
2) Since result did not get defined in int main but a local variable in multiply function
result got pop from multiply function already so cant call
*/
// TASK 4:
/*
// if register is 0, jump to memory x
// else
continue to the next line
the CPU will check in the register of the value of a whether it actually equal to 0 or not
if it is, it will jump to the conclution to return 0, meaning exit the program
*/