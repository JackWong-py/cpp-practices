/*12. **Grade Percentage**
    Ask for marks obtained and total marks, calculate percentage.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "This program calculate percentage of total marks.\n";
    cout << "Enter the total marks: " << endl;

    double total_marks;
    cin >> total_marks;

    cout << "Enter the marks obtained: " << endl;

    double mark_obtained;
    cin >> mark_obtained;

    cout << "The percentage are " << (mark_obtained / total_marks * 100) << "%";
    return 0;
}
