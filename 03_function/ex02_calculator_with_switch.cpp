/*2. **Calculator with Switch**
   Input two numbers and an operator (`+ - * /`). Use `switch` to compute.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program perform math operation (+, -, *, /) within two numbers. " << endl;
    double num1, num2;
    char op_choice;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    cout << "Enter operation: " << endl;
    cin >> op_choice;

    switch(op_choice)
    {
        case '+': cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-': cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*': cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error: Division by zero. ";
        break;
        default: cout << "Error, invalid operation.\n";
        break;
    }

    return 0;
}
