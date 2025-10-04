/*11. **Palindrome Number Checker** → Input number, check if it reads the same backward (e.g., 121).*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "This program check whether the number input reads the same backward. " << endl;
    cout << "Example '121'.\n";

    int user_input, abs_value;
    cout << "Enter number: " << endl;
    cin >> user_input;

    abs_value = abs(user_input);
    int original = abs_value;
    int reversed = 0;

    //reverse the digit
    while (abs_value > 0)
    {
        int digit = abs_value % 10; //get last digit.
        reversed = reversed * 10 + digit; //build reversed number.
        abs_value /= 10; //remove last digit.
    }
    if (original == reversed)
        cout << user_input << " is a palindrome.\n";
    else
        cout << user_input << " is NOT a palindrome.\n";

    return 0;
}
