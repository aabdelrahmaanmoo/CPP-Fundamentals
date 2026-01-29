// Include the iostream library
// Used for output operations (printing to the console)

#include <iostream>

// The main function is the entry point of the program
int main()
{
    // Variable declaration without initialization
    // x has a garbage value (undefined value)
    int x;
    std::cout << "x = " << x << "\n";

    // Variable initialization
    // y is initialized with a starting value
    int y = 0; // start value
    std::cout << "y = " << y << "\n";

    // Simple arithmetic operation (addition)
    int z = 5 + 9;
    std::cout << "z = " << z << "\n";

    // Operator precedence
    // Multiplication (*) is performed before addition (+)
    int a = 5 + 9 * 5;
    std::cout << "a = " << a << "\n";

    // Using parentheses to change the order of execution
    // Parentheses have higher priority
    int b = (5 + 9) * 5;
    std::cout << "b = " << b << "\n";

    // Modulus operator (%)
    // Returns the remainder after division

    std::cout << "7 % 4 = " << 7 % 4 << "\n";   // remainder is 3
    std::cout << "7 % 10 = " << 7 % 10 << "\n"; // remainder is 7
    std::cout << "7 % 7 = " << 7 % 7 << "\n";   // remainder is 0

    // Print a simple message
    std::cout << "Hello, World\n";

    // Return 0 to indicate successful program execution
    return 0;
}
