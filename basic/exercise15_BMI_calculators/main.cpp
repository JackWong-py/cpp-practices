/*15. **BMI Calculator**
    Ask for weight (kg) and height (m), then compute BMI = weight / (height²).*/
#include <iostream>
#include <iomanip> //to set decimal point.
#include <cmath> //to use power

using namespace std;

int main()
{
    cout << "This program calculate the BMI of user.\n";

    double weight, height, bmi;
    cout << "Enter your weight(kg):" << endl;
    cin >> weight;
    cout << "Enter youe height(m): " << endl;
    cin >> height;
    bmi = weight / pow(height, 2);

    cout << fixed << setprecision(2);
    cout << "Your BMI is " << bmi;

    return 0;
}
