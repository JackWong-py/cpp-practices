/*5. **Simple Multiplication**
   Ask for two integers and print their product.*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "This program multiplies two numbers.\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << " x " << num2 << " = " << (num1 * num2) << endl;
    return 0;
}
