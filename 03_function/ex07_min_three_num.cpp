/*7. **Min of Three Numbers Function**
   Write `int min3(int a, int b, int c)`.*/
#include <iostream>

using namespace std;

int min3(int a, int b, int c)
{
    int minimum = min(a, b);
    minimum = min(minimum, c);
    return minimum;
}

int main()
{
    cout << "This program return minimum of three numbers" << endl;

    int input_a, input_b, input_c;
    cout << "Enter number 1: " << endl;
    cin >> input_a;
    cout << "Enter number 2: " << endl;
    cin >> input_b;
    cout << "Enter number 3: " << endl;
    cin >> input_c;

    cout << "The minimum of number "
    << input_a << ", " << input_b << " and " << input_c
    << " is " << min3(input_a, input_b, input_c) << ".";

    return 0;
}
