/*💡 Exercise: “Bank Account Scope Simulator”
🧭 Description

Create a small program that simulates a bank account balance using both global and local variables.*/
#include <iostream>

using namespace std;

double balance = 1000;

void deposit(double amount);//Function to increase balance
void withdraw(double amount);//Function to decrease balance
void show_balance();//Display both balance
void reset_balance();//Reset the balance to 1000
void deposit_main(double balance, double amount);//This function will not modified
void deposit_main2(double &balance, double amount);//This function will modified

int main()
{
    double balance = 50;//Local variable same name with global
    cout << "Initial global balance: " << ::balance << endl;//::shows the global variables.

    deposit(200);
    withdraw(150);
    cout << "Local balance inside main(): " << balance << endl;

    deposit_main(balance, 100);//Not modifiying local balance using this function. It didnt return a new values.
    cout << "Local balance inside main(): " << balance << endl;//Still showing 50 here.

    deposit_main2(balance, 100);//This function will modified
    cout << "Local balance inside main(): " << balance << endl;

    show_balance();
    reset_balance();

    return 0;
}

void deposit(double amount)
{
    cout << "Depositing " << amount << "..." << endl;
    balance += amount;
}

void withdraw(double amount)
{
    cout << "Withdrawing " << amount << "..." << endl;
    balance -= amount;
}

void show_balance()
{
    int balance = 9999;
    cout << "Local balance inside show_balance(): " << balance << endl;
    cout << "Global balance (using ::balance): " << ::balance << endl;
}

void reset_balance()
{
    cout << "Resetting global balance..." << endl;
    balance = 1000;
    cout << "Global balance after reset: " << ::balance << endl;
}

void deposit_main(double balance, double amount)
{
    cout << "Depositing " << amount << "..." << endl;
    balance += amount;
    cout << "Local balance in deposit_main() function: " << balance << endl;
}

void deposit_main2(double &balance, double amount)
{
    cout << "Depositing " << amount << "..." << endl;
    balance += amount;
    cout << "Local balance in deposit_main2() function: " << balance << endl;
}
