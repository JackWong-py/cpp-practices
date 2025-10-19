/*10. **Digit Counter** → Input number, count how many digits it has.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "This program count the number of digit user input.\n";
    cout << "Example: The number '-123' has 3 digit.\n";

    int user_input, abs_value;
    cout << "Enter a number: " << endl;
    cin >> user_input;

    abs_value = abs(user_input);

    int digit_count = 1;
    while (abs_value / 10 > 0)
    {
        digit_count += 1;
        abs_value /= 10;
    }

    cout << "The number " << user_input << " has " << digit_count << (digit_count > 1 ? " digits. " : " digit. ");
    return 0;
}
