//19. **Recursive Factorial Function**
//
//    * Classic recursion: `factorial(n)` returns `n * factorial(n - 1)`.
#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x < 0) return NULL;
    else if (x == 0 || x == 1) return 1;
    else return (x * (factorial(x - 1)));
}
int main()
{
    int num;
    cout << "Enter a positive integer: " << endl;
    cin >> num;
    cout << "Factorial of " << num << ": " << factorial(num);
    return 0;
}
