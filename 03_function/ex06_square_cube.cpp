/*6. **Square & Cube Function**
   Write `int square(int)` and `int cube(int)`. Call from `main()`.*/
#include <iostream>

using namespace std;

int square(int x){return (x * x);}

int cube(int x){return (x * x * x);}

int main()
{
    cout << "This program has square and cube function." << endl;

    int user_input;
    cout << "Enter a number: " << endl;
    cin >> user_input;

    cout << "Square of " << user_input << " = " << square(user_input) << endl;
    cout << "Cube of " << user_input << " = " << cube(user_input) << endl;
    return 0;
}
