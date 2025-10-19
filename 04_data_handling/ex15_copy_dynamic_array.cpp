/*15. **Copy Dynamic Array**

    * Create a dynamic array → copy its contents to a new array manually.*/
#include <iostream>

using namespace std;

void display_dynamic_array(const int *p_array, int size)
{
    cout << "Dynamic Array: {";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << p_array[i];
    }
    cout << "}\n";
}
void display_array(int array[], int size)
{
    cout << "Array: {";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << "}\n";
}
void copy_array(const int *p_array, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = p_array[i];
    }
}
int main()
{
    cout << "This program copy a dynamic array content to a new array manually.\n";

    cout << "Enter array size: " << endl;
    int size;
    cin >> size;

    if (size <= 0)
    {
        cout << "Error, invalid size. ";
        return 1;
    }

    int *p_array = new int[size];//Dynamic array
    int element;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        p_array[i] = element;
    }

    int array[size];
    copy_array(p_array, array, size);
    display_dynamic_array(p_array, size);
    display_array(array, size);
    delete [] p_array;
    return 0;
}
