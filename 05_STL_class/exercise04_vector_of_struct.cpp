//4\. \*\*Vector of Structs\*\* – Define a struct `Product { string name; double price; }`.
//
//Store 5 products in a `vector`, then print the most expensive product.
#include <iostream>
#include <vector>

using namespace std;

struct Product
{
    string name;
    double price;
};
Product new_product(string name, double price)
{
    Product product;
    product.name = name;
    product.price = price;
    return product;
}
void display_expensive(vector<Product> vector_to_display)
{
    Product product = vector_to_display[0];
    for (vector<Product>::iterator itr = vector_to_display.begin(); itr != vector_to_display.end(); itr++)
//        for (int i = 0; i < vector_to_display.size(); i++)
            {
                if (itr->price > product.price) product = *itr;
            }
    cout << "The most expensive product: " << product.name;
}
int main()
{
    Product mouse = new_product("hp_mouse", 20.0);
    Product bottle = new_product("muji_bottle", 10.5);
    Product phone = new_product("iphone", 3599.9);
    Product earbud = new_product("samsung", 450.6);
    Product car = new_product("honda", 50000.6);

    vector<Product> product_list;
    product_list.push_back(mouse);
    product_list.push_back(bottle);
    product_list.push_back(phone);
    product_list.push_back(earbud);
    product_list.push_back(car);

    display_expensive(product_list);
    return 0;
}
