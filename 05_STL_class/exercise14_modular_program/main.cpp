//14. **Modular Program** – Split a program into multiple `.cpp` and `.h` files:
//
//
//
//&nbsp;   * `main.cpp`, `math_utils.cpp`, `math_utils.h`
//
//&nbsp;   * Write simple functions like `add()`, `multiply()`, and test them.
#include <iostream>
#include "math.utils.h"

using namespace std;

int main()
{
    cout << "This is a simple program split file into .cpp and .h files. " << endl;
    int num1 = 10, num2 = 50;
    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " x " << num2 << " = " << multiply(num1, num2) << endl;
    return 0;
}
