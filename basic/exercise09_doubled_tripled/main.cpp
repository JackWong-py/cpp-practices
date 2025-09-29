/*9. **Double It**
   Ask for a number, then print it doubled and tripled.*/
#include <iostream>

using namespace std;

int main()
{
    double number;
    cout << "This program doubled and tripled number.\n";
    cout << "Enter a number. " << endl;
    cin >> number;

    cout << "doubled: " << (number * 2) << "\n"
    << "tripled: " << (number * 3);

    return 0;
}
