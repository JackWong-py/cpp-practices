/*17. **Fibonacci Sequence** → Print first `N` Fibonacci numbers.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program print first 'N' Fibonacci numbers. " << endl;

    cout << "Enter a number 'N': " << endl;
    int first_N;
    cin >> first_N;

    int last_number = 0, current_number = 1, new_number;

    cout << last_number << " ";  // print the first number

    for (int i = 1; i < first_N; i++)
    {
        cout << current_number << " ";
        new_number = current_number + last_number;
        last_number = current_number;
        current_number = new_number;
    }

    return 0;
}
