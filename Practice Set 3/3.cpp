/* Write a program that defines a class Book with private members title
 and price. Implement setters and getters for both members, and print
 the details of the book object.*/
#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    float price;

public:
    void set_info(string b, float p)
    {
        this->title = b;
        this->price = p;
    }
    void get_info(void)
    {
        cout << "Book title: " << title << "  Book's price:" << price << endl;
    }
};
int main()
{
    Book b1, b2;
    b1.set_info("Harry Potter", 799);
    b2.set_info("Pollyanna", 499);
    b1.get_info();
    b2.get_info();
    return 0;
}