//6. **Namespace Separation**
//
//   * Create a namespace `MathOps` containing functions `add`, `subtract`, `multiply`, and `divide`.
//   * Demonstrate using both qualified (`MathOps::add`) and `using namespace`.
#include <iostream>

namespace MathOps
{
    int add(int x, int y){return x + y;}
    int subtract(int x, int y){return x - y;}
    int multiply(int x, int y){return x * y;}
    int divide(int x, int y){return x / y;}
}

using namespace std;
using namespace MathOps;

int main()
{
    int x = 5, y = 10;

    cout << add(x, y) << endl;
    cout << subtract(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << divide(x, y) << endl;
    return 0;
}
