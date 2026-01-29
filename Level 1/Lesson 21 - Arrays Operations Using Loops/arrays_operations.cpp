// Used for input and output operations (cout)
#include <iostream>

// Allows using cout without writing std::cout
using namespace std;

// ---------------- Example 1: Copy Array ----------------

// Program execution starts here
int main()
{
    // Size of the arrays
    const int SIZE1 = 4;

    // First array with initial values
    int arr1[SIZE1] = {10, 20, 30, 40};

    // Second array to store copied values
    int arr2[SIZE1];

    // Copy elements from arr1 to arr2
    for (int i = 0; i < SIZE1; i++)
    {
        arr2[i] = arr1[i];      // Copy element
        cout << arr2[i] << " "; // Print copied element
    }

    // Move to new line
    cout << "\n";

    // ---------------- Example 2: Sum of Array Elements ----------------

    // Size of the array
    const int SIZE2 = 5;

    // Array values
    int arrSum[SIZE2] = {100, 200, 200, 500, 0};

    // Variable to store sum
    int sum = 0;

    // Calculate sum of elements
    for (int i = 0; i < SIZE2; i++)
    {
        sum += arrSum[i]; // Add current element to sum
    }

    // Print sum result
    cout << sum << "\n";

    // ---------------- Example 3: Product of Array Elements ----------------

    // Array values
    int arrMul[SIZE2] = {100, 200, 200, 500, 1};

    // Variable to store multiplication result
    int product = 1;

    // Multiply all elements
    for (int i = 0; i < SIZE2; i++)
    {
        product *= arrMul[i]; // Multiply current element
    }

    // Print product result
    cout << product << "\n";

    // ---------------- Example 4: Large Product Using long long ----------------

    // Array with large values
    int arrBig[SIZE2] = {1000, 2000, 2000, 5000, 1000};

    // long long used to avoid overflow
    long long bigProduct = 1;

    // Multiply all elements
    for (int i = 0; i < SIZE2; i++)
    {
        bigProduct *= arrBig[i]; // Multiply current element
    }

    // Print large product result
    cout << bigProduct << "\n";

    // ---------------- Example 5: Average of Marks ----------------

    // Size of marks array
    const int SIZE3 = 6;

    // Student marks
    int marks[SIZE3] = {100, 79, 94, 96, 82, 87};

    // Variable to store sum of marks
    int marksSum = 0;

    // Calculate total marks
    for (int i = 0; i < SIZE3; i++)
    {
        marksSum += marks[i]; // Add mark to total
    }

    // Print average (integer division)
    cout << "Avr= " << marksSum / SIZE3 << "\n";

    // ---------------- Example 6: Find Maximum Number ----------------

    // Array of numbers
    int nums[SIZE3] = {43456734, 6789287, 47456789, 24545667, 8765432, 3457897};

    // Assume first element is the maximum
    int maxValue = nums[0];

    // Loop to find the largest value
    for (int i = 0; i < SIZE3; i++)
    {
        if (nums[i] > maxValue)
        {
            maxValue = nums[i]; // Update maximum value
        }
    }

    // Print maximum number
    cout << "max: " << maxValue << "\n";

    // End the program
    return 0;
}
