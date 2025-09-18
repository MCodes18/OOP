/*Define a class Employee with private members id and salary. Use
 setters and getters to initialize and display their values. In main(),
 create multiple employees and print their details.*/
#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    float salary;

public:
    void set_info(int i, float s)
    {
        this->id = i;
        this->salary = s;
    }
    void get_info(void)
    {
        cout << "---Employee Details---" << endl;
        cout << "Employee ID: " << id << " Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1, e2, e3;
    e1.set_info(1, 15000);
    e2.set_info(2, 20000);
    e3.set_info(3, 30000);
    e1.get_info();
    e2.get_info();
    e3.get_info();
    return 0;
}