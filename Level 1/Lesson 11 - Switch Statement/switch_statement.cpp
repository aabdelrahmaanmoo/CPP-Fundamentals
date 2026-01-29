// Include the iostream library
// This library allows us to use input and output (cin and cout)
#include <iostream>

// Program execution starts from the main function
int main()
{
    // ---------------- Example 1: switch statement with grades ----------------

    // Declare a variable to store the grade
    char grade;

    // Ask the user to enter a grade
    std::cout << "Enter the letter grade (A-F): ";
    std::cin >> grade;

    // The switch statement checks the value of 'grade'
    switch (grade)
    {
        // If grade is 'A'
        case 'A':
            std::cout << "You are great!\n";
            break; // Exit the switch

        // If grade is 'B'
        case 'B':
            std::cout << "You are good!\n";
            break;

        // If grade is 'C'
        case 'C':
            std::cout << "You do okay!\n";
            break;

        // If grade is 'D'
        case 'D':
            std::cout << "You do not do well!\n";
            break;

        // If grade is 'F'
        case 'F':
            std::cout << "You failed!\n";
            break;

        // If none of the above cases match
        default:
            std::cout << "Please enter a valid grade (A-F).\n";
    }

    // End the program successfully
    return 0;
}
