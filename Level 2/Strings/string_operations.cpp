#include <iostream>
// Provides input and output stream functionality

using namespace std;
// Allows using standard library features without std:: prefix

int main()
{
    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Declares a string variable and initializes it with uppercase letters

    cout << "The length of (myString) is: " << myString.length() << endl;
    // myString.length() returns the number of characters in the string
    // endl moves the cursor to a new line and flushes the output buffer

    cout << myString[2] << endl;
    // Accesses the character at index 2 (zero-based indexing)
    // Index: 0 -> 'A', 1 -> 'B', 2 -> 'C'

    string S1 = "10", S2 = "20";
    // Declares two string variables that contain numeric characters

    string S3 = S1 + S2;
    // Concatenates two strings
    // Result will be "1020", not numeric addition

    cout << S3 << endl;
    // Prints the concatenated string

    int sum = stoi(S1) + stoi(S2);
    // stoi converts a numeric string into an integer
    // After conversion: 10 + 20 = 30

    cout << sum << endl;
    // Prints the numeric sum

    return 0;
    // Ends the program successfully
}
