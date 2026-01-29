// Include the iostream library
// This library allows us to use input and output (cin and cout)
#include <iostream>

// Program execution starts from the main function
int main()
{
    // ---------------- Example 1: Basic while loop ----------------

    // Initialize a counter variable
    int count = 0;

    // The loop will run while the condition is true
    while (count < 5)
    {
        std::cout << "Hello World\n";
        count++; // Increase the counter
    }

    // ---------------- Example 2: while loop to sum numbers ----------------

    int c = 0;
    int n = 0;
    int num = 0;
    int sum = 0;

    // Ask the user how many numbers they want to sum
    std::cout << "Please enter how many numbers you want to sum:\n";
    std::cin >> n;

    // Check if the number is within a valid range
    if (n >= 1 && n <= 100)
    {
        // Loop runs while c is less than n
        while (c < n)
        {
            std::cout << "Enter a number:\n";
            std::cin >> num;

            sum += num; // Add number to sum
            c++;        // Increase counter
        }

        std::cout << "Sum = " << sum << "\n";
    }
    else
    {
        std::cout << "Please enter a number between 1 and 100\n";
    }

    // ---------------- Example 3: do while loop to sum numbers ----------------

    int counter = 0;
    int totalNumbers = 0;
    int value = 0;
    int totalSum = 0;

    // Ask the user how many numbers they want to sum
    std::cout << "Please enter how many numbers you want to sum:\n";
    std::cin >> totalNumbers;

    // Check if the number is within a valid range
    if (totalNumbers >= 1 && totalNumbers <= 100)
    {
        // The do block runs at least once
        do
        {
            std::cout << "Enter a number:\n";
            std::cin >> value;

            totalSum += value;
            counter++;
        } while (counter < totalNumbers);

        std::cout << "Sum = " << totalSum << "\n";
    }
    else
    {
        std::cout << "Please enter a number between 1 and 100\n";
    }

    // End the program successfully
    return 0;
}
