#include <iostream>
using namespace std;

// Define ATM states
enum ATMState {
    MainMenu,
    BalanceCheck,
    Withdraw,
    Deposit,
    Exit
};

int main() {
    double balance = 1000.0;
    ATMState state = MainMenu;  // start in main menu

    while (state != Exit) {
        switch (state) {
            case MainMenu: {
                cout << "\n=== ATM Menu ===\n";
                cout << "1) Balance Check\n";
                cout << "2) Withdraw\n";
                cout << "3) Deposit\n";
                cout << "4) Exit\n";
                cout << "Choose option: ";

                int choice;
                cin >> choice;

                if (choice == 1) state = BalanceCheck;
                else if (choice == 2) state = Withdraw;
                else if (choice == 3) state = Deposit;
                else if (choice == 4) state = Exit;
                else cout << "Invalid choice!\n";
                break;
            }
            case BalanceCheck: {
                cout << "Your balance is RM" << balance << "\n";
                state = MainMenu; // go back to menu
                break;
            }
            case Withdraw: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) cout << "Insufficient funds!\n";
                else {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: RM" << balance << "\n";
                }
                state = MainMenu;
                break;
            }
            case Deposit: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful. New balance: RM" << balance << "\n";
                state = MainMenu;
                break;
            }
            default: {
                state = Exit;
            }
        }
    }

    cout << "Thank you for using ATM!\n";
    return 0;
}
