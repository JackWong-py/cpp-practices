/*16. **Collatz Sequence** → Input number, apply Collatz steps until it reaches 1.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program apply Collatz steps until it reaches 1.\n";
    cout << "Enter a number: " << endl;

    int number_input;
    cin >> number_input;

    while (number_input <= 0)//Input validation for positive integer.
    {
        cout << "Invalid input, valid for positive integer only." << endl;
        cout << "Enter a number again: " << endl;
        cin >> number_input;
    }
    int result = number_input;
    cout << result << " -> ";
    while (result > 1)
    {
        if (result % 2 == 0)
        {
            result /= 2;
            cout << result << (result != 1 ? " -> " : "");
        }
        else
        {
            result = result * 3 + 1;
            cout << result << (result != 1 ? " -> " : "");
        }
    }
    return 0;
}
