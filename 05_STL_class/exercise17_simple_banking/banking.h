#ifndef BANKING_H_INCLUDED
#define BANKING_H_INCLUDED
#include <string>
using namespace std;

struct Account
{
    string name;
    int balance = 0;
};

Account create_account(string name, int initial_balance);
void deposit(Account& account, int amount);
void withdraw(Account& account, int amount);
void display_balance(const Account& account);

#endif // BANKING_H_INCLUDED
