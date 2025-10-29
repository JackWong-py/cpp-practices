//7. **Nested Namespace**
//
//   * Create nested namespaces `Physics::Mechanics` and `Physics::Optics` each with one function.
//   * Call them using `Physics::Mechanics::function()` syntax.
#include <iostream>

namespace Physics
{
    namespace Mechanics
    {
        void Mechanic_func(){std::cout << "This is mechanics." << std::endl;}
    }
    namespace Optics
    {
        void Optics_func(){std::cout << "This is optics." << std::endl;}
    }
}
int main()
{
    Physics::Mechanics::Mechanic_func();
    Physics::Optics::Optics_func();
    return 0;
}
