/*13. **Simple Calculator**
    Ask the user for two numbers and perform **all 4 operations** (add, subtract, multiply, divide).*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program performs 4 operations within 2 numbers.\n";

    double num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Calculation completed:\n";
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
    cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";

    return 0;
}
