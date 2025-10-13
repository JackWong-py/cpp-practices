/*2. **Find Maximum and Minimum**

   * Store 10 numbers in an array → find and display largest & smallest.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_array(int array[]);
int find_largest(int array[]);
int find_smallest(int array[]);

int main()
{
    uniform_int_distribution<>dist(1,10);
    int array[10];

    cout << "This program find largest and smallest in an array. " << endl;

    for (int i = 0; i < 10; i++)
    {
        array[i] = dist(gen);
    }

    cout << "The largest in the array: " << find_largest(array) << endl;
    cout << "The smallest in the array: " << find_smallest(array) << endl;
    return 0;
}
int find_largest(int array[])
{
    int largest = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }
    return largest;
}
int find_smallest(int array[])
{
    int smallest = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}
