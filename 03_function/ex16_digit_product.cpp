/*16. **Digit Product Function**
    Function `int productDigits(int n)` that multiplies digits.*/
#include <iostream>

using namespace std;

int product_digit(int n);
int get_digit(int n);

int main()
{
    cout << "This program multiplies digits. " << endl;

    cout << "Enter digits: " << endl;
    int digits_input;
    cin >> digits_input;

    int result = product_digit(digits_input);
    cout << "The multiplies of digits " << digits_input << " = " << result;
    return 0;
}
int product_digit(int n)
{
    if(n == 0) return 0;
    int result = 1, digit;

    while(n != 0)
    {
        digit = n % 10;
        cout << result << " x " << digit << " = ";
        result *= digit;
        cout << result << endl;
        n /= 10;
    }
    return result;
}
