// Include the iostream library
// This library allows us to use input and output (cin and cout)
#include <iostream>

// Program execution starts from the main function
int main()
{
    // ---------------- Example 1: Simple for loop ----------------

    // This loop prints numbers from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "\n";
    }

    // ---------------- Example 2: for loop explained in a simple way ----------------

    // Declare a counter outside the loop
    int c = 0;

    // for loop without initialization and increment in the header
    for (; c < 5; )
    {
        std::cout << "Hello World\n";
        c++; // Increase the counter
    }

    // ---------------- Example 3: for loop with user input ----------------

    int n = 0;
    int sum = 0;
    int mark = 0;

    // Ask the user how many subjects they study
    std::cout << "How many subjects do you study?\n";
    std::cin >> n;

    // Loop to read marks
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter mark:\n";
        std::cin >> mark;

        // Add mark to sum
        sum += mark;
    }

    // Calculate the average
    // Convert sum to float to keep decimal values
    float average = float(sum) / n;

    std::cout << "Average = " << average << "\n";

    // End the program successfully
    return 0;
}
