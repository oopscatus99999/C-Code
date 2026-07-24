#include <iostream>
// 1. Base Class
class Person
{
    public:
    void breathe()
    {
        std::cout << "Breathe" << std::endl;
    }
    int age = 30;
};
// Derived Class student access all public Person class
class Student : public Person
{
    public:
    void study()
    {
        std::cout << "Study" << std::endl;
    }
    double gpa = 3.8;
};
// Polymorphism
class Animal
{
    public:
    // use virtual to enable polymorphism
    virtual void speak()
    {
        std::cout << "Animal sound\n";
    }
};
class Dog : public Animal{
    public:
    //Re-declare to override function
    void speak(){
        std::cout << "Bark\n";
    }
};

// Take a reference to Base
void makeNoise(Animal &animal)
{
    animal.speak();
}
// Cat Overrride 4
class Cat : public Animal
{
    public:
    // Override the speak from animal class
    void speak() override 
    {
        std::cout << "Meow!\n";
    }
};
int main()
{
    //Concept 1: Inheritance (The "is a" relationship)
    // What is it
    // You create new class that absorb all data from existed class
    // base class
    Student student;
    student.breathe();  // Inherit breathe from Person
    student.study();    // function in Student class
    //Why we need it
    // Like Student and Teacher have some similar things
    // like age email, name
    // We can create Person base class to store those

    // Usedeclare a derived class + special syntax to state
    // base class to inherits 


// Concept 2: Object Slicing and Mixing Types
// What is it
// You accidently chopped a student-specific data

// Why we need it
// Uderstand how we slice it will help us prevent us chop data

// How does it work
// Asign by value: assign student object into person variable
// Person variable is only big enough to hold the Person part
// Student parts get sliced away and perm delete

// Assign by Pointer/Reference
// Point to original ojbect
// User Person* to point to Student
// No slicing

//Base b = derivedObject;       // SLICING HAPPENS (Bad)
//Base& bRef = derivedObject;   // SAFE (No slicing)
//Base* bPtr = &derivedObject;  // SAFE (No slicing)

Student s;
// Slicing happen
Person p = s;
// Assign by reference
Person &pRef = s;
// the gpa value still inside the memory

//Concept 3: Polymorphism and virtual Functions
// What is it
/*
Program figure which version of a function to run when the object being used
Use virtual keyword

Why do we need it
If Persn reference to Student
both class have print() function
pRef.print() will call Person version
But if the object is Student, Student will run

How does it work
Use virtual keyword will let C++ to look at the actual object
*/

Dog mydog;
makeNoise(mydog);
//Concept 4: The override Specifier
/*
What is it
ovveride keyword will tell the compiler to replace virtual function from base class

Why we need it
Prevent tiny repo not break polymorphism

How does it work
Add override to let the compiler check the base class
*/
Cat myCat;
myCat.speak();
}

