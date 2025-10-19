/*19. **Quadratic Equation Solver (Basic)**
    Ask for coefficients a, b, c, compute discriminant `d = b² - 4ac`. Print roots if d ≥ 0.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "This prgram compute discriminant of Quadratic Equation.\n";

    double a, b, c;
    cout << "Enter coefficient a: " << endl;
    cin >> a;
    cout << "Enter coefficient b: " << endl;
    cin >> b;
    cout << "Enter coefficient c: " << endl;
    cin >> c;

    double d = pow(b, 2) - 4 * a * c;
    if (d >= 0)
    {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);

        cout << fixed << setprecision(2);
        cout << "Discriminant = " << d << "\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    else
        cout << "d <= 0, There is no real root. ";

    return 0;
}
