/*9. **Simple Interest Calculator**
   Function `double simpleInterest(double p, double r, double t)`.*/
#include <iostream>

using namespace std;

double simple_interest(double p, double r, double t){return (p * r * t / 100);}

int main()
{
    cout << "This program calculate simple interest. " << endl;

    double principal, rate, time;
    cout << "Enter principal (RM): " << endl;
    cin >> principal;
    cout << "Enter annual intererst rate(%): " << endl;
    cin >> rate;
    cout << "Enter time (year): " << endl;
    cin >> time;

    cout << "The simple interest is " << simple_interest(principal, rate, time) << ".";
    return 0;
}
