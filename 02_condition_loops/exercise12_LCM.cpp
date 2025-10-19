/*12. **LCM (Lowest Common Multiple)** → Input two numbers, find their LCM using loops.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program find LCM within two numbers. " << endl;

    int num1, num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    int LCM_value = max(num1, num2);

    while (LCM_value % num1 != 0 || LCM_value % num2 != 0)
    {
        LCM_value += 1;
        //LCM_value += max(num1, num2); This code will run faster.
    }

    cout << "The LCM value of " << num1 << " and " << num2 << " is " << LCM_value << ".";
    return 0;
}
