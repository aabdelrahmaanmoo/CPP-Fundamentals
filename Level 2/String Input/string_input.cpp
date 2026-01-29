#include <iostream>
// Provides standard input and output functionality

using namespace std;
// Allows usage of standard library features without std:: prefix

int main()
{
    string FullName;
    // Declares a string variable to store the user's input

    cin >> FullName;
    // Reads input from the user until a whitespace is encountered
    // This means it will stop reading at the first space

    cout << FullName << endl;
    // Prints the value read using cin

    getline(cin, FullName);
    // Reads the entire line including spaces
    // WARNING: This may read an empty line because of the leftover newline
    // from the previous cin operation

    cout << FullName << endl;
    // Prints the value read using getline

    return 0;
    // Ends the program successfully
}
