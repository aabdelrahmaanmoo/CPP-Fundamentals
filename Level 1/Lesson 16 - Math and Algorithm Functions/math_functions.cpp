// Include iostream for input and output
#include <iostream>

// Include algorithm for max() and min()
#include <algorithm>

// Include cmath for math functions
#include <cmath>

using namespace std;

// Program execution starts from main
int main()
{
    // ---------------- Example 1: Basic math functions ----------------

    // sqrt(x) -> square root of x
    cout << sqrt(16) << "\n"; // 4

    // pow(x, y) -> x raised to the power y
    cout << pow(2, 3) << "\n"; // 8

    // abs(x) -> absolute value (removes negative sign)
    cout << abs(-10) << "\n"; // 10

    // ---------------- Example 2: Rounding functions ----------------

    // ceil(x) -> round up
    cout << ceil(4.2) << "\n"; // 5

    // floor(x) -> round down
    cout << floor(4.8) << "\n"; // 4

    // ---------------- Example 3: Trigonometric functions ----------------

    // sin(x) -> sine of x (x is in radians)
    cout << sin(0) << "\n"; // 0

    // cos(x) -> cosine of x (x is in radians)
    cout << cos(0) << "\n"; // 1

    // tan(x) -> tangent of x (x is in radians)
    cout << tan(0) << "\n"; // 0

    // ---------------- Example 4: Exponential and logarithmic functions ----------------

    // exp(x) -> e raised to the power x
    cout << exp(1) << "\n"; // approximately 2.718

    // log(x) -> natural logarithm (base e)
    cout << log(2.718) << "\n"; // approximately 1

    // log10(x) -> logarithm base 10
    cout << log10(100) << "\n"; // 2

    // ---------------- Example 5: Floating point functions ----------------

    // fabs(x) -> absolute value for floating numbers
    cout << fabs(-5.7) << "\n"; // 5.7

    // fmod(x, y) -> remainder of x divided by y (for float numbers)
    cout << fmod(7.5, 2.5) << "\n"; // 0

    // ---------------- Example 6: min and max ----------------

    // max returns the larger value
    cout << max(6, 9) << "\n"; // 9

    // min returns the smaller value
    cout << min(4, 8) << "\n"; // 4

    // End the program successfully
    return 0;
}
