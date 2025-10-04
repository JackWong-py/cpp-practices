/*18. **Armstrong Number Checker** → Input number, check if it’s Armstrong (e.g., 153 → 1³+5³+3³=153).*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "This program check Armstrong number (e.g., 153 → 1³+5³+3³=153). " << endl;

    cout << "Enter a number: " << endl;
    int number_input;
    cin >> number_input;

    int original_number = number_input, power = 0;
    for(int temp_number = number_input; temp_number > 0; temp_number /= 10)
    {
        power++;
    }
    int result = 0;
    for(int temp_number = number_input; temp_number > 0; temp_number /= 10)
    {
        int digit = temp_number % 10;
        result += pow(digit, power);
    }
    cout << original_number << (original_number == result ? " is " : " is NOT ") << "an armstrong number. ";
    return 0;
}
