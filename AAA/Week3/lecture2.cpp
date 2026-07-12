#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    //Heap Dynamic Memory
    /*
    Use Ptr to keep track of the data
    &: address
    *: pointing to the address
    int *p = &x;
    int p pointing to address x
    nullptr: ptr but have nothing

    new int: get 4 bytes --> return new int + memory address to the integer

    delete p: goes to address that store in p
    delete the p value, address from the computer

    When use new remember to delete to prevent memory leak
    Dangling ptr: delete p but p still holds memory
    use smart ptr to fix it
    not for now
    */
}