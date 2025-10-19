/*16. **Currency Exchange**
    Input USD, convert to EUR and JPY (pick some fixed rates).*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This program convert USD to EUR and JPY.\n";

    double usd, eur, jpy;
    cout << "Enter an amount of USD: " << endl;
    cin >> usd;
    eur = usd * 0.85;
    jpy = usd * 149.51;
    cout << fixed << setprecision(2);
    cout << usd << "usd " << "equal to " << eur << "eur and " << jpy << "jpy. ";
    return 0;
}
