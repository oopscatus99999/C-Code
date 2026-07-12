#ifndef LL_HPP
#define LL_HPP

class LinkedList 
{
private:
    // 1. The blueprint for our Node is safely hidden.
    struct Node {
        int value;
        Node* next;
    };

    // 2. The pointer to the start of the list.
    Node* head;

    // 3. A private helper function. 
    // Inside the header, the compiler already knows we are inside LinkedList, 
    // so we can just use "Node*" as the return type.
    Node* getLastNode(); 

public:
    // The public interface (what main.cpp is allowed to use)
    LinkedList();
    void addFront(int number);
    void addBack(int number);
    void printLast();
    void printFirst();
};

#endif