// Used for input and output operations (cin, cout)
#include <iostream>

// Allows using cin and cout without writing std::
using namespace std;

// ---------------- Example 1: Students Marks Using 2D Array ----------------

// Program execution starts here
int main()
{
    // Variable to store number of students (rows)
    int r;

    // Variable to store number of subjects (columns)
    int c;

    // Ask user to enter number of students
    cout << "Enter number of students:\n";
    cin >> r;

    // Ask user to enter number of subjects
    cout << "Enter number of subjects:\n";
    cin >> c;

    // Declare a 2D array to store marks
    // Rows represent students, columns represent subjects
    int marks[r][c];

    // ---------------- Input Marks ----------------

    // Loop through each student
    for (int i = 0; i < r; i++)
    {
        // Loop through each subject
        for (int j = 0; j < c; j++)
        {
            // Ask user to enter mark for each subject
            cout << "Enter student " << i + 1 << " subject " << j + 1 << " degree: ";
            cin >> marks[i][j];
        }
    }

    // ---------------- Print Marks and Average ----------------

    // Loop through each student
    for (int i = 0; i < r; i++)
    {
        // Variable to store sum of marks for one student
        float sum = 0;

        // Loop through subjects of current student
        for (int j = 0; j < c; j++)
        {
            // Print mark
            cout << marks[i][j] << " ";

            // Add mark to sum
            sum += marks[i][j];
        }

        // Print average for current student
        cout << "Avr: " << sum / c << "\n";
    }

    // End the program
    return 0;
}
