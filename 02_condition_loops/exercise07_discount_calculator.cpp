/*7. **Discount Calculator** → Input price and discount rate, apply discount if rate > 0.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This program calculate the price after discount." << endl;

    double input_price, discount_rate, final_price;
    cout << "Enter price: " << endl;
    cin >> input_price;
    while (input_price < 0)
    {
        cout << "Price below 0!\nEnter again: " << endl;
        cin >> input_price;
    }
    cout << "Enter discount rate: " << endl;
    cin >> discount_rate;

    while (discount_rate < 0 || discount_rate > 100)
    {
        cout << "Discount rate must between 0 to 100!\nEnter again: " << endl;
        cin >> discount_rate;
    }

    if (discount_rate > 0)
        final_price = input_price * (1 - (discount_rate / 100));
    else
        final_price = input_price;

    cout << fixed << setprecision(2);
    cout << "The original price is RM" << input_price << ".\n";
    cout << "The discount rate is " << discount_rate << "%.\n";
    cout << "The final price is RM" << final_price << ".\n";
}
