/*19. **GCD (Greatest Common Divisor)** → Input two numbers, compute GCD using a loop.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program find the GCD of two numbers.\n";

    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    //int smaller_number = min(num1, num2), gcd;
    /*for(int i = smaller_number; i >= 1; i--)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }

    }*/
    int smaller = min(num1, num2), larger = max(num1, num2), gcd;
    while(larger % smaller > 0)
    {
        int temp = smaller;
        smaller = larger % smaller;
        larger = temp;
    }
    gcd = smaller;
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << ".";
    return 0;
}
