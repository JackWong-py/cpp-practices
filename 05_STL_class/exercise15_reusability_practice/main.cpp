//15. **Reusability Practice** – Build a small “utility library” header that defines 3 helper functions:
//
//    `max_of_two()`, `min_of_two()`, `average()`. Include it in `main.cpp`.
#include <iostream>
#include "util_lib.h"

using namespace std;

int main()
{
    cout << "This program use 'Utility Library' function." << endl;

    int num1 = 10, num2 = 50;
    cout << "Max of two number between " << num1 << " and " << num2 << " is " << max_of_two(num1, num2) << endl;
    cout << "Min of two number between " << num1 << " and " << num2 << " is " << min_of_two(num1, num2) << endl;
    cout << "Average of two number between " << num1 << " and " << num2 << " is " << average(num1, num2) << endl;
}
