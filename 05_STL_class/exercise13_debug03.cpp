#include <iostream>
using namespace std;

// Function that tries to find a positive number in an array.
// It returns a pointer to the first positive number (if found).
int* find_positive(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
            return &arr[i]; // return pointer to that element
    }

    // ❌ Bug: we forget to handle case when no positive number is found
    // and we return an uninitialized pointer (or nullptr not handled)
    return nullptr;
}

int main()
{
    cout << "This program demonstrates a null pointer bug.\n";

    int numbers[] = {-5, -10, -3, -8};
    int size = 4;

    int* result = find_positive(numbers, size);

    // ❌ Intentional bug: directly dereferencing result without checking
    //cout << "First positive number: " << *result << endl;

    //Fixed bug by handle *result = nullptr case
    if (result != nullptr)
        cout << "First positive number: " << *result << endl;
    else
        cout << "No positive value found! " << endl;

    return 0;
}

