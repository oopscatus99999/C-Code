#include <iostream>
#include "ll.hpp"

// constructor, start with empty list
LinkedList::LinkedList()
{
    head = nullptr;
}

// add a number to the front
void LinkedList::addFront(int number)
{
    Node *newnode = new Node;
    newnode->value = number;
    newnode->next = head;
    head = newnode;
    std::cout << "Value " << head->value << std::endl;
}


// add number backward
void LinkedList::addBack(int number)
{
    Node *newnode = new Node;
    newnode->value = number;
    newnode->next = nullptr;

    Node *curr = head;
    while(curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = newnode;
    std::cout << "Value " << newnode->value << std::endl;
}
// Append Node inside LinkedList before implement printLast function
// Since inside the hpp function the node function was made private not public globally
LinkedList::Node *LinkedList::getLastNode()
{
    if(head == nullptr)
    {
        // head right now is empty
        return nullptr;
    }
    Node *current = head;
    while(current->next !=nullptr)
    {
        current = current->next;
    }

    return current;
}

void LinkedList::printLast()
{
    Node *last = getLastNode();

    if(last != nullptr)
    {
        std::cout << "Last number: " << last->value << std::endl;
    }
    else
    {
        std::cout << "List is empty" << std::endl;
    }
}
void LinkedList::printFirst()
{
    Node *first = head;

    if(first != nullptr)
    {
        std::cout << first->value << " ";
        first = first->next;
    }
    std::cout << std::endl;

}