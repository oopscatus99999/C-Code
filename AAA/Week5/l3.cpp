#include <iostream>
// Linked List Data Structure

// Concept 1: Nodes and Linked Lists
// create a struct to hold a single node
struct node
{
    // DataType value;
    int value;
    node *next;
};
struct node2
{
    int val;
    node2 *next;
};
    // Concept 2: Iterating Through a Linked List
    // add all number in linked list
int sumList(const node2 *head)
{
    int total = 0;

    //1st: create temp pointer
    const node2 *curr = head;

    // iterate until current hit nullptr
    // Works through create temp pointer to point at the head
    // move the current until it hit nullptr
    /*
    Node* current = head;
    while (current != nullptr) {
        // do something with current->value
        current = current->next;
}
*/
    while(curr !=nullptr)
    {
        total = total + curr->val;  // add the total
        curr = curr->next;          // move the pointer to the next box
    }
    return total;
}
int main()
{
    // create 3 nodes
    node *first = new node;
    node *second = new node;
    node *third = new node;

    // assign 3 value to 3 node
    first->value = 10;
    second->value = 20;
    third->value = 30;

    // link them together first -> second -> third
    first->next = second;
    second->next = third;
    third->next = nullptr;

    // Create head pointer to keep track of the start of the list
    node *head = first;

    std::cout << "First: " << head->value << std::endl;
    std::cout << "2nd: " << head->next->value << std::endl;
    std::cout << "3rd: " << head->next->next->value << std::endl;

    //2nd concept
    node2 *first1 = new node2;
    node2 *second2 = new node2;
    node2 *third3 = new node2;  

    first1->val = 10;
    second2->val = 20;
    third3->val = 30;

    first1->next = second2;
    second2->next = third3;
    third3->next = nullptr;

    node2 *head2 = first1;

    std::cout << "Sum: " << sumList(head2) << std::endl;


}


