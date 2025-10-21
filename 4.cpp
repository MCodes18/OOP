/*Implement a program demonstrating multilevel inheritance. For example: Person
→ Employee → Manager. Show how data and functions are passed through the
inheritance chain. Explain why access specifiers matter here.*/
#include <iostream>
#include <string>
using namespace std;
class Person
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
class Employee : public Person
{ // first level of inheritance
protected:
    int id;
    float salary;

public:
    void sete(int i, float s)
    {
        id = i;
        salary = s;
    }
    void displaye()
    {
        cout << "Employee ID: " << id << " Salary: " << salary << endl;
    }
};
class Manager : public Employee
{ // second level of inheritance
private:
    string dept;

public:
    void setm(string d)
    {
        dept = d;
    }
    void displaym()
    {
        cout << "Department: " << dept << endl;
    }
    void displayall()
    {
        cout << "Full details" << endl;
        displayp();
        displaye();
        displaym();
    }
};
int main()
{
    Manager m1;
    m1.setp("Raj", 35);
    m1.sete(100, 70000);
    m1.setm("IT");
    m1.displayall();
    return 0;
}