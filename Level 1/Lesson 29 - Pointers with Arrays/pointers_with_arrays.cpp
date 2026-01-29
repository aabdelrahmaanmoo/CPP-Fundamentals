// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::
using namespace std;

// ---------------- Example 1: Array Name as Pointer ----------------

// Program execution starts here
int main()
{
    // Declare and initialize an integer array
    int arr[7] = {34, 65, 78, 67, 44, 98, 23};

    // Print the address of the first element in the array
    // The array name points to the first element
    cout << arr << endl;

    // Print the address of the second element
    // arr + 1 moves to the next integer address
    cout << arr + 1 << endl;

    // Print the address of the third element
    cout << arr + 2 << endl;

    // ---------------- Example 2: Access Values Using Pointer Style ----------------

    // Print the value of the first element
    // *arr means value at the first address
    cout << *arr << endl;

    // Print the value of the second element
    cout << *(arr + 1) << endl;

    // Print the value of the third element
    cout << *(arr + 2) << endl;

    // ---------------- Example 3: Loop Using Pointer Arithmetic ----------------

    // Loop through the array using pointer arithmetic
    for (int i = 0; i < 7; i++)
    {
        // *(arr + i) accesses each element
        cout << *(arr + i) << " ";
    }

    // Move to new line
    cout << endl;

    // ---------------- Example 4: Pointer Variable with Array ----------------

    // Declare a pointer to int
    int *ptr;

    // Store address of first array element in pointer
    ptr = arr;

    // Loop using the pointer variable
    for (int i = 0; i < 7; i++)
    {
        // Access array elements using pointer
        cout << *(ptr + i) << " ";
    }

    // End the program
    return 0;
}