#include <iostream>
using namespace std;
void processInput() 
{
    int* data = new int;
    *data = 42;
    // Processing happens here...
}
int main()
{
    // TASK 1: Pointer Syntax Translation
    int score = 50;
    cout << "Score: " << score << endl;
    int* pScore = &score;
    cout << "pScore: " << score << endl;
    int** pMaster = &pScore;
    cout << "pMaster: " << score << endl;
    // score still 50 since **pMaster changed after this statement
    **pMaster = 100;
    // we use ** instead of * since pScore is already a ptr
    // so we use ** to change the pScore to 100
    // Then it affecting the change of score
    // change value of score = 100
    cout << "pMaster: " << score << endl;
    // score now is 100 since **pMaster = 100

    // Task 2: Diagnosing the Memory Leak
    // Question: Explain mechanically what happens to the 
    // computer's memory the longer this while(true) loop runs. 
    // How do you fix it?
    while (true) {
        processInput();
    }
    return 0;
    /*
    The longer the loop runs the more computer memory consume
    since you creating new int every time the processInput function get call
    To fix this, create a false condition in the while loop to exit 
    when a certain condition met to prevent processInput create more new int
    And delete each operator right after before the function ends
    */

    // Task 3: 
    int* ptr1 = new int;
    *ptr1 = 99;

    int* ptr2 = ptr1;
    // pointer ptr2 now have the same value as ptr1
    // int *ptr2 = &ptr1
    // pointer ptr2 pointing at address of ptr1

    delete ptr1;

    std::cout << *ptr2 << std::endl;
    // It illegal to print *ptr2 since it did not following the ptr1
    /*
    We did int *ptr2 = ptr1 NOT int *ptr2 = &ptr1
    So the ptr1 got deleted, *ptr2 is still pointing to ptr1 
    BUT ptr1 got deleted, it not dangling ptr
    so it illegal printing
    */
}