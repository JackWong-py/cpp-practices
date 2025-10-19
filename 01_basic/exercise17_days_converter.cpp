/*17. **Days to Years/Months/Days**
    Ask for a number of days, convert to years, months, and days (assume 1 year = 365, 1 month = 30).*/
#include <iostream>

using namespace std;

int main()
{
    /*cout << "This program convert days to years, months and days.\n";
    cout << "Assume 1 year = 365, 1 month = 30.\n";

    int days, months, years;
    cout << "Enter days: " << endl;
    cin >> days;

    cout << days << " days equal to ";
    years = days / 365;
    days -= (years * 365);
    months = days / 30;
    days -= (months * 30);
    cout << years << " years, " << months << " months, " << days << "days.";

    return 0;*/

    cout << "This program convert days to years, months and days.\n";
    cout << "Assume 1 year = 365, 1 month = 30.\n";

    int input_days;
    cout << "Enter a number of days: " << endl;
    cin >> input_days;

    int years = input_days / 365;
    int remaining_days = input_days % 365;

    int months = remaining_days / 30;
    remaining_days %= 30;

    cout << input_days << " days = "
         << years << " years, "
         << months << " months, "
         << remaining_days << " days." << endl;

    return 0;
}
