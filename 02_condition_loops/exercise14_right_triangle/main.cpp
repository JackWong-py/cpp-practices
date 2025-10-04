/*14. **Right Triangle Pattern** → Input `N`, print a right-angled triangle of `*`.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "This program print a right-angled triangle of '*'. " << endl;
    cout << "Example: 5\n";
    cout << "*\n";
    cout << "**\n";
    cout << "***\n";
    cout << "****\n";
    cout << "*****\n";

    cout << "Enter a number: " << endl;

    int height = 0;
    string triangle_length = "";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        triangle_length += "*";
        cout << triangle_length << "\n";
    }
    return 0;
}
