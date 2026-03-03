#include <iostream>
#include <vector>

using namespace std;



int main()
{
    vector<int> vNumbers;
    char Again;
    int Number;

    do
    {
        cout << "Add Number To Array.." << endl;
        cin >> Number;

        vNumbers.push_back(Number);

        cout << "Do You Want To Add Again? [Y/N] ";
        cin >> Again;
    } while (Again == 'Y' || Again == 'y');

    cout << "\n\nArray Elemants..." << endl;
    for (int &Number : vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;

    return 0;
}