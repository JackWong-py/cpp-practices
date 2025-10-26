//16. **Simple Design Exercise** – Plan and implement a *Book Library System*:
//
//
//
//* `Book` has title, author, year
//
//* Store in `vector<Book>`
//
//* Menu: Add, Search, Display all
#include <iostream>
#include <vector>
#include "library_system.h"

using namespace std;

int main()
{
    vector<Book> library;
    cout << "This is simple library system.\n";

    int option;
    do
    {
        cout << "---- Library System Menu ----" << endl;
        cout << "1) Add book\n";
        cout << "2) Search book\n";
        cout << "3) Display all\n";
        cout << "4) Exit\n";

        cout << "Choose an option: " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            add_book(library);
            break;

        case 2:
        {
            string title;
            cout << "Enter book title: " << endl;
            cin.ignore();
            getline(cin, title, '\n');
            search_book(library, title);
            break;
        }
        case 3:
            display_all(library);
            break;

        case 4:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid option! ";
            cin.ignore();
            cin >> option;
        }
    }while(option != 4);

    return 0;
}
