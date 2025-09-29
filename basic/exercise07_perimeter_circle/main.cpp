/*7. **Perimeter of a Circle**
   Input radius, output circumference using `2 * 3.14159 * radius`.*/
#include <iostream>

using namespace std;

int main()
{
    int radius;

    cout << "This program calculate perimeter of circle.\n";
    cout << "Enter the radius: " << endl;
    cin >> radius;

    cout << "The perimeter of circle is " << (2 * 3.14159 * radius) << "cm.";
    return 0;
}
