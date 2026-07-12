#include <iostream>

int main()
{
    //Concept 1: Unit Testing (Background & Philosophy)
    /*
    Take small, isolated piece of program (single class, function)
    And write code to test it independently from the rest of the code

    Since we going to contribute to a large project
    We need to make sure our small program works

    Use Unit Testing Framework (Google Test)
    */
// Concept 2: Google Test Basics (The TEST Macro)   
/*
Google Test is a library provided by Google that automates the execution of unit test
Core of Google Test is TEST macro

We use this so that we dont have to call our test manually
TEST macro register your test
so Google Test can find and run it for you

You provide 2 names to the TEST macro
Test Case Name:
    Group related tests together
Test Name
    Specific test
TEST(TestCaseName, TestName) {
    // code for the test

TEST(MathTests, AdditionWorksWithPositiveNumbers) {
    int result = 2 + 2;
}

TEST(StringTests, LengthIsCorrect)
}
*/
//Concept 3: Testing Behaviors (Scope and Naming)
/*
Verify single behavior
    Behavior require a sequence of function calls to verify
    NEED to explicitly state what behavior it is testing

    So if there are 10 different things, we will know what pass/fail

    You set up a scenario, trigger the behavior and isolate it
    You need to write new TEST block if you want t test different behavior for the same class
    TEST(ClassNameTests, BehaviorBeingTested) { ... }

    TEST(SongTests, ContainTheArtistGivenWhenConstructed) {
        Song song{"Paul Simon", "So Beautiful or So What"};
        // ... verification goes here
    }

    TEST(SongTests, ContainTheTitleGivenWhenConstructed) {
        Song song{"Arcade Fire", "Afterlife"};
        // ... verification goes here
    }
    */
//Concept 4: Assertions and Expectations
/*
Assertion: ASSERT_*
If the checks fail, the test aborts immediately

Expectation: EXPECT_*
If the check fails, the test is marked as fail
but continues to run the rest of the code

We need this to verify their state, condition
Like: if we expect a variable = 5 but it doesnt
flag that as fail

It works by you provide an expected value AND actual value to the macro
Google Test compare them, if they dont match, it generate a error report
to see what line failed, what it expected, what it actually got

TEST(VectorTests, SizeIsZeroWhenDefaultConstructed) {
    std::vector<int> numbers;
    
    // We expect the size to be 0
    EXPECT_EQ(0, numbers.size());
}

TEST(PointerTests, DereferencingWorks) {
    int* ptr = new int(5);
    
    // If ptr is nullptr, the test aborts here to prevent a crash
    ASSERT_EQ(true, ptr != nullptr); 
    
    // Test continues only if the ASSERT passed
    EXPECT_EQ(5, *ptr);
    
    delete ptr;
}
*/
}