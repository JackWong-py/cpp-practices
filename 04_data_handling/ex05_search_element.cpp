/*5. **Search for an Element**

   * Input an integer and tell whether it exists in the array.*/
#include <iostream>
#include <random>
#include <string>

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
bool element_existed(int array[], int size, int choice);
int get_index(int array[], int size, int choice);

int main()
{
    cout << "This program tell whether an element existed in an array. " << endl;
    uniform_int_distribution<>dist(1,100);

    int size;
    cout << "Enter the array size: " << endl;
    cin >> size;

    cout << "Generating array..." << endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = dist(gen);
    }
    cout << "Array generated." << endl;

    char option = 'y';
    string num_with_index = "";
    while (option != 'n')
    {
        switch(option)
        {
        case 'y':
            int number;
            cout << "Enter a number (1-100): " << endl;
            cin >> number;
            if (element_existed(array, size, number))
            {
                cout << "Number " << number << " existed.\n";
                num_with_index += "Number: " + to_string(number) + " existed in index " + to_string(get_index(array, size, number)) + '\n';
            }
            else
                cout << "Number " << number << " not existed.\n";
            break;
        default:
            cout << "Invalid option. " << endl;
        }
        cout << "Do you want to search for another element? (y/n)" << endl;
        cin >> option;
    }
    display_array(array, size);
    cout << num_with_index;
    return 0;
}
bool element_existed(int array[], int size, int choice)
{
    for (int i = 0; i < size; i++)
    {
        if (choice == array[i]){return true;}
    }
    return false;
}
int get_index(int array[], int size, int choice)
{
    for (int i = 0; i < size; i++)
    {
        if (choice == array[i]){return i;}
    }
    return -1;
}
