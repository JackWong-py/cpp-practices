//1. **Vector Practice** – Write a program that reads integers from the user until `-1` is entered.
//Store them in a `vector<int>`, then print them in reverse order using an iterator.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "This program reads integers from the user until `-1` is entered.\n"
    << "Then print them in reverse order using an iterator.\n";

    vector<int>numbers;
    int user_input = 0;
    while (user_input != -1)
    {
        cout << "Enter integers : " << endl;
        cin >> user_input;
        if (user_input == -1)
        { cout << -1 << " detected.\n";
        break;}
        numbers.push_back(user_input);
    }

    cout << "Numbers in reverse order: \n";
    //for (vector<int>::iterator it_last = numbers.end() - 1; it_last > numbers.begin() - 1; it_last--) Instead of using this code
    for (auto it = numbers.rbegin(); it != numbers.rend(); it++)//Use rbegin() and rend(). auto in vector<int>::iterator in new style.
        {
            cout << *it << " ";
        }
    return 0;
}
