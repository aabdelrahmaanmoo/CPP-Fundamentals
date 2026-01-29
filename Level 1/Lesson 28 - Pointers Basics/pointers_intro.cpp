// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::
using namespace std;

// ---------------- Example 1: Pointer with int ----------------

// Program execution starts here
int main()
{
    // Declare a pointer to int
    int *ptr;

    // Declare an integer variable and assign a value
    int val = 5;

    // Store the address of val inside the pointer
    ptr = &val;

    // Print the address stored in ptr
    // This is the address of val in memory
    cout << ptr << endl;

    // Print the address of val directly
    // It will be the same as ptr
    cout << &val << endl;

    // Dereference the pointer
    // This prints the value stored at the address
    cout << *ptr << endl;

    // ---------------- Example 2: Pointer with float ----------------

    // Declare a pointer to float
    float *ptr2;

    // Declare a float variable and assign a value
    float val2 = 8.765;

    // Store the address of val2 inside the pointer
    ptr2 = &val2;

    // Print the address stored in ptr2
    // This is the address of val2 in memory
    cout << ptr2 << endl;

    // Print the address of val2 directly
    // It will be the same as ptr2
    cout << &val2 << endl;

    // Dereference the pointer
    // This prints the value stored at the address
    cout << *ptr2 << endl;

    // End the program
    return 0;
}
