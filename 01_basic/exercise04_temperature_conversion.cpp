/*4. **Temperature Conversion**
   Convert Celsius to Fahrenheit. Formula: `F = C * 9/5 + 32`. */

#include <iostream>

using namespace std;

int main()
{
    int temperature_celcius;
    int temperature_farenheit;

    cout << "This software convert Celsius to Fahrenheit.\n";
    cout << "Input a temperature in Celsius: ";
    cin >> temperature_celciues;
    temperature_farenheit = temperature_celcius * 9/5 + 32;
    cout << "Temperature in Fahrenheit are: " << temperature_farenheit << "F." << endl;
}
