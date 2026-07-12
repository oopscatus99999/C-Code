#include <iostream>
#include "ll.hpp"
// Concept 3: Private Nested Types and Scope Resolution
// put node structure in private

int main()
{

    LinkedList myList;

    myList.addFront(10);
    myList.addFront(20);
    myList.addFront(30);


    myList.addBack(40);
    myList.addBack(50);
    myList.addBack(60);
    myList.printFirst();
    myList.printLast();


    
}

