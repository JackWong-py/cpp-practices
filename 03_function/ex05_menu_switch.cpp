/*5. **Menu with Switch**
   Create a simple text menu:

   ```
   1. Say Hello
   2. Print a Quote
   3. Exit
   ```

   Use `switch` to run the right option.*/
#include <iostream>

using namespace std;

enum menu_state
{
    MAIN_MENU,
    HELLO,
    QUOTE,
    EXIT
};

int main()
{
    menu_state state = MAIN_MENU;
    while(state != EXIT)
    {
        switch(state)
        {
            case MAIN_MENU:
                {
                    cout << "Simple text menu: " << endl;
                    cout << "1) Hello\n";
                    cout << "2) Print a quote\n";
                    cout << "3) Exit\n";
                    cout << "Choose option: " << endl;

                    int choice;
                    cin >> choice;
                    state = static_cast<menu_state>(choice);
                    break;
                }
            case HELLO:
                {
                    cout << "Enter your name: " << endl;
                    string name;
                    cin >> name;
                    cout << "Hello, " << name << ".\n";
                    state = MAIN_MENU;
                    break;
                }
            case QUOTE:
                {
                    cout << "Everyday is a good day!\n";
                    state = MAIN_MENU;
                    break;
                }
            default:
                cout << "Error, Invalid input! ";
                state = MAIN_MENU;
                break;
        }

    }
    cout << "Thank you for using this simple menu!";
    return 0;
}
