/*3. **Age in Months**
   Ask the user for their age in years and calculate their age in months.*/

#include <iostream>

using namespace std;

int main()
{
    int age_year;
    int age_month;

    cout << "This software ask the user for their age in years, and calculate their age in months.\n";
    cout << "Enter your age in years: ";
    cin >> age_year;
    age_month = age_year * 12;
    cout << "Your age in month is " << age_month << " months. ";
}
