// Include the iostream library
// Used for input and output operations

#include <iostream>

// The main function is the entry point of the program
int main()
{
    // Variable declaration and initialization
    // Variables must have valid names and initial values
    int x = 10;
    int _y = 20;   // underscore is allowed
    int z = 30;    // '$' is NOT allowed in variable names

    // Integer data types
    short a = 30654;        // short stores small integer values
    int b = 100000000;     // int stores integer values

    // Floating-point data types
    float c = 12.7f;       // 'f' indicates a float literal
    double d = 100.55;     // double stores decimal numbers

    // Character data type
    char e = 'a';          // char stores a single character

    // Boolean data type
    bool f = true;         // true is printed as 1
    bool g = false;        // false is printed as 0

    // Print variable values
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "e = " << e << "\n";
    std::cout << "f = " << f << "\n";
    std::cout << "g = " << g << "\n";

    std::cout << "x = " << x << "\n";
    std::cout << "_y = " << _y << "\n";
    std::cout << "z = " << z << "\n";

    // Return 0 to indicate successful execution
    return 0;
}
