// Include the iostream library
// This library allows us to use input and output (cin and cout)
#include <iostream>

// Program execution starts from the main function
int main()
{
    // ---------------- Example 1: Grading system ----------------

    // Store the student's mark
    int mark = 84;

    // Check the mark and print the grade
    if (mark >= 90)
    {
        // Runs if mark is 90 or more
        std::cout << "Grade: A\n";
    }
    else if (mark >= 80)
    {
        // Runs if mark is between 80 and 89
        std::cout << "Grade: B\n";
    }
    else if (mark >= 70)
    {
        // Runs if mark is between 70 and 79
        std::cout << "Grade: C\n";
    }
    else if (mark >= 60)
    {
        // Runs if mark is between 60 and 69
        std::cout << "Grade: D\n";
    }
    else
    {
        // Runs if all conditions above are false
        std::cout << "Grade: F\n";
    }

    // ---------------- Example 2: Even and Odd numbers ----------------

    int number = 55;

    // Check if the number is even
    if (number % 2 == 0)
    {
        std::cout << "Number is Even\n";
    }
    else
    {
        std::cout << "Number is Odd\n";
    }

    // ---------------- Example 3: Nested if statements ----------------

    // Check if the number is even or odd
    if (number % 2 == 0)
    {
        std::cout << "Even ";

        // Nested if: check another condition
        if (number > 50)
        {
            std::cout << "and greater than 50\n";
        }
        else
        {
            std::cout << "and 50 or less\n";
        }
    }
    else
    {
        std::cout << "Odd ";

        // Nested if inside else
        if (number > 50)
        {
            std::cout << "and greater than 50\n";
        }
        else
        {
            std::cout << "and 50 or less\n";
        }
    }

    // ---------------- Example 4: Truthy and Falsy values ----------------

    // Any non-zero number is considered TRUE in C++
    if (-100)
    {
        std::cout << "Non-zero values are true\n";
    }
    else
    {
        std::cout << "This will not run\n";
    }

    // Zero is considered FALSE in C++
    if (0)
    {
        std::cout << "This will not run\n";
    }
    else
    {
        std::cout << "Zero is false\n";
    }

    // ---------------- Example 5: Using variables directly in conditions ----------------

    int value = 10;

    // If value is not zero, the condition is true
    if (value)
    {
        std::cout << "Value is not zero\n";
    }
    else
    {
        std::cout << "Value is zero\n";
    }

    // ---------------- Example 6: Comparison vs assignment reminder ----------------

    int x = 5;

    // '==' compares values
    if (x == 5)
    {
        std::cout << "x is equal to 5\n";
    }

    // '=' assigns a value (not used inside if)
    x = 10;
    std::cout << "x is now " << x << "\n";

    // End the program successfully
    return 0;
}
