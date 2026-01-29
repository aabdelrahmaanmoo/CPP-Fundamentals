// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::cout
using namespace std;

// ---------------- Example 1: Function Overloading ----------------

// This function prints one integer value
// It is called when we pass ONE integer
void print(int x)
{
    // Print the integer value
    cout << "integer: " << x << "\n";
}

// This function prints two integer values
// It is called when we pass TWO integers
void print(int x, int y)
{
    // Print the first and second integer values
    cout << "integer 1: " << x << "     integer 2: " << y << "\n";
}

// This function prints one character
// It is called when we pass a character
void print(char x)
{
    // Print the character value
    cout << "character: " << x << "\n";
}

// ---------------- Example 2: Main Function ----------------

// Program execution starts here
int main()
{
    // Call print function with a character
    // The compiler chooses print(char x)
    print('a');

    // End the program
    return 0;
}
