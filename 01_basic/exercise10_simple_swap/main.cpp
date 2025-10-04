/*10. **Simple Swap**
    Input two numbers, then swap them (print swapped values).*/
#include <iostream>
//#include <utility> (for swapping method)
using namespace std;

int main()
{
    int num1, num2, temp; //method 1: use a temporary variable
    cout << "This program swap two numbers.\n";
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << ", " << num2;

    //method 2; use swap
    //swap (num1, num2);
    return 0;
}
