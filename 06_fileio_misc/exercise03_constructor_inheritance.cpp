//3. **Constructor Inheritance**
//
//   * Create a base class `Person(name, age)` and derived class `Student(name, age, gpa)`.
//   * Demonstrate constructor chaining and printing all info.
#include <iostream>

using namespace std;

class Person
{
public:
    Person(string n, int a): name(n), age(a){cout << "Person " << name << " created.\n";}
    ~Person(){cout << "Person " << name << " destroyed.\n";}

protected:
    string name;
    int age;
};
class Student: public Person
{
public:
    Student(string n, int a, double g): Person(n, a), gpa(g){cout << "Student " << name << " created.\n";}
    ~Student(){cout << "Student " << name << " destroyed.\n";}

    void display_name(){cout << " Name: " << name << endl;}
    void display_age(){cout << " Age: " << age << endl;}
    void display_gpa(){cout << " GPA: " << gpa << endl;}

private:
    double gpa;
};


int main()
{
    Student* students[3];

    students[0] = new Student("Jack", 27, 4.0);
    students[1] = new Student("Rachel", 21, 3.9);
    students[2] = new Student("Andrew", 20, 3.2);

    for (int i = 0; i < 3; ++i)
    {
        cout << "Student " << i + 1 << ":\n";
        students[i]->display_name();
        students[i]->display_age();
        students[i]->display_gpa();
    }
    for (int i = 0; i < 3; ++i)
    {
        delete students[i];
    }
}
