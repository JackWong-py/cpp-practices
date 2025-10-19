/*6. **Evenly Divisible** → Input two numbers, check if the first divides evenly by the second.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "This program check if the first number divides evenly by the second. " << endl;

    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << fixed << setprecision(2);
    if (num1 % num2 == 0){
        cout << "First number divides evenly by the second.\n";
        cout << num1 << " divides by " << num2 << " equals to " << num1 / num2 << ".";
    }else
    {
        cout << "First number divides oddly by the second.\n";
        cout << num1 << " divides by " << num2 << " equals to " << double(num1) / double(num2) << ".";
    }
    return 0;
}
