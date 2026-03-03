#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    string FristName;
    string LastName;
    int Salary;
};

void ReadEmployees(vector<stEmployee> &vEmployees)
{
    stEmployee Employee;
    char Again = 'Y';

    while (Again == 'Y' || Again == 'y')
    {
        cout << "Enter Employee Frist Name: " << endl;
        cin >> Employee.FristName;

        cout << "Enter Employee Last Name: " << endl;
        cin >> Employee.LastName;

        cout << "Enter Employee Salary: " << endl;
        cin >> Employee.Salary;

        vEmployees.push_back(Employee);

        cout << "Do You Want To Add More? [Y/N]" << endl;
        cin >> Again;
    }
}

void PrintEmployees(vector<stEmployee> &vEmployees)
{
    for (stEmployee Employee : vEmployees)
    {
        cout << "Frist Name: " << Employee.FristName << endl;
        cout << "Last Name: " << Employee.LastName << endl;
        cout << "Salary: " << Employee.Salary << endl;

        cout << endl;
    }
}

int main()
{
    vector<stEmployee> vEmployees;

    ReadEmployees(vEmployees);
    PrintEmployees(vEmployees);

    return 0;
}