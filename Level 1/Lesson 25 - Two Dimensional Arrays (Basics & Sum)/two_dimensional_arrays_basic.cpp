// Used for input and output operations (cin, cout)
#include <iostream>

// Allows using cin and cout without writing std::
using namespace std;

// ---------------- Example 1: Input and Output 2D Array ----------------

// Program execution starts here
int main()
{
    // Declare a 2D array with 3 rows and 4 columns
    int a[3][4];

    // ---------------- Input Values ----------------

    // Loop through rows
    for (int i = 0; i < 3; i++)
    {
        // Loop through columns
        for (int j = 0; j < 4; j++)
        {
            // Read value for each element
            cin >> a[i][j];
        }
    }

    // ---------------- Print Values ----------------

    // Loop through rows
    for (int i = 0; i < 3; i++)
    {
        // Loop through columns
        for (int j = 0; j < 4; j++)
        {
            // Print each element
            cout << a[i][j] << " ";
        }

        // Move to next row
        cout << "\n";
    }

    // ---------------- Example 2: Sum of 2D Array ----------------

    // Declare and initialize a 2D array
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Variable to store sum of all elements
    int sum = 0;

    // Loop through rows
    for (int i = 0; i < 2; i++)
    {
        // Loop through columns
        for (int j = 0; j < 3; j++)
        {
            // Print element
            cout << b[i][j] << " ";

            // Add element to sum
            sum += b[i][j];
        }

        // Move to next row
        cout << "\n";
    }

    // Print total sum of elements
    cout << sum << "\n";

    // End the program
    return 0;
}
