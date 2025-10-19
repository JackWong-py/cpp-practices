/*5. **Triangle Validity** → Input three sides, check if they can form a triangle.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program check if user input can form a triangle. " << endl;

    double side1, side2, side3;

    cout << "Enter a side 1: " << endl;
    cin >> side1;
    cout << "Enter a side 2: " << endl;
    cin >> side2;
    cout << "Enter a side 3: " << endl;
    cin >> side3;

    if ((side1 + side2 > side3)&&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1))
        cout << "Valid triangle. ";
    else
        cout << "Invalid triangle. ";

    return 0;
}
