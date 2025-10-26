/*5. \*\*Iterator Modification\*\* – Given a `vector<int>`, remove all even numbers

using `erase()` and iterators safely (no index-based removal).*/
#include <iostream>
#include <vector>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

void display_vector(vector<int> vector_to_display)
{
    cout << "Vector: {";
    for (int i = 0; i < vector_to_display.size(); ++i)
    {
        if (i != 0) cout << ", ";
        cout << vector_to_display[i];
    }
    cout << "}\n";
}
void remove_even_nums(vector<int> &vector_to_modify)
{
    for(auto itr = vector_to_modify.begin(); itr != vector_to_modify.end(); ++itr)
    {
        if(*itr % 2 == 0)
        {
            cout << "Removing " << *itr << " from vector...\n";
            itr = vector_to_modify.erase(itr);
        }
    }
}
int main()
{
    cout << "This program generate random numbers and remvoe all even numbers.\n";

    vector<int> numbers(10);
    uniform_int_distribution<> dist(1, 100);

    cout << "Generating random number...\n";

    for (int i = 0; i < 10; ++i)
    {
        numbers[i] = dist(gen);
    }

    cout << "Original Vector: ";
    display_vector(numbers);

    remove_even_nums(numbers);

    cout << "Vectors removed even: ";
    display_vector(numbers);
    return 0;
}
