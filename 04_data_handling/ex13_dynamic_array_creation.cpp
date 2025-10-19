/*13. **Dynamic Array Creation**

    * Ask user how many elements → allocate dynamically → input & print.*/
#include <iostream>

using namespace std;

void display_array(const int *p_array, int size)
{
    cout << "Array: {";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
            cout << ", ";
        cout << p_array[i];
    }
    cout << "}";
}
int main()
{
    cout << "This program shows how element allocate dynamically. \n";

    cout << "How many elements you want to allocate? " << endl;
    int size;
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int *p_array = new int[size];
    int element;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        p_array[i] = element;
    }
    display_array(p_array, size);
    delete [] p_array;
    return 0;
}
