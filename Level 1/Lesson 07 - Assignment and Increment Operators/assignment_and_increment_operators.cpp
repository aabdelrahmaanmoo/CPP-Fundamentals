// Include the iostream library
// Used for input and output operations

#include <iostream>

// The main function is the entry point of the program
int main()
{
    // -------- Assignment Operators --------
    int x = 0;

    // Multiply x by 10 using normal assignment
    std::cin >> x;
    x = x * 10;
    std::cout << "x = " << x << "\n";

    // Multiply x by 10 using compound assignment
    std::cin >> x;
    x *= 10;
    std::cout << "x = " << x << "\n";

    // Add 10 to x using compound assignment
    std::cin >> x;
    x += 10;
    std::cout << "x = " << x << "\n";

    // Increment x by 1
    std::cin >> x;
    x++;
    std::cout << "x = " << x << "\n";

    // -------- Post-increment vs Pre-increment --------

    x = 0;

    // Post-increment: print first, then increment
    std::cout << x++ << "\n"; // prints 0, then x becomes 1

    // Pre-increment: increment first, then print
    std::cout << ++x << "\n"; // x becomes 2, then prints 2

    // -------- Using increment with assignment --------
    int y = 0;

    // Post-increment assignment
    y = x++;
    std::cout << "y = " << y << "\n"; // y gets old value of x

    // Pre-increment assignment
    y = ++x;
    std::cout << "y = " << y << "\n"; // y gets new value of x

    // -------- Decrement Operators (Important) --------

    // Decrement x by 1
    x--;
    std::cout << "x after decrement = " << x << "\n";

    // Pre-decrement
    std::cout << --x << "\n";

    // Post-decrement
    std::cout << x-- << "\n";

    // Return 0 to indicate successful execution
    return 0;
}
