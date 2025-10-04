/*13. **Square Pattern** → Input `N`, print an `N x N` square of `*`.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program print an N x N using *." << endl;
    cout << "Example: 3\n";
    cout << "***\n";
    cout << "***\n";
    cout << "***\n";

    cout << "Enter a number: " << endl;

    int square_area;
    cin >> square_area;

    for (int length = 0; length < square_area; length++)
    {
        for (int width = 0; width < square_area; width++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
