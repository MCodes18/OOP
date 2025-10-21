/*Create a program that demonstrates multiple inheritance. Example: A class
SportsPerson inherits from both Person and Athlete. Explain what ambiguity
arises and how you resolved it using scope resolution or virtual base classes.*/
#include <iostream>
#include <string>
using namespace std;
class Person // base class
{
protected:
    string name;
    int age;

public:
    void setp(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayp()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};
class Athlete // another base class
{
protected:
    string sport;
    int medals;

public:
    void seta(string s, int m)
    {
        sport = s;
        medals = m;
    }
    void displaya()
    {
        cout << "Sport: " << sport << " Medals won: " << medals << endl;
    }
};
class SportsPerson : public Person, public Athlete // derived class getting info from both base classes
{
private:
    string country;

public:
    void setsp(string c)
    {
        country = c;
    }
    void displayall() // displaying all information
    {
        cout << "Details: " << endl;
        displayp();
        displaya();
        cout << "Country: " << country << endl;
    }
};
int main()
{
    SportsPerson s1;
    s1.setp("Michael Phelps", 40);
    s1.seta("Swimming", 28);
    s1.setsp("America");
    s1.displayall();
    return 0;
}