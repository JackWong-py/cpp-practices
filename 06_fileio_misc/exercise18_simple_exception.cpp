
#include <iostream>

using namespace std;

int fraction(int number, int den)
{
    if(den == 0)
    {
     throw 1; // division by error
    }

    return number / den;
}

int main()
{
    cout << "This program shows simple exception with division error.\n";

    int number, den;
    cout << "Enter a number: " << endl;
    cin >> number;

    cout << "Enter denominator: " << endl;
    cin >> den;

    int result;
    try
    {
     result = fraction(number, den);
     cout << number << " / " << den << " = " << result;
    }
    catch (int e)
    {
    if(e == 1)
     cout << "Zero division error.";
    }

    return 0;
}
