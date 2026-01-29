// Used for input and output operations (cout, cin)
#include <iostream>

// Allows using cout and cin without std::
using namespace std;

// ---------------- Example 1: Array Declaration and Access ----------------

int main()
{
    // Constant value used as array size
    // Array size must be known before the program runs
    const int SIZE = 5;

    // Declare array x with size 2
    int x[2];

    // Declare array y with size SIZE (5)
    int y[SIZE];

    // Assign values to array x
    x[0] = 10;                 // First element
    x[1] = 17;                 // Second element

    // Assign values to array y
    y[0] = 12;
    y[1] = 14;
    y[2] = 16;

    // Print elements from arrays
    cout << x[0] << "\n";      // Print first element of x
    cout << y[2] << "\n";      // Print third element of y

    // ---------------- Example 2: Array Initialization ----------------

    // Declare and initialize array z with 5 values
    int z[5] = {1, 2, 3, 4, 5};

    // Print element at index 2 (third element)
    cout << z[2] << "\n";

    // Declare array a with size 5
    // Only the first element is set, the rest become 0
    int a[5] = {2};

    // Print element at index 2 (will be 0)
    cout << a[2] << "\n";

    // Print first element
    cout << a[0] << "\n";

    // Declare array b with automatic size
    int b[] = {0, 9, 12};

    // Print third element
    cout << b[2] << "\n";

    // ---------------- Example 3: Using cin with Arrays ----------------

    // Declare array with fixed size
    int arr1[50];

    // Read value into first element
    cin >> arr1[0];

    // Print the value entered
    cout << arr1[0] << "\n";

    // ---------------- Example 4: Array with User Input ----------------

    // Variable to store number of elements
    int count;

    // Ask user for number of elements
    cout << "Enter number of elements: ";
    cin >> count;

    // Declare array using the entered size
    // Educational use only for beginners
    int arr2[count];

    // Read values into the array
    for (int i = 0; i < count; i++)
    {
        cout << "num " << i + 1 << " = ";
        cin >> arr2[i];
    }

    // Print all elements of the array
    for (int i = 0; i < count; i++)
    {
        cout << arr2[i] << " - ";
    }

    // End of program
    return 0;
}
