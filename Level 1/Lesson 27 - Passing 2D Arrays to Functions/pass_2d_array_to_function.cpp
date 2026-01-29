// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::
using namespace std;

// ---------------- Example 1: Passing 2D Array to Function ----------------

// This function prints all elements of a 2D array
// The number of columns (5) MUST be fixed in function parameters
void printArray(int x[][5], int r)
{
    // Loop through rows
    for (int i = 0; i < r; i++)
    {
        // Loop through columns
        for (int j = 0; j < 5; j++)
        {
            // Print each element
            cout << x[i][j] << " ";
        }

        // Move to next row
        cout << "\n";
    }
}

// ---------------- Example 2: Main Function ----------------

// Program execution starts here
int main()
{
    // Declare and initialize a 2D array
    // 3 rows (students) and 5 columns (subjects)
    int arr[3][5] =
    {
        {65, 43, 97, 23, 67},
        {35, 89, 45, 76, 64},
        {42, 76, 98, 56, 45}
    };

    // Call function and pass the 2D array
    // We also pass number of rows
    printArray(arr, 3);

    // End the program
    return 0;
}
