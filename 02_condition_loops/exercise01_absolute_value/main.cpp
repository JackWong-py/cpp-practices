/*1. **Absolute Value** → Input a number, print its absolute value (without using `abs()`).*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program print absolute value. " << endl;

    int user_input;
    cout << "Enter a number: " << endl;
    cin >> user_input;

    if (user_input < 0)
        cout << -user_input;
    else
        cout << user_input;


    return 0;
}
