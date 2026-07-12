#include <iostream>

// practice 1
// Write a simple C++ function named 
// isEven that takes an integer and returns a boolean.
bool isEven(int a)
{
    // A standalone unit (function) ready to be tested
    //int add(int a, int b) {
    //return a + b;

    if(a % 2 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

// practice 2
// Write the basic structure of a Google Test using the TEST macro.
TEST(StringTests, LengthIsCorrect)
{
    // Code to test Length here
}

// practice 3
// Separate multiple behaviors into highly focused, individual tests.
// Refactor this single test into two separate tests
// Behavior 1: Verify the name
TEST(PlayerTests, NameIsStoredWhenConstructed) {
    Player p{"Mario", 100}; // Setup is isolated here
    
    // (In a real test, you would use EXPECT_EQ here)
}

// Behavior 2: Verify the score
TEST(PlayerTests, ScoreIsStoredWhenConstructed) {
    Player p{"Mario", 100}; // Setup must be repeated because tests are isolated!
    
    // (In a real test, you would use EXPECT_EQ here)
}
// practice 4

/*
Assertion: ASSERT_*
If the checks fail, the test aborts immediately

Expectation: EXPECT_*
If the check fails, the test is marked as fail
but continues to run the rest of the code
*/

TEST(ArrayTests, ElementAccess) {
    int* arr = new int[3]{10, 20, 30};
    
    // 1. Verify arr is not nullptr. If it is null, we CANNOT continue!
    // ASSERT_EQ? 
    ______(true, arr != nullptr);

    // 2. Verify the first element is 10.
    // EXPECT_EQ ?
    ______(10, arr[0]);

    // 3. Verify the second element is 20.
    // EXPECT_EQ
    ______(20, arr[1]);

    delete[] arr;
}
