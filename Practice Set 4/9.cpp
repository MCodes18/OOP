/*Write a program to create a class Employee with data members name,
 id, and salary. Implement:
 • Aconstructor that initializes name and id only.
 • Aconstructor that initializes all three values.*/
#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
        salary = 0.0;
    }
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }
    void display(void)
    {
        cout << "Employee Information" << endl
             << name << endl
             << id << endl
             << salary << endl;
    }
};
int main()
{
    Employee e1("Manas", 1), e2("Wini", 2, 60000);
    e1.display();
    e2.display();
    return 0;
}