#include <iostream>
using namespace std;

int main()
{
    cout << "This program sums 5 numbers.\n";

    int sum = 0;
    int number = 0;

    for (int i = 1; i <= 5; ++i)
    {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;  // <-- 🟥 Set your breakpoint here!

        cout << "Running total so far = " << sum << endl;
    }

    cout << "\nFinal total = " << sum << endl;

    return 0;
}
