// Used for input and output operations (cout, cin)
#include <iostream>

// Allows using cout and cin without writing std::
using namespace std;

// ---------------- Example 1: Linear Search ----------------

// Program execution starts here
int main()
{
    // Constant value represents array size
    const int SIZE = 11;

    // Declare and initialize the array
    int arr[SIZE] = {23, 5, 9, 76, 4, 28, 65, 34, 18, 62, 53};

    // Variable to store the number we want to search for
    int n;

    // Ask user to enter the element to search
    cout << "element you search" << "\n";
    cin >> n;

    // Variable to store position if element is found
    int position = -1;

    // Boolean flag to check if element exists
    bool found = false;

    // Loop through the array elements one by one
    for (int i = 0; i < SIZE; i++)
    {
        // Check if current element equals the searched number
        if (arr[i] == n)
        {
            found = true;         // Mark that element is found
            position = i;         // Store index of found element
            break;                // Stop searching after finding the element
        }
    }

    // Check search result
    if (found)
    {
        // Print success message and position
        cout << "we found your element in array and its position is: " << position << "\n";
    }
    else
    {
        // Print not found message
        cout << "not found" << "\n";
    }

    // End the program
    return 0;
}
