// Include the iostream library
// It is used for input and output operations

#include <iostream>

// The main function is the entry point of the program
int main()
{
    // \n : New line
    // Moves the cursor to the next line
    std::cout << "1 - Hello, World!\n";

    // \t : Horizontal tab
    // Adds a tab space between words
    std::cout << "2 - Hello,\tWorld!\n";

    // \a : Alert (bell sound)
    // Produces a beep sound (may not work on all systems)
    std::cout << "3 - Hello,\aWorld!\n";

    // \b : Backspace
    // Removes the character before it
    std::cout << "4 - Hello,\bWorld!\n";

    // \r : Carriage return
    // Moves the cursor to the beginning of the line
    // The text after \r overwrites what comes before it
    std::cout << "5 - Hello,\r5 - World!\n";

    // \" : Double quote
    // Used to print double quotes inside a string
    std::cout << "6 - \"Hello, World!\"\n";

    // \' : Single quote
    // Used to print single quotes inside a string
    std::cout << "7 - \'Hello, World!\'\n";

    // \\ : Backslash
    // Used to print a backslash character
    std::cout << "8 - \\Hello, World!\\\n";

    // Return 0 to indicate successful program execution
    return 0;
}
