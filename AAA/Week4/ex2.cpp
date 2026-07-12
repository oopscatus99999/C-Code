#include <iostream>
using namespace std;
int main()
{
    // Problem 1:
    /*
    void doSomething(double x = 3.5, std::string y, double z, std::string w = "Boo")
    All variable need a default argument
    int main()
    {
    doSomething(10, "Hi")
    it problematic because C++ matches arguments from left to right
    The compiler doesn't know if 10 is to ovveride x or x should use the default 3.5
    so 10 can get jump into the next double z
    }
    */
   // Problem 2: Linked List
   /*
   1) Implement linked list using reference
   You cant since a node is just an object that cant point to anything
   You also cant have an empty list
   Since reference cant re-seat a node so you cant insert a new node into the middle or delete a node 
   

   2)  Implement linked list using pointer
   You can use pointer to implement linked list
   Since pointer are just variable that hold memory address
   They can be set to nullptr
   You can also reassign it anytime
   This allows you to insert/delete/traverse node
   */
  // problem 3: Static and Dynamic
  /*
  static: on stack
  dynamic: on heap

  1) Benefits of Static Allocation (The Stack):
  Faster memory access
  It get destroy after the function end
  You dont need to worry about memory leaks

  2) Benefits of Dynamic Allocation (The Heap):
  Dynamically scale the program big/small depends on the users
  More memory management to when to use the memory location
  You can choose to delete the object when you need

  3) Which to prefer?
  I prefer using stacks since it is more managable 
  as it have the auto ability to prevent memory leaks

  
  */
 // problem 4: 
 /*
 int i = 3;
 double d = 3.5
 string s = "Boo is perfect"
 int &j = i;
 int *k = new int{5}

 1) legal: int: i + 2
 2) legal: double: i * d
 3) legal: int: i * j
 4) illegal
 5) legal: &i: int*: Address of int
 6) legal: &d: double*: address of double
 7) legal: &j: j reference to int --> &j is address of i --> int *
 8) legal: k is int* *k = 5 --> s[5] s is string AND operator[] return char& --> char
 9) illegal
 10)illegal
 11)legal: *k : k is int * --> *k deref int --> int
 12) legal: &k k is int* --> addy of ptr -> ptr to potr --> int **
 13) legal: k * 2 : k is int* --> ptr cant multiply with int but can with + int
 14) legal: deref k so 5 * 2 --> int
 
 */
// problem 5:
/*
1) You can copy the value when you do pass by value
So it wont impact your main value that you copied
This prevent accidently change the value of the value

2) You dont need to copy, save space, easier to manage
When you scale to millions of input

3) in what circumstance that you expect pass by value run faster 
and what circumstance expect pass by value version to use less memory

when the object is small with couple variables
No pointer need
Better for CPU registers

Modify a copy instead of allocate more structure to it
like void foo(book b)
{
b.pages;
}
It less memory in terms of 
no extra heap allocation
simpler lifetime



4) in what circumstance that you expect pass by referece run faster 
and what circumstance expect pass by value reference to use less memory 

When object is large
like 
struct Big
{
int data[5000000]
};
void f(Big b)
it copied the data without extra memory


*/
}