//17. **Flow and Modularity** – Design a simple banking system that separates logic into functions:
//
//    `create_account()`, `deposit()`, `withdraw()`, `display_balance()`.
#include <iostream>
#include "banking.h"

using namespace std;

int main()
{
    cout << "This is a simple banking system. " << endl;

    Account Jack = create_account("Wong Haw Jack", 10000);
    Account Rachel = create_account("Rachel Ng", 5000);

    deposit(Jack, 5000);
    withdraw(Rachel, 2000);

    display_balance(Jack);
    display_balance(Rachel);
}

