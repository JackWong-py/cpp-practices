/*3. **Pass or Fail** → Input score; if ≥ 50 print "Pass", else "Fail".*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program let you know your score pass or fail. (pass >= 50)" << endl;

    int pass_score = 50, user_input;
    cout << "Enter your score: " << endl;
    cin >> user_input;

    if (user_input >= pass_score)
        cout << "Pass.\n";
    else
        cout << "Fail.\n";
    return 0;
}
