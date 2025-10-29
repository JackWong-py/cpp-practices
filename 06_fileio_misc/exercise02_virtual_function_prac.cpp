//2. **Virtual Function Practice**
//
//   * Create a base class `Animal` with a `speak()` method (virtual).
//   * Derive `Dog`, `Cat`, and `Cow`. Each prints a different sound.
//   * Use an array of `Animal*` to store them and call `speak()` polymorphically.
#include <iostream>

using namespace std;

class Animal
{
public:

    virtual void speak() = 0;//Make a virtual that child class can use the funtion.
};
class Dog : public Animal
{
public:

    void speak() {cout << "Bark!\n";}
};
class Cat : public Animal
{
public:

    void speak() {cout << "Meow~\n";}
};
class Cow : public Animal
{
public:

    void speak() {cout << "Moo~\n";}
};
int main()
{
    Animal* animals[3];

    animals[0] = new Cat;
    animals[1] = new Dog;
    animals[2] = new Cow;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Animal " << i + 1 << ":\n";
        animals[i]->speak();
    }

    for (int i = 0; i < 3; ++i)
    {
        delete animals[i];
    }
    return 0;
}
