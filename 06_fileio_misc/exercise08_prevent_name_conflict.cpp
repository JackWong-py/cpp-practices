//8. **Prevent Naming Conflicts**
//
//   * Write two functions `print()` in different namespaces.
//   * Call each one explicitly using its namespace to show how conflicts are resolved.
#include <iostream>

namespace Example1
{
    void print(){std::cout << "Example 1" << std::endl;}
}
namespace Example2
{
    void print(){std::cout << "Example 2" << std::endl;}
}
int main()
{
    Example1::print();
    Example2::print();
    return 0;
}
