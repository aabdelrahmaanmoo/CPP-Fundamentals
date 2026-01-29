#include <iostream>
// Provides standard input and output functionality
// Used here mainly for consistency with typical C++ programs

using namespace std;
// Allows using standard library types (like string) without std:: prefix

// Enumeration that represents a set of colors
enum enColor
{
    Red,
    Green,
    Yellow,
    Blue
};

// Enumeration that represents gender types
enum enGender
{
    Male,
    Female
};

// Enumeration that represents marital status
enum enMaritalStatus
{
    Single,
    Married
};

// Structure that represents address information
struct stAddress
{
    string StreetName;
    // Name of the street

    string BuldingNo;
    // Building number (stored as string for flexibility)

    string POBox;
    // Post Office Box number

    string ZipCode;
    // Postal or ZIP code
};

// Structure that represents contact information
struct stContactInfo
{
    string Phone;
    // Phone number

    string Email;
    // Email address

    stAddress Address;
    // Nested structure that contains address details
};

// Structure that represents a person
struct stPerson
{
    string FName;
    // First name

    string LName;
    // Last name

    stContactInfo ContactInfo;
    // Nested structure that contains contact information

    enColor Color;
    // Favorite color using enum enColor

    enGender Gender;
    // Gender using enum enGender

    enMaritalStatus MaritalStatus;
    // Marital status using enum enMaritalStatus
};

int main()
{
    // Declare a variable of type stPerson
    stPerson Personal;

    // Assign basic personal information
    Personal.FName = "Abdelrahman";
    Personal.LName = "Mohamed";

    // Assign contact details
    Personal.ContactInfo.Email = "abc@gmail.com";
    Personal.ContactInfo.Phone = "01000000000";

    // Assign nested address details
    Personal.ContactInfo.Address.POBox = "123456";
    Personal.ContactInfo.Address.BuldingNo = "34";
    Personal.ContactInfo.Address.StreetName = "abcedf";
    Personal.ContactInfo.Address.ZipCode = "012";

    // Assign enumeration values
    Personal.Gender = enGender::Male;
    Personal.MaritalStatus = enMaritalStatus::Single;
    Personal.Color = enColor::Green;

    return 0;
    // Ends the program and returns success status
}
