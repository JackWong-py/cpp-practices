/*10. **Swap Two Numbers (using pointers)**

    * Write a function `void swap(int *a, int *b);` and test it.*/
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1 = 100, num2 = 50;
    int *p_num1 = &num1, *p_num2 = &num2;

    cout << "---Before swap---\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    swap(p_num1, p_num2);
    cout << "---After swap---\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    return 0;
}
