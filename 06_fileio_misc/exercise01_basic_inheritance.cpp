//1. **Basic Inheritance**
//
//   * Create a base class `Shape` with `area()` and `perimeter()` functions.
//   * Derive `Rectangle` and `Circle` classes that override those functions.
//   * Demonstrate polymorphism using a `Shape*` array.
#include <iostream>

using namespace std;

class Shape
{
public:

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle : public Shape
{
public:
    Rectangle(double w, double h): width(w), height(h){cout << "Rectangle created\n";}

    double area() const override {return width * height;}
    double perimeter() const override {return 2 * (width + height);}

private:
    double width;
    double height;

};
class Circle : public Shape
{
public:
    Circle(double r): radius(r) {cout << "Circle created.\n";}

    double area() const override {return 3.14159 * radius * radius;}
    double perimeter() const override {return 2 * 3.14159 * radius;}

private:
    double radius;
};
int main()
{
    Shape* shapes[2]; //array of shape pointers

    shapes[0] = new Circle(7);
    shapes[1] = new Rectangle(5, 10);

    for (int i = 0; i < 2; ++i)
    {
        cout << "Shape " << i + 1 << ":\n";
        cout << "  Area = " << shapes[i]->area() << endl;
        cout << "  Perimeter = " << shapes[i]->perimeter() << endl;
        cout << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        delete shapes[i];
    }
}
