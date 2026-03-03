#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vNumbers = {32, 98, 54, 46, 72};
    for (int &Numbers : vNumbers)
    {
        cout << Numbers << " ";
    }

    return 0;
}