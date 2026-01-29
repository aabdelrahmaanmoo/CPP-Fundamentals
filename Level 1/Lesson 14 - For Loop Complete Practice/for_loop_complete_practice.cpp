// Include the iostream library
// Used for input and output (cin and cout)
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

    // ---------------- Example 2: for loop with external counter ----------------

    int c = 0;

    // for loop without initialization and increment in the header
    for (; c < 5; )
    {
        std::cout << "Hello World\n";
        c++;
    }

    // ---------------- Example 3: Average of subjects ----------------

    int n = 0;
    int sum = 0;
    int mark = 0;

    std::cout << "How many subjects do you study?\n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter mark:\n";
        std::cin >> mark;
        sum += mark;
    }

    // Simple average calculation (basic level)
    float average = float(sum) / n;
    std::cout << "Average = " << average << "\n";

    // ---------------- Example 4: Count even and odd numbers ----------------

    int range = 0;
    int number = 0;
    int evenCount = 0;
    int oddCount = 0;

    std::cout << "Enter number range:\n";
    std::cin >> range;

    for (int i = 1; i <= range; i++)
    {
        std::cout << "Enter a number:\n";
        std::cin >> number;

        if (number % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    std::cout << "Even numbers count = " << evenCount << "\n";
    std::cout << "Odd numbers count = " << oddCount << "\n";

    // ---------------- Example 5: Print EVEN or ODD ----------------

    int range2 = 0;
    int value = 0;

    std::cout << "Enter number range:\n";
    std::cin >> range2;

    for (int i = 1; i <= range2; i++)
    {
        std::cout << "Enter a number:\n";
        std::cin >> value;

        if (value % 2 == 0)
        {
            std::cout << "EVEN\n";
        }
        else
        {
            std::cout << "ODD\n";
        }
    }

    // ---------------- Example 6: Factorial using for loop ----------------

    int num = 1;
    int factorial = 1;

    std::cout << "Enter a number:\n";
    std::cin >> num;

    for (int i = num; i > 0; i--)
    {
        std::cout << i;

        if (i > 1)
        {
            std::cout << " * ";
        }

        factorial *= i;
    }

    std::cout << "\nFactorial = " << factorial << "\n";

    // ---------------- Example 7: Multiplication table ----------------

    int tableNumber = 0;

    std::cout << "Enter a number:\n";
    std::cin >> tableNumber;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << tableNumber << " x " << i << " = " << tableNumber * i << "\n";
    }

    // ---------------- Example 8: continue statement ----------------

    // Skip number 5
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;

        std::cout << i << "\n";
    }

    // ---------------- Example 9: break statement ----------------

    // Stop the loop when i reaches 5
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break;

        std::cout << i << "\n";
    }

    // End the program successfully
    return 0;
}
