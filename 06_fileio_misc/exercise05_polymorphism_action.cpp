//5. **Polymorphism in Action**
//
//   * Build a `vector<Shape*>` that holds circles, rectangles, and triangles.
//   * Loop through it and compute total area dynamically (via virtual `area()`).
#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
    virtual ~Shape(){}
    virtual double area() = 0;
};
class Circles : public Shape
{
public:
    Circles(double r): radius(r){}

    virtual double area() {return 3.14159265359 * radius * radius;}

private:
    double radius;
};
class Rectangles : public Shape
{
public:
    Rectangles(double w, double h): width(w), height(h){}

    virtual double area() {return width * height;}

private:
    double width;
    double height;
};
class Triangles : public Shape
{
public:
    Triangles(double w, double h): width(w), height(h){}

    virtual double area() {return width * height / 2;}

private:
    double width;
    double height;
};

int main()
{
    vector<Shape*> shapes;
    Triangles shp1(20.0, 10.5);
    Circles shp2(5.5);
    Rectangles shp3(5, 10.8);

    shapes.push_back(&shp1);
    shapes.push_back(&shp2);
    shapes.push_back(&shp3);

    for (auto s : shapes)
    {
        cout << "Area: " << s->area() << endl;
    }
    return 0;
}
