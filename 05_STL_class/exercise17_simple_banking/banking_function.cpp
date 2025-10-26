#include <iostream>
#include "banking.h"

using namespace std;

Account create_account(string name, int initial_balance)
{
    Account new_account;
    new_account.name = name;
    new_account.balance = initial_balance;
    cout << "Account created.\n";
    return new_account;
}
void deposit(Account& account, int amount)
{
    account.balance += amount;
    cout << "Amount RM" << amount << " deposited." << endl;
}
void withdraw(Account& account, int amount)
{
    account.balance -= amount;
    cout << "Amount RM" << amount << " withdrawed." << endl;
}
void display_balance(const Account& account)
{
    cout << "\n---- " << account.name << " ----\n";
    cout << "Balance: " << account.balance << endl;
}
