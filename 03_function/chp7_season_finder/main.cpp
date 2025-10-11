/*3. **Season Finder (Enum)**
   Define an `enum Season { SPRING, SUMMER, FALL, WINTER }`. Input a number and print season.*/
#include <iostream>

using namespace std;

enum Season
{
    SPRING = 1,
    SUMMER,
    FALL,
    WINTER
};

int main()
{
    cout << "This program print out season. " << endl;
    cout << "1) Spring\n";
    cout << "2) Summer\n";
    cout << "3) Fall\n";
    cout << "4) Winter\n";
    cout << "Enter a season: " << endl;

    int choice;
    cin >> choice;

    switch(choice)
    {
        case SPRING: cout << "You choose spring! "; break;
        case SUMMER: cout << "You choose summer! "; break;
        case FALL: cout << "You choose fall! "; break;
        case WINTER: cout << "You choose winter! "; break;
        default: cout << "Invalid input! " ; break;
    }
    return 0;
}
