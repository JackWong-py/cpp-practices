/*4. **Count Even & Odd Elements**

   * Count how many even and odd numbers are in an array.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_array(int array[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << "}" << endl;
}
void count_even_odd(int array[], int size);

int main()
{
    cout << "This program count even and odd in an array. " << endl;
    uniform_int_distribution<>dist(1,100);
    int size;
    cout << "Enter the array size: " << endl;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = dist(gen);
    }
    display_array(array, size);
    count_even_odd(array, size);
    return 0;
}
void count_even_odd(int array[], int size)
{
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    cout << "Even number in array: " << even << endl;
    cout << "Odd number in array: " << odd << endl;
}
