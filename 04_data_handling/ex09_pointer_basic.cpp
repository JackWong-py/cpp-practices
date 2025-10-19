/*9. **Pointer Basics Demo**

   * Declare an `int` variable and a pointer to it; print its address and value.*/
#include <iostream>

using namespace std;

int main()
{
    int variable;
    int *p_variable = NULL;

    variable = 100;
    p_variable = &variable;

    cout << p_variable << endl;//Print the address of variable.
    cout << *p_variable << endl;//Get the value of variable using pointer to the address.
}
