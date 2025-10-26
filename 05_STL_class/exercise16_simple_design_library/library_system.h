#include <vector>
#include <string>
#ifndef LIBRARY_SYSTEM_H_INCLUDED
#define LIBRARY_SYSTEM_H_INCLUDED
using namespace std;

struct Book
{
    string title;
    string author;
    int year;
};
void add_book(vector<Book> &library_system);
void search_book(const vector<Book> &library, string book_title);
void display_all(const vector<Book> &library);

#endif // LIBRARY_SYSTEM_H_INCLUDED
