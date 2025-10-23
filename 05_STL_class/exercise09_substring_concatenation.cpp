//9. **Substrings and Concatenation** – Create a program that asks for first name and last name,
//stores them, and prints initials (e.g., “John Smith → J.S.”).
#include <iostream>
#include <string>

using namespace std;

string initials(string first_name, string last_name)
{
    char ch1 = first_name[0], ch2 = last_name[0];
    string initials = string(1, ch1) + '.' + string(1, ch2) + '.';
    return initials;
}
int main()
{
    cout << "This program asks for first name and last name and print initials. (e.g., “John Smith → J.S.”)" << endl;

    cout << "Enter you first name: ";
    string first_name;
    cin >> first_name;

    cout << "Enter your last name: ";
    string last_name;
    cin >> last_name;

    cout << "Hello, " << initials(first_name, last_name) << "!";
}
