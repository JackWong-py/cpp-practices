/* 20. **Leap Year Checker**
    Ask for a year, check if it’s a leap year (divisible by 4, not divisible by 100 unless divisible by 400).*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program check whether a year is a leap year. " << endl;

    int year;
    cout << "Enter a year: " << endl;
    cin >> year;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";

    return 0;
}
