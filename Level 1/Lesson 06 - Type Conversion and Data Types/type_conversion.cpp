// Include the iostream library
// Used for input and output operations

#include <iostream>

// The main function is the entry point of the program
int main()
{
    // int + int = int
    // int + float = float

    // -------- Example 1: float input, int result --------
    float x, y;

    std::cout << "Please enter two numbers:\n";
    std::cin >> x >> y;

    // Implicit type conversion
    // The decimal part will be lost
    int z = x + y;

    std::cout << "Sum (stored as int) = " << z << "\n";

    // -------- Example 2: float input, float result --------
    float a, b;

    std::cout << "Please enter two numbers:\n";
    std::cin >> a >> b;

    float c = a + b;

    std::cout << "Sum (stored as float) = " << c << "\n";

    // -------- Example 3: Average of three numbers --------
    // Using float to avoid losing decimal values

    float n1, n2, n3;
    float sum;

    std::cout << "Please enter three numbers:\n";
    std::cin >> n1 >> n2 >> n3;

    sum = n1 + n2 + n3;

    // Divide by 3.0 to keep the result as float
    float average = sum / 3;

    std::cout << "Average = " << average << "\n";

    // Return 0 to indicate successful execution
    return 0;
}