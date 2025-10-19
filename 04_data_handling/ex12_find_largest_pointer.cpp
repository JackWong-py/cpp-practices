/*12. **Find Largest Using Pointer**

    * Find max value in an array using pointer arithmetic only (no `[]`).*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_array(int *arr);
int find_largest(int *arr);
int find_smallest(int *arr);

int main()
{
    uniform_int_distribution<>dist(1,10);
    int array[10];

    cout << "This program find largest and smallest in an array. " << endl;

    for (int i = 0; i < 10; i++)
    {
        array[i] = dist(gen);
    }

    //int *p_array = array;//Declare a pointer to first element of the array
    //Can also write as
    int *p_array = &array[0];

    display_array(p_array);
    cout << "The largest in the array: " << find_largest(p_array) << endl;
    cout << "The smallest in the array: " << find_smallest(p_array) << endl;
    return 0;
}
int find_largest(int *arr)
{
    int largest = *arr;
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) > largest)
            largest = *(arr + i);
    }
    return largest;
}
int find_smallest(int *arr)
{
    int smallest = *arr;
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) < smallest)
            smallest = *(arr + i);
    }
    return smallest;
}
void display_array(int *arr)
{
    cout << "{";
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << *(arr + i);
    }
    cout << "}" << endl;
}
