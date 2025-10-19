/*20. **Basic ATM Simulator** → Input balance; allow user to withdraw money until balance is too low.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program allow user to withdraw money untill balance is too low. " << endl;

    cout << "Enter balance: " << endl;
    int balance;
    cin >> balance;

    while(balance > 0)
    {
        int withdraw;
        cout << "Withdraw amount: " << endl;
        cin >> withdraw;

        if (withdraw > balance)//Break the loop if balance too low.
        {
            cout << "Insuficient funds! Balance: RM" << balance << endl;
            break;
        }
        //Else continue withdraw.
        balance -= withdraw;
        cout << "RM" << withdraw << " withdrawed. Balance: RM" << balance << "\n";
    }
    cout << "Balance too low! ";
    return 0;
}
