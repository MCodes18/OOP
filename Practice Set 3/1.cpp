/* Create a class Student with private data members name and age. Write
 setter and getter methods to assign and retrieve their values. Demon
strate their use in main().*/
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    void set_values(string n, int a)
    {
        this->name = n;
        this->age = a;
    }
    void get_values(void)
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};
int main()
{
    Student s1;
    s1.set_values("Manaswini", 21);
    s1.get_values();
    return 0;
}