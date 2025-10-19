/*5. **Menu with Switch**
   Create a simple text menu:

   ```
   1. Say Hello
   2. Print a Quote
   3. Exit
   ```

   Use `switch` to run the right option.*/
//This is second version of this simple menu.
#include <iostream>

using namespace std;

enum menu
{
    HELLO = 1,
    QUOTE,
    EXIT
};

void hello_user()
{
    cout << "Enter your name: " << endl;
    string name_user;
    cin >> name_user;
    cout << "Hello, " << name_user << "!\n";
}

void get_quote()
{
    cout << "Be positive!\n";
}

menu show_menu()
{
    cout << "\n ---- Menu ---- \n";
    cout << "1) Say Hello\n";
    cout << "2) Print a quote\n";
    cout << "3) Exit\n";
    cout << "Enter option: " << endl;

    int choice;
    cin >> choice;
    return static_cast<menu>(choice);
}

int main()
{
    cout << "Welcome to simple text menu!" << endl;

    menu choice;

    do{
        choice = show_menu();

        switch(choice)
        {
            case HELLO:
                hello_user();
                break;

            case QUOTE:
                get_quote();
                break;

            case EXIT:
                break;

            default:
                cout << "Invalid input! Please try again.\n";
        }
        }while(choice != EXIT);

    cout << "Thank you for using simple menu! ";
    return 0;
}
