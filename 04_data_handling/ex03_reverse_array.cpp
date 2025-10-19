/*3. **Reverse an Array**

   * Print an array’s contents in reverse order.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_array(int array[])
{
    cout << "{";
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << "}" << endl;
}
void reverse_array(int array_original[], int array_reverse[]);

int main()
{
    uniform_int_distribution<>dist(1,10);
    int array[10], reversed[10];

    cout << "This program reverse the array order. " << endl;

    for (int i = 0; i < 10; i++)
    {
        array[i] = dist(gen);
    }
    reverse_array(array, reversed);
    display_array(array);
    display_array(reversed);

}
void reverse_array(int array_original[], int array_reverse[])
{
    for (int i = 0; i < 10; ++i)
    {
        array_reverse[i] = array_original[9 - i];
    }
}
