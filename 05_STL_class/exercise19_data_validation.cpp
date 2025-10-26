//19. **Data Validation** – Add validation in your `setPrice()` method so it cannot accept negative numbers.
//
//Demonstrate it in `main()`.
#include <iostream>

using namespace std;

class Product
{
public:
    Product(int p): price(p){}

    void set_price(int new_price)
    {
        if (new_price < 0)
        {
            cout << "Invalid new price! " << endl;
            cout << "Price remain RM" << price << endl;
            return;
        }
        price = new_price;
        cout << "Succesfully set price to RM" << price << endl;
    }

    void display(){cout << "Price: " << price << endl;}

private:
    int price;
};

int main()
{
    Product mouse(15);
    mouse.set_price(20);

    mouse.display();
    mouse.set_price(-5);
    mouse.display();
    return 0
}
