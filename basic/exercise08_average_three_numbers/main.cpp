/*8. **Average of Three Numbers**
   Input three numbers, print their average.
*/
#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;
    cout << "This program calculate the average of three numbers.\n";
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;

    cout << "The average of three numbers is " << ((num1 + num2 + num3) / 3);
    return 0;
}
