/*8. **Temperature Converter**
   Function `double toCelsius(double fahrenheit)` and `double toFahrenheit(double celsius)`.*/
#include <iostream>

using namespace std;

double to_celsius(double fahrenheit){return (fahrenheit - 32 * 5 / 9);}
double to_fahrenheit(double celsius){return (celsius * 9 / 5 + 32);}

int main()
{
    cout << "This program contain Celsius and Fahrenheit function. " << endl;

    double user_input;
    cout << "Enter number: " << endl;
    cin >> user_input;

    cout << user_input << "C = " << to_fahrenheit(user_input) << "F.\n";
    cout << user_input << "F = " << to_celsius(user_input) << "C.";
    return 0;
}
