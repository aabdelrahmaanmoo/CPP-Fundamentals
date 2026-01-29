// Include the iostream library
// This library is used for input and output operations
#include <iostream>

// Global variable
// This variable can be accessed from anywhere in the program
int z = 7;

// Program execution starts from the main function
int main()
{
    // Local variable declared inside main
    // This x belongs only to the main function
    int x = 0;

    // New inner scope
    {
        // This x is a DIFFERENT variable
        // It only exists inside this block
        int x = 5;

        // Prints the inner x (value = 5)
        std::cout << x << "\n";

        // Prints the global variable z (value = 7)
        std::cout << z << "\n";
    }

    // Another inner scope
    {
        // This variable exists only inside this block
        int y = 2;

        // Prints y (value = 2)
        std::cout << y << "\n";

        // Prints the global variable z
        std::cout << z << "\n";
    }

    // Prints x declared in main (value = 0)
    std::cout << x << "\n";

    // Prints the global variable z (value = 7)
    std::cout << z << "\n";

    // The following line is WRONG because y does not exist here
    // std::cout << y << "\n";

    // New scope
    {
        // Local variable with the same name as the global variable
        int z = 9;

        // Prints the local z (value = 9)
        std::cout << z << "\n";

        // ::z accesses the GLOBAL variable
        // This prints the global z (value = 7)
        std::cout << ::z << "\n";
    }

    // End the program successfully
    return 0;
}
