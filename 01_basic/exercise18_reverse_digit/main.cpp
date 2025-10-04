/*18. **Reverse Digits**
    Input a 3-digit number, output its digits in reverse order.*/
#include <iostream>
using namespace std;

int main()
{
    cout << "This program output 3-digit number in reverse order.\n";

    /*string numbers;
    cout << "Enter 3-digit number: " << endl;
    cin >> numbers;
    cout << numbers[2] << numbers[1] << numbers[0];
    return 0;*/

    //Mathematic way approach.
    int user_input;
    cout << "Enter 3-digit number: " << endl;
    cin >> user_input;
    int num1 = user_input % 10;
    int num2 = (user_input / 10) % 10;
    int num3 = (user_input / 100);

    cout << "Reverse of " << user_input << " is " << num1 << num2 << num3;
    return 0;
}
