/*9. **Power of a Number** → Input base and exponent, compute power with a loop (don’t use `pow()`).*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program compute power with loop. " << endl;
    int base, exponent;
    double final_num = 1;

    cout << "Enter the base number: " << endl;
    cin >> base;
    cout << "Enter the exponent: " << endl;
    cin >> exponent;

    for (int i = 0; i < abs(exponent); i++)
        final_num *= base;

    if (exponent < 0)
        final_num = 1.0 / final_num;

    cout << "The base number is " << base << "." << endl;
    cout << "The exponent is " << exponent << "." << endl;
    cout << "The power " << exponent << " of " << base << " is " << final_num << ".";
    return 0;
}
