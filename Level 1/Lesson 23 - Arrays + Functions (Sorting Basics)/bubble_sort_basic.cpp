// Used for input and output operations (cin, cout)
#include <iostream>

// Allows using cin and cout without writing std::
using namespace std;

// ---------------- Example 1: Fill Array ----------------

// This function reads values from the user and stores them in the array
void setArray(int x[], int size)
{
    // Loop to read each element
    for (int i = 0; i < size; i++)
    {
        cin >> x[i]; // Store input value in array
    }
}

// ---------------- Example 2: Print Array ----------------

// This function prints all elements of the array
void printArray(int x[], int size)
{
    // Loop through array elements
    for (int i = 0; i < size; i++)
    {
        cout << x[i] << " "; // Print each element
    }
    cout << "\n";
}

// ---------------- Example 3: Bubble Sort ----------------

// This function sorts the array in ascending order
// Using Bubble Sort (basic sorting algorithm)
void bubbleSort(int x[], int size)
{
    // Outer loop controls number of passes
    for (int pass = 0; pass < size - 1; pass++)
    {
        // Inner loop compares adjacent elements
        for (int i = 0; i < size - 1; i++)
        {
            // If current element is greater than next element
            if (x[i] > x[i + 1])
            {
                // Swap the two elements
                int temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
    }
}

// ---------------- Example 4: Main Function ----------------

// Program execution starts here
int main()
{
    // Size of the array
    const int SIZE = 9;

    // Declare and initialize array
    int list[SIZE] = {5, 2, 7, -4, 9, 6, 3, 1, 8};

    // Sort the array using bubble sort
    bubbleSort(list, SIZE);

    // Print sorted array
    printArray(list, SIZE);

    // End the program
    return 0;
}
