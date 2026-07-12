#include <iostream>
// Practice 1 -> Concept 1 (Nodes and Linked Lists)
// Goal: Manually build a linked list of characters.
// Create a struct LetterNode that holds a char and a pointer to the next node. In main(), dynamically allocate three nodes. 
// Put 'C' in the first, 'A' in the second, and 'T' in the third. Link them together to spell "CAT". Create a head pointer pointing to the 'C'.

struct LetterNode
{
    char value;
    LetterNode *next;
};
// Practice 2 -> Concept 2 (Iterating Through a Linked List)
// Goal: Traverse the list to count the nodes.
// Requirements: Assume the "CAT" linked list from Practice 1 has been built. 
// Write a while loop that iterates through the list. Instead of printing the values, count how many nodes exist in the list and print the final count.
int sumList( LetterNode *head)
{
    // count the shit 
    int count = 0;
    LetterNode *curr = head;
    while(curr != nullptr)
    {
        count++;
        curr = curr->next;
    }
    
    return count;
}
int main()
{
    // create 3 pointer
    LetterNode *first = new LetterNode;
    LetterNode *second = new LetterNode;
    LetterNode *third = new LetterNode;

    // asign them value
    first->value = 'C';
    second->value = 'A';
    third->value = 'T';

    // link them together
    first->next = second;
    second->next = third;
    third->next = nullptr;
    // create head pointer pointing at The word "C"
     LetterNode *head = first;

    std::cout << "Spell: " << first->value << second->value << third->value << std::endl;
    std::cout << "first letter: " << head->value << std::endl;


    std::cout << "Sum of node: " << sumList(head) << std::endl;
}


// Practice 3 -> Concept 3 (Private Nested Types and Scope Resolution)
// Goal: Fix the compiler error.
// Requirements: The following .cpp file has a syntax error on Line 6 because Node is a private nested type inside GameList. Fix Line 6 so that the code compiles.

// The node is a private struct that cant get access directly
// it did not know what is the Node
// you have to specify the node live inside the gamelist 
// so GameList::Node *GameList::findWinningNode()
// {return head};
// 
// Final Challenge
/*
Objective: Build a fully encapsulated Linked List class that adds numbers to the front.
Requirements:
Write a NumberList class.
Put a struct Node inside the private section. It should hold an int value and a Node* next.
Add a private member variable Node* head.
Write a public constructor that sets head to nullptr.
Write a public method void addFront(int number). This method must dynamically allocate a new Node, set its value to number, 
point its next arrow to whatever head is currently pointing to, and finally update head to point to this newly created Node.
Write a public method void printAll() const that iterates through the list and couts every value.
Constraints: Everything must be fully encapsulated (Nodes must be private).

*/