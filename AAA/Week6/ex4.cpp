#include <iostream>

// Problem 1:
/*
1) We declare private member variables in a header file to secure data
If we dont put some important info inside the private member
Even in main.ccp can access to those crucial information and change however they want

2) We use initializers in some scenario since in some case, we will use const
which we need intialize it before the program can run
When we use initialize, we will use & which we need an object to bound the constructor to



3)
By having the member variable be private, without access to the header file, they cant change the variable
When the function is too short and we trying to test whether the code work or not
Then we can put those member variable public
Suppose there's a member function for which const would not be a good design choice. What is the downside if we mark it const anyway?

4) If we dont push the member function const, it wont bound to the object when you create the intializers
Which instead of creating the object on the heap, you will create it on the stack
It would complicate the memory and would probably cause errors down the line in the program
*/
//Problem 2:
/*
1) As you add more node, it will require more momemory since it taking n integer
2) The time you took to access each node of the linked list will scale linearly with 
how many node there are inside the linked list. This is because you have to go through 
every node when you want to acess that specific integer
3) Because when you add the 9th integer, you have to traverse the linked list, which mean you have
to visit all of the 8th integer before reach the 9th

4) Linked List insert faster since just at the beginning
Literally take O(1) time
5) Array insert at the end faster since it dont need to traverse the list
*/
// Problem 3:
/*
class LinkedList
{
private:
    struct Node
    {
        std::string value;
        Node* next;
    };

    Node* head;
    
    public:
    void transformEach(std::function<std::string(const std::string&)> transform)
    {
    Node *p = head;
    while(p != nullptr)
        {
        
        std::cout << p->value << std::endl;
        p->value = transform(p->value);
        p = p->next;
        
        }
    
    }
};
Write the definition of a member function in the LinkedList class called transformEach, which takes one parameter, a function that transforms a string into another string, and changes the value in every node to be the result of calling the transformation function on every string. For example, if you had a LinkedList called list containing three nodes with the values "Boo", "is", and "happy", and then you did this:

list.transformEach([](const std::string& s) { return s + "!"; });
then you would expect list's nodes to contain "Boo!", "is!", and "happy!" afterward.

You'll need to decide on the right signature for the member function — that's part of what the question is asking you to consider. You cannot assume that there are any public member functions, nor can you assume that there are any private 
member functions or member variables other than what you see listed above, which are sufficient for solving the problem.
*/
// Problem 4:
/*
// Test fixture for shared setup if needed, or simple individual tests
TEST(GroceryPurchaseTest, InitialStateIsZero) {
    GroceryPurchase purchase{0.0775}; // 7.75% tax rate
    
    EXPECT_DOUBLE_EQ(purchase.getTaxRate(), 0.0775);
    EXPECT_EQ(purchase.getSubtotal(), 0);
    EXPECT_EQ(purchase.getTax(), 0);
    EXPECT_EQ(purchase.getTotal(), 0);
}

TEST(GroceryPurchaseTest, AddNonTaxableItem) {
    GroceryPurchase purchase{0.08};
    GroceryItem bread{2, 250, false}; // 2 loaves at 250 cents ($2.50)
    
    purchase.addItem(bread);
    
    EXPECT_EQ(purchase.getSubtotal(), 500);
    EXPECT_EQ(purchase.getTax(), 0);
    EXPECT_EQ(purchase.getTotal(), 500);
}

TEST(GroceryPurchaseTest, AddTaxableItem) {
    // Note: Since subtotal and tax are unsigned ints, tax calculation casts 
    // the double result down (truncating decimals).
    GroceryPurchase purchase{0.10}; // 10% tax rate
    GroceryItem paperTowels{1, 1000, true}; // 1 pack at 1000 cents ($10.00)
    
    purchase.addItem(paperTowels);
    
    EXPECT_EQ(purchase.getSubtotal(), 1000);
    EXPECT_EQ(purchase.getTax(), 100); // 1000 * 0.10 = 100
    EXPECT_EQ(purchase.getTotal(), 1100);
}

TEST(GroceryPurchaseTest, ClearResetsTotals) {
    GroceryPurchase purchase{0.05};
    GroceryItem item{1, 500, false};
    
    purchase.addItem(item);
    purchase.clear();
    
    EXPECT_EQ(purchase.getSubtotal(), 0);
    EXPECT_EQ(purchase.getTax(), 0);
    EXPECT_EQ(purchase.getTotal(), 0);
}

// Standard main function required to launch Google Test
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/

