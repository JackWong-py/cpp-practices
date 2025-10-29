//4. **Abstract Class**
//
//   * Create an abstract class `Employee` with pure virtual `calculatePay()`.
//   * Derive `HourlyEmployee` and `SalariedEmployee` and compute their pay differently.
#include <iostream>
#include <vector>

using namespace std;

class Employee
{
public:
    Employee(string n): name(n) {cout << "Employee: " << name << " created.\n";}
    virtual ~Employee(){cout << "Employee: " << name << " destroyed.\n";}
    virtual int calculate_pay() const = 0;

    string get_name(){return name;}

protected:
    string name;
};
class HourlyEmployee: public Employee
{
public:
    HourlyEmployee(string n, int h, int w): Employee(n), hourly_salary(h), working_hour(w)
    {
        cout << "Hourly employee " << name << " created.\n";
    }
    ~HourlyEmployee()
    {
        cout << "Hourly employee " << name << " destroyed.\n";
    }

    void working(int hour){working_hour += hour; cout << "Total working hour update.\n";}
    int calculate_pay() const override
    {
        return hourly_salary * working_hour;
    }

private:
    int hourly_salary;
    int working_hour;
};
class SalariedEmployee: public Employee
{
public:
    SalariedEmployee(string n, int m, int mc): Employee(n), monthly_salary(m), mc_day(mc)
    {
        cout << "Salaried employee " << name << " created.\n";
    }
    ~SalariedEmployee()
    {
        cout << "Salaried employee " << name << " destroyed.\n";
    }

    void mc(int day){mc_day += day; cout << "Total MC day updated.\n";}
    int calculate_pay() const override
    {
        return monthly_salary - (mc_day * (monthly_salary / 30));
    }
private:
    int monthly_salary;
    int mc_day;
};
int main()
{
    vector<Employee*> employees;

    cout << "\n---- Create Employee ----\n";
    SalariedEmployee emp1("Jack", 5000, 0);
    SalariedEmployee emp2("Rachel", 10000, 2);
    HourlyEmployee emp3("Andrew", 20, 0);

    employees.push_back(&emp1);
    employees.push_back(&emp2);
    employees.push_back(&emp3);

    cout << "\n---- Employee Working ----\n";
    emp1.mc(5);
    emp2.mc(2);
    emp3.working(20);
    emp1.mc(1);

    cout << "\n---- Calculate Salary ----\n";
    for (auto e : employees)
    {
        cout << "Employee: " << e->get_name() << endl;
        cout << " Total Salary: " << e->calculate_pay() << '\n' << endl;
    }
}
