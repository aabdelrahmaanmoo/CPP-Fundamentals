// Used for input and output operations (cout, cin)
#include <iostream>

// Used for string functions like strcpy, strcat, strcmp, strlen
#include <cstring>

// Allows using cout and cin without writing std::
using namespace std;

// ---------------- Example 1: Character Arrays ----------------

// Program execution starts here
int main()
{
    // Character array WITHOUT null character '\0'
    // This is NOT a valid C-string
    char f1[4] = {'a', 's', 'd', 'f'};

    // Printing this may cause undefined behavior
    cout << f1 << "\n";

    // Character array WITH null character at the end
    // This is a valid C-string
    char f2[5] = {'a', 's', 'd', 'f', '\0'};
    cout << f2 << "\n";

    // Null character in the middle
    // Printing stops when '\0' is reached
    char f3[5] = {'a', 's', 'd', '\0', 'f'};
    cout << f3 << "\n";

    // Larger array with missing '\0'
    // Remaining values are garbage
    char f4[7] = {'a', 's', 'd', 'f'};
    cout << f4 << "\n";

    // String literal automatically adds '\0'
    char f5[5] = "abcd";
    cout << f5 << "\n";

    // ---------------- Example 2: Input with char Array ----------------

    // Character array to store user input
    char f6[20];

    // Read word from user (stops at space)
    cin >> f6;

    // Print the entered word
    cout << f6 << "\n";

    // ---------------- Example 3: strcpy ----------------

    // Source string
    char ch1[] = "AAA";

    // Destination array (must be large enough)
    char ch2[4];

    // Copy ch1 into ch2
    strcpy(ch2, ch1);

    // Print copied string
    cout << ch2 << "\n";

    // ---------------- Example 4: strcat ----------------

    // First string
    char ch3[] = "AAA";

    // Second string with enough space
    char ch4[7] = "HH";

    // Concatenate ch3 to ch4
    cout << strcat(ch4, ch3) << "\n";

    // ---------------- Example 5: strcmp ----------------

    // Two strings for comparison
    char ch5[] = "AAA";
    char ch6[] = "HH";

    // Compare strings
    // Returns 0 if equal
    // Positive or negative if not equal
    cout << strcmp(ch5, ch6) << "\n";

    // ---------------- Example 6: strlen ----------------

    // Long string
    char ch7[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";

    // Print length of string (number of characters before '\0')
    cout << strlen(ch7) << "\n";

    // End the program
    return 0;
}
