// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::
using namespace std;

// ---------------- Example 1: Function with Pointer Parameter ----------------

// This function receives a pointer to int
// It changes the value of the original variable
int f(int *p)
{
    // Dereference the pointer and increase the value by 1
    *p = *p + 1;

    // Return the new value
    return *p;
}

// ---------------- Example 2: Main Function ----------------

// Program execution starts here
int main()
{
    // Declare an integer variable
    int x = 1;

    // Declare a pointer and store the address of x
    int *ptr = &x;

    // Call function using the address of x
    // f(&x) changes x directly
    cout << f(&x) << endl;

    // Print x to show it was changed
    cout << x << endl;

    // Call function using the pointer variable
    // ptr already holds the address of x
    cout << f(ptr) << endl;

    // Print value using pointer dereferencing
    cout << *ptr << endl;

    // End the program
    return 0;
}
