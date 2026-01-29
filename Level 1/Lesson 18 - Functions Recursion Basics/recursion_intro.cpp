// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::cout
using namespace std;

// ---------------- Example 1: Simple Recursion ----------------

// This function prints numbers from n to 1 using recursion
void f(int n)
{
    // Check the stopping condition (base case)
    // If n is less than 1, stop calling the function
    if (n < 1)
        return;

    // Print the current value of n
    cout << "round: " << n << "\n";

    // Call the same function again with n - 1
    // This is the recursive call
    f(n - 1);
}

// ---------------- Example 2: Factorial Using Recursion ----------------

// This function calculates factorial of a number
// Factorial of 5 = 5 * 4 * 3 * 2 * 1
int fact(int n)
{
    // Base case
    // Factorial of 0 is always 1
    if (n == 0)
        return 1;

    // Recursive case
    // Multiply n by factorial of (n - 1)
    return n * fact(n - 1);
}

// ---------------- Example 3: Main Function ----------------

// Program execution starts here
int main()
{
    // Call function f with value 5
    // This will print numbers from 5 to 1
    // f(5);

    // Call factorial function and print the result
    // Factorial of 5 is 120
    // cout << fact(5);

    // End the program
    return 0;
}
