/*20. **Menu-Driven Mini Project (Functions + Switch)**
    Build a program with a menu:

```
1. Convert Temperature
2. Roll Dice
3. Toss Coin
4. Exit
```

Use functions for each option, `switch` for menu control.*/
#include <iostream>
#include <random>

using namespace std;

random_device rd;
mt19937 gen(rd());

enum option
{
    convert_temperature = 1,
    roll_dice,
    toss_coin,
    quit
};

int show_menu();
int get_choice();
void f_convert_temp();
void f_roll_dice();
void f_toss_coin();

int main()
{
    cout << "Welcome to mini program! " << endl;

    option user_choice;

    do
    {
        user_choice = static_cast<option>(show_menu());
        switch(user_choice)
        {
        case convert_temperature:
            {
                f_convert_temp();
                break;
            }
        case roll_dice:
            {
                f_roll_dice();
                break;
            }
        case toss_coin:
            {
                f_toss_coin();
                break;
            }
        case quit: user_choice = quit; break;
        }

    }while (user_choice != quit);

    cout << "Thank you for using, have a nice day! ";
    return 0;
}
int show_menu()
{
    cout << "--- Main Menu ---\n";
    cout
    << "1. Convert Temperature\n"
    << "2. Roll Dice\n"
    << "3. Toss Coin\n"
    << "4. Exit" << endl;
    cout << "Enter your option: " << endl;

    return get_choice();
}
int get_choice()
{
    int choice;
    //cin >> choice;
    /*while(choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << "Please enter a valid choice! (1/2/3/4)\n";
        cin >> choice;
    }*/
    while(!(cin >> choice) || choice < 1 || choice > 4)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a valid choice (1-4): ";
    }
    return choice;
}
void f_convert_temp()
{
    double user_input;
    cout << "Enter number: " << endl;
    cin >> user_input;

    cout << user_input << "C = " << (user_input * 9 / 5 + 32) << "F.\n";
    cout << user_input << "F = " << (user_input - 32) * 5 / 9 << "C.\n";
}
void f_roll_dice()
{
    cout << "Rolling dice...\n";
    uniform_int_distribution<>dist(1, 6);
    int dice = dist(gen);
    cout << "You rolled a " << dice << endl;
}
void f_toss_coin()
{
    cout << "Tossing coin...\n";
    uniform_int_distribution<>dist(0, 1);
    int coin = dist(gen);
    cout << "You tossed a " << (coin == 0 ? "HEAD." : "TAIL.") << endl;
}
