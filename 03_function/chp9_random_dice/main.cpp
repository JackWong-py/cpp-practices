/*11. **Random Dice Roller**
    Function returns two dice rolls and their sum.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll_dice();
int sum_of_2dice();

int main()
{
    cout << "This program generate sum of two dice rolls.\n";

    srand(time(NULL));
    for (int i = 0; i < 50; i++)
        cout << "Sum of two dice rolls = " << sum_of_2dice() << endl;
    return 0;
}

int roll_dice()
{
    return 1 + (rand() % 6);
}
int sum_of_2dice()
{
    int dice1 = roll_dice();
    int dice2 = roll_dice();
    return dice1 + dice2;
}
