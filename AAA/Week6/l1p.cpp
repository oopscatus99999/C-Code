// Practice 1: Identifying the Need for The Big Three
// Class A
class Student {
private:
    std::string name;
    int age;
    double gpa;
};

// Class B
class Roster {
private:
    std::string* studentNames; // Dynamically-allocated array
    int numberOfStudents;
};

/*
Class B need the Big 3 since it dealing with pointer
class Roster {
public:
    // 1. Destructor (Starts with a tilde ~)
    ~Roster();

    // 2. Copy Constructor (Takes a const reference to an object of the same type)
    Roster(const Roster& studentNames);

    // 3. Assignment Operator (Returns a reference to itself, takes a const reference)
    Roster& operator=(const Roster& StudentNames);
*/
// Practice 2: Copy Constructor vs. Assignment Operator
int main() {
    ArrayList list1;                 // Default constructor
    
    ArrayList list2 = list1;         // Line 1: Copy Constructor to list1
    
    ArrayList list3(list1);          // Line 2: Copy Constructor
    
    ArrayList list4;                 // Default constructor
    list4 = list1;                   // Line 3: Assignment Operator to list1
                                        // Due to list4 already get created
    
    return 0;
}
// Practice 3: Writing a Destructor
class Buffer {
private:
    char* data;
public:
    Buffer() {
        data = new char[100];
    }
    // Write your destructor here:
    ~Buffer()
    {
        delete[] data;
    }
    

};

// Final Challenge
class MyString {
private:
    // 1. Declare member variables here
    char *text;
    int length;
public:
    // Constructor
    MyString(const char* initialText);

    // 2. Declare the Big Three signatures here
    ~MyString();

    // 2. Copy Constructor (Takes a const reference to an object of the same type)
    MyString(const MyString& text);

    // 3. Assignment Operator (Returns a reference to itself, takes a const reference)
    MyString& operator=(const MyString& text);

};