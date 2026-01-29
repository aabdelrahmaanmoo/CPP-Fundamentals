// Include the iostream library
// Used for input and output (cout)
#include <iostream>

using namespace std;

// Function declaration (prototype)
// This function takes two double numbers
// It returns the larger value
double larger(double, double);

// This function takes two integers
// It returns their sum
int sum(int x, int y)
{
    int result = 0;
    result = x + y;
    return result;
}

// This function takes three integers
// It returns the average as a double
double average(int n1, int n2, int n3)
{
    double result = 0;
    result = n1 + n2 + n3;
    return result / 3;
}

// Program execution starts from the main function
int main()
{
    // Call sum function
    cout << "Sum = " << sum(23, 3) << "\n";

    // Call average function
    cout << "Average = " << average(31, 33, 87) << "\n";

    // Call larger function
    cout << "Larger number = " << larger(23, 22) << "\n";

    return 0;
}

// Function definition
// This function compares two numbers
// It returns the larger one
double larger(double num1, double num2)
{
    double max;

    // Check which number is larger
    if (num1 >= num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    // Return the larger value
    return max;
}
