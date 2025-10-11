/*13. **Random Even Number Generator**
    Function returns a random even number between 1–50.*/
#include <iostream>
#include <random>

using namespace std;

int random_even_number();

random_device rd;
mt19937 gen(rd());

int main()
{
    cout << "This program generate a random even number between 1-50. " << endl;
    cout << random_even_number();
    return 0;
}
int random_even_number()
{
    uniform_int_distribution<>dist(1, 25);//pick a number from 1 to 25.
    int n = dist(gen);//random number 1-25
    return n * 2;
}
