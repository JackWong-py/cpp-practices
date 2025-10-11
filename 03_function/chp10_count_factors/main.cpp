/*17. **Count Factors Function**
    Function `int countFactors(int n)` returns how many factors `n` has.*/
#include <iostream>

using namespace std;

int count_factors(int integer);

int main()
{
    cout << "This program count number of factors. " << endl;

    int user_input;
    cout << "Enter an integer: " << endl;
    cin >> user_input;

    int num_of_factors = count_factors(user_input);
    cout << "The number " << user_input << " has " << num_of_factors << (num_of_factors == 1 ? " factor. " : " factors.");
    return 0;
}
int count_factors(int integer)
{
    int num_of_factor = 0;
    for (int i = 1; i <= abs(integer); i++)
    {
        if (integer % i == 0)
        {
            num_of_factor++;
            cout << "factor: " << i << "\n";
        }
    }
    return num_of_factor;
}
