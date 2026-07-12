#include <iostream>
// problem 1

void reverse(int *first, int *last)
{
    // first = 2
    // last = 7
    // since in the memory the last addy > first addy
    while(first < last)
    {
        // create temp pointer to hold first to swap value
        int temp = *first;
        // temp = 2
        // use * since it a pointer
        *first = *last;
        // first = 7
        *last = temp;
        // last = 2;
        //move first up 1
        first++;
        // decrease last by 1
        last--;
    }
    


}
int main()
{
    // given array of 5 number
    int arr[5] = {2, 4, 1, 9, 7};
    // Desired output
    // {7,9,1,4,2}
    std::cout << "Array before: ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    reverse(arr, arr+4);

    std::cout << "Array after: ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
// problem 2
/*
int vs Const int&
Passing by Reference slower + use more memory than Pass by Value for int
Reference implement as a pointer, it takes 8 byte
int only takes 4 byte if use by pass by value
std::string vs const std::string&
Std::string will use more more memory ince it copy-paste
Pass by const std::string& avoid the copy
Make it run faster + use less memory
*/
// problem 3
/*
2 improvement of struct
optimize how we declare variable
instead of char then double then int
we can do double then int then char to save memory

Other thing we can do it intialize the variable to prevent garbage data
*/
// problem 4
/*
optimize for speed
giving out buffer for some type so that it wont compromise speed
2
4
1
8

optimize for memory usage
probably compress the other instead of giving out buffer
*/
// problem 5
/*
nah
*/