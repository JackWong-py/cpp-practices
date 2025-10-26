#include <iostream>
#include "library_system.h"
using namespace std;

//Add book function allow user to add a book into a vector. It does now return any value.
void add_book(vector<Book> &library_system)
{
    Book new_book;
    cout << "Enter book title: " << endl;
    cin.ignore();
    getline(cin, new_book.title, '\n');
    cout << "Enter book author: " << endl;
    getline(cin, new_book.author, '\n');
    cout << "Enter book year: " << endl;
    cin >> new_book.year;
    library_system.push_back(new_book);
    cout << "Book " << new_book.title << " added successfully.\n" << endl;
}
//Search book function take book title as argument, and print out the author and year of the book.
void search_book(const vector<Book> &library, string book_title)
{
    if (library.size() == 0) cout << "There is no book inside library.\n";
    else
    {
        for (Book b : library)
        {
            if (b.title == book_title)
            {
                cout << "Book found. " << endl;
                cout << "Book author: " << b.author << endl;
                cout << "Book year: " << b.year << endl;
                break;
            }
            else cout << "Book " << book_title << " not found!\n" << endl;
        }
    }

}
//Display all function iterate through the vector and print out all the book details.
void display_all(const vector<Book> &library)
{
    if (library.size() == 0) cout << "There is no book inside library.\n";
    else
        cout << "\n---- Books details in current library ----\n";
        for (int i = 0; i < library.size(); ++i)
        {
            cout << "\n---- Book" << i + 1 << "----\n";
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "Year: " << library[i].year << endl;
        }
}
