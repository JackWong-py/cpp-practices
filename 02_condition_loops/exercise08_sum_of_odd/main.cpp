/*8. **Sum of Odd Numbers up to N** → Input `N`, print sum of odd numbers up to `N`.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "This program caluculate sum of odd numbers up to N. " << endl;

    int N, total_sum = 0;
    cout << "Enter number N: " << endl;
    cin >> N;

    for (int i = 1; i <= N; i += 2)
    {
        total_sum += i;
    }
    cout << "The total sum of odd number up to " << N << " is " << total_sum << ".";
    return 0;
}
