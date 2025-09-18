/* Design a class Book with attributes title, author, and price. Provide
 constructor overloading to allow creating:
 • Book with title only.
 • Book with title and author.
 • Book with title, author, and price.*/
#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    float price;

public:
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }
    Book(string t)
    {
        title = t;
        author = "Unknown";
        price = 0.0;
    }
    Book(string t, string a)
    {
        title = t;
        author = a;
        price = 0.0;
    }
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "The book information" << endl
             << "Book Title: " << title << endl
             << "Book's Author: " << author << endl
             << "Price: " << price << endl;
    }
};
int main()
{
    Book b1, b2("Pollyanna"), b3("Harry Potter", "JK Rowling"), b4("Power of Subconcious Mind", "Joseph Murphy", 399);
    b1.display();
    b2.display();
    b3.display();
    b4.display();
    return 0;
}