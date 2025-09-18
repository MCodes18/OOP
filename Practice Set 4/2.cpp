/*Write a program to create a class Student with data members name,

age, and marks. Implement both a default constructor and a parame-
terized constructor to initialize the data.*/
#include <iostream>
using namespace std;
class Student
{
    string name;
    int age;
    float marks;

public:
    Student()
    {
        this->name = "Unknown";
        this->age = 0;
        this->marks = 0.0;
    }
    Student(string n, int a, float m)
    {
        this->name = n;
        this->age = a;
        this->marks = m;
    }
    void get_details(void)
    {
        cout << name << endl
             << age << endl
             << marks << endl;
    }
};
int main()
{
    Student s1("Manas", 21, 100);
    s1.get_details();
    return 0;
}