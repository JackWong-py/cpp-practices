/*8. **Nested Structures**

   * Create a `struct Address` inside `struct Person` (name, city, postal code).
   * Input and print data neatly.*/
#include <iostream>

using namespace std;

struct Person
{
    string name;

    struct Address
    {
        string city;
        string postal_code;
    }address;//create an instance of Address inside Person


};
int main()
{
    Person person1;
    cout << "Name: " << endl;
    getline(cin >> ws, person1.name);
    cout << "City: " << endl;
    getline(cin >> ws, person1.address.city);
    cout << "Postal Code: " << endl;
    getline(cin >> ws, person1.address.postal_code);

    cout << "\n----Person Data----";
    cout << "\nPerson 1 name: " << person1.name;
    cout << "\nPerson 1 city: " << person1.address.city;
    cout << "\nPerson 1 postal code: " << person1.address.postal_code;
    return 0;
}
