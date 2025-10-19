/*11. **Sum Using Pointer Traversal**

    * Use a pointer to loop through an array and calculate its sum.*/
#include <iostream>

using namespace std;

int sum_array(int *array)
{
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        result += *(array + i);
    }
    return result;
}
int main()
{
    int array[10];
    int *p_array = array;

    for (int i = 0; i < 10; i++)
    {
        array[i] = 1;
    }

    cout << "Sum of the array: " << sum_array(p_array);
    return 0;
}
