//18. **Encapsulation Practice** – Redesign your `Book` struct as a `class` with private attributes and public gettersetter functions.
//
//Demonstrate encapsulation.
#include <iostream>

using namespace std;

class Book
{
public:
    Book(string title, string author, int year);

    //getter function
    string get_title() {return title;}
    string get_author() {return author;}
    int get_year() {return year;}

    //setter function
    void set_title(string new_title) {title = new_title;}
    void set_author(string new_author) {author = new_author;}
    void set_year(int new_year) {year = new_year;}

    //display function
    void display_book()
    {
        cout << "Book title: " << title << endl;
        cout << "Book author: " << author << endl;
        cout << "Book year: " << year << endl;
    }
private:
    string title;
    string author;
    int year;
};
Book::Book(string t, string a, int y)
{
    title = t;
    author = a;
    year = y;
}
int main()
{
    Book halowa("Halowa", "Rachel", 2025);
    Book baby("Babyyy", "Jack", 1998);

    cout << halowa.get_title() << endl;
    cout << baby.get_author() << endl;

    halowa.set_author("Rachel");
    cout << halowa.get_author() << endl;

    halowa.display_book();
}
