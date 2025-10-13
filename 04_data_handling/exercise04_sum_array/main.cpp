/*1. **Sum of Array Elements**

   * Input 5 integers, compute and print their sum and average.*/
#include <iostream>

using namespace std;

double sum_array(int array[]);
double average_array(double sum_of_array, int size);

int main()
{
    int array[5], sum_of_array;
    cout << "This program compute and print the sum and average of an array. " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter number " << i + 1 << ": " << endl;
        cin >> array[i];
    }
    cout << "Sum of the array: " << sum_array(array) << "\n";
    cout << "Average of the array: " << average_array(sum_array(array), 5);
    return 0;
}
double sum_array(int array[])
{
    double result;
    for (int i = 0; i < 5; i++)
    {
        result += array[i];
    }
    return result;
}
double average_array(double sum_of_array, int size)
{
    return sum_of_array / size;
}
