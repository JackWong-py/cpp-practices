/*11. **Unit Converter**
    Ask the user for kilometers, convert to miles (`1 km = 0.621371 miles`).*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program convert kilometers to miles.\n";
    cout << "Enter a number: " << endl;

    double kilometers;
    cin >> kilometers;

    cout << kilometers << "km equal to " << (kilometers * 0.621371) << "miles.";
    return 0;
}
