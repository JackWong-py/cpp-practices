/*14. **Average of Dynamic Array**

    * Create an array of `n` doubles, compute average, then release memory.*/

#include <iostream>

using namespace std;

double get_average(const double *p_array, int size)
{
    double sum_of_element = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum_of_element += p_array[i];
    }
    return (sum_of_element / size);
}
void display_array(const double *p_array, int size)
{
    cout << "Array: {";
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
int main()
{
    cout << "This program compute average of dynamic array. " << endl;

    cout << "Enter the size of array: " << endl;
    int size;
    cin >> size;

    double *p_array = new double[size];
    double element;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        p_array[i] = element;
    }
    double average = get_average(p_array, size);
    display_array(p_array, size);
    cout << "The average of the array: " << average;
    delete[] p_array;
    return 0;
}
