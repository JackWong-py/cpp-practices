/*2. **Max of Three Numbers** → Input three numbers, print the largest.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program print the largest number within 3 numbers." << endl;

    double num1, num2, num3
    for (int i = 1; i < 4; i++) //for-loop to get 3 number from user.
    {
        double temp_input;
        cout << "Enter number " << i << ": ";
        cin >> temp_input;

        if (i == 1)
            num1 = temp_input;
        else if (i == 2)
            num2 = temp_input;
        else
            num3 = temp_input;
    }
    //Without for-loop
    /* cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter number 3: ";
    cin >> num3; */

    double largest_num = num1; //Initialize the num1 to the largest number
    //Compare each number with largest number
    if (num2 > largest_num)
        largest_num = num2;
    if (num3 > largest_num)
        largest_num = num3;

    /* if-else direct approach
    if (num1 >= num2 && num1 >= num3)
        largest_num = num1
    else if (num2 >= num1 && num2 >= num3)
        largest_num = num2
    else
        largest_num = num3 */

    cout << "Largest number is " << largest_num << ".";
    return 0;
}
