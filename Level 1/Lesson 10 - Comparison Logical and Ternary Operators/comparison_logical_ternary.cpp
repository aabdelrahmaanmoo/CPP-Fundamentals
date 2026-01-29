// Include the iostream library
// This library allows us to use input and output (cin and cout)
#include <iostream>

// Program execution starts from the main function
int main()
{
    // ---------------- Example 1: Comparison operators ----------------

    // Comparison operators return true (1) or false (0)
    std::cout << (5 > 7) << "\n"; // false -> prints 0
    std::cout << (9 > 7) << "\n"; // true  -> prints 1

    // ---------------- Example 2: Ternary operator ----------------

    // Syntax:
    // condition ? value_if_true : value_if_false

    int result1 = (7 < 6) ? 11 : 10;
    std::cout << result1 << "\n"; // condition is false, so result is 10

    int result2 = (7 < 9) ? 11 : 10;
    std::cout << result2 << "\n"; // condition is true, so result is 11

    // ---------------- Example 3: Logical operators (&& and ||) ----------------

    int x;
    std::cin >> x;

    // && means AND
    // The number must be between 1 and 100
    if (x >= 1 && x <= 100)
    {
        std::cout << "Your number is correct\n";
    }
    else
    {
        std::cout << "Number is out of range\n";
    }

    // ---------------- Example 4: Nested if with multiple conditions ----------------

    int age;
    char gender;

    std::cout << "Enter your age:\n";
    std::cin >> age;

    std::cout << "Enter your gender (m or f):\n";
    std::cin >> gender;

    // Check age first
    if (age < 18)
    {
        // Age is less than 18
        if (gender == 'm')
        {
            std::cout << "You are a boy\n";
        }
        else if (gender == 'f')
        {
            std::cout << "You are a girl\n";
        }
        else
        {
            std::cout << "Unknown gender\n";
        }
    }
    else
    {
        // Age is 18 or more
        if (gender == 'm')
        {
            std::cout << "You are a man\n";
        }
        else if (gender == 'f')
        {
            std::cout << "You are a woman\n";
        }
        else
        {
            std::cout << "Unknown gender\n";
        }
    }

    // End the program successfully
    return 0;
}
