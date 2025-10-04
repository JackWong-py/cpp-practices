/* 14. **Compound Interest (Basic)**
    Ask for principal, rate, and time. Compute final amount with simple formula:
    `A = P * (1 + r/100)^t`*/
#include <iostream>
#include <iomanip> //This library give set precision to 2 decimal point.
#include <cmath> //This library provide power function

using namespace std;

int main()
{
    cout << "This program compute final amount of principle and interest\n";

    double principle, rate, final_amount, year;

    cout << "Enter the principle: " << endl;
    cin >> principle;
    cout << "Enter the rate: " << endl;
    cin >> rate;
    cout << "Enter the year: " << endl;
    cin >> year;

    final_amount = principle * pow(1 + rate / 100, year);
    cout << fixed << setprecision(2);
    cout << "The final amount you need to pay is RM" << final_amount << ".";
    return 0;
}
