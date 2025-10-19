/*4. **Character Type Checker** → Input a character, check if it’s a digit, uppercase letter, lowercase letter, or symbol.*/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char user_input;
    cout << "This program check character type. " << endl;

    cout << "Enter any character: " << endl;
    cin >> user_input;

    /*int ascii_value = int(user_input);

    if (ascii_value >= 48 && ascii_value <= 57)
        cout << "Character type: digit";
    else if (ascii_value >= 65 && ascii_value <= 90)
        cout << "Character type: uppercase letter";
    else if (ascii_value >= 97 && ascii_value <= 122)
        cout << "Character type: lowercase letter";
    else
        cout << "Character type: symbol";*/

    //Another method using cctype
    if (isdigit(user_input))
        cout << "Character type: digit";
    else if (isupper(user_input))
        cout << "Character type: uppercase letter";
    else if (islower(user_input))
        cout << "Character type: lowercase letter";
    else
        cout << "Character type: symbol";
    return 0;
}
