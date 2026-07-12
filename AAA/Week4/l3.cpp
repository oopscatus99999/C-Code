#include <iostream>
#include <string>
using namespace std;

// struct
struct book
{
    string title;
    int pages;
};
struct DataBox
{
    char a; // 1 byte + 3 byte invisible padding
    int b;  // 4 bytes
    char c; // 1 byte + 3 byte invisible padding
};
void printBook(const book &b4);
int main()
{
    // create a book using the long way
    book myBook;
    myBook.title = "C++";
    myBook.pages = 500;

    // create a book using faster way (Uniform Initialization List)
    book myBook2 = {"Sigma", 5000};
    book book3{"Thorn", 5123};
    cout << myBook2.title << myBook2.pages << endl;
    cout << myBook.title << myBook.pages << endl;
    cout << book3.title << book3.pages << endl;

    // pointer and arrow operator
    // create book 4 on the heap
    book *b4 = new book;

    b4->title = "String";
    b4->pages = 1234;

    cout << b4->title << b4->pages << endl;
    // pass the struct to the function
    // b4 is a pointer (book*), so use *b4 to dereference it.
    // printBook() expects a const book&, so *b4 gives it the actual book object.
   printBook(*b4); 

    // delete book4 to prevent memory leak
    delete b4;
    // Normal variable: Use p.something
    // Pointer like book *b4: Use p->something

    cout << sizeof(DataBox());
    
}
// passing struct to function
// Use pass by const ref
// so dont need to copy-paste value everytime a function get call
// & go with . and * go with ->
// If you have a pointer, use -> to access members. 
// If you have an object or a reference, use .
// *: Pointer
// &: Reference
void printBook(const book &b)
{
    // Use . instead -> since it is & not *
    cout << b.title << b.pages << endl;

}
