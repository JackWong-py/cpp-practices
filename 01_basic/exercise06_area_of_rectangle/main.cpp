/*6. **Area of a Rectangle**
   Input length and width, output area.*/

#include <iostream>

using namespace std;

int main()
{
    double length, width;

    cout << "This program calculate area of rectangle.\n";
    cout << "Enter the length: " << endl;
    cin >> length;

    cout << "Enter the width: " << endl;
    cin >> width;

    cout << "The area of rectangle is " << (length * width) << ".";
    return 0;
}
