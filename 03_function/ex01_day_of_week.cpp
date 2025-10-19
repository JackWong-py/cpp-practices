/*Day of Week (Switch)
Input a number 1–7, output the day name using switch.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program output a day name from user input. " << endl;
    cout << "1) Monday\n";
    cout << "2) Tuesday\n";
    cout << "3) Wednesday\n";
    cout << "4) Thursday\n";
    cout << "5) Friday\n";
    cout << "6) Saturday\n";
    cout << "7) Sunday\n";
    cout << "Enter any day:\n";

    int day;
    cin >> day;

    switch(day)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Error, invalid input. "; break;
    }
    return 0;
}
