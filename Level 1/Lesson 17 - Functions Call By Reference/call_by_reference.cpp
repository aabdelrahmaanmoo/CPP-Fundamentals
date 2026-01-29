// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::cout
using namespace std;

// ---------------- Example 1: Swap Function ----------------

// This function swaps two numbers using call by reference
// Call by reference means the original variables will be changed
void swap(int &x, int &y)
{
    // Temporary variable to store the value of x
    int temp = x;

    // Copy the value of y into x
    x = y;

    // Copy the old value of x (stored in z) into y
    y = temp;
}

// ---------------- Example 2: Increase Function ----------------

// This function increases two numbers by 1
// The changes will affect the original variables
void fun(int &x, int &y)
{
    // Increase x by 1
    x++;

    // Increase y by 1
    y++;
}

// ---------------- Example 3: Main Function ----------------

// The program starts running from here
int main()
{
    // Declare two integer variables and give them values
    int x, y;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;

    // Print the value of x before calling any function
    cout << "x= " << x << "\n";

    // Print the value of y before calling any function
    cout << "y= " << y << "\n";

    // Call swap function to exchange the values of x and y
    swap(x, y);

    // Print the value of x after swapping
    cout << "x= " << x << "\n";

    // Print the value of y after swapping
    cout << "y= " << y << "\n";

    // Call fun function to increase both values
    fun(x, y);

    // Print the value of x after increasing
    cout << "x= " << x << "\n";

    // Print the value of y after increasing
    cout << "y= " << y << "\n";

    // End the program
    return 0;
}