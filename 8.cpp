/*Create a program to demonstrate function overloading and overriding. Show
how compile-time and run-time polymorphism differ. Explain when each is useful
in real-world applications.*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;
    int age;

public:
    void setInfo(string n, int a)
    { // overloading the same function with different parameters
        name = n;
        age = a;
    }
    void setInfo(string n)
    {
        name = n;
        age = 18;
    }
    virtual void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};
class CollegeStudent : public Student
{ // derived class
private:
    string college;
    float gpa;

public:
    void setc(string c, float g)
    {
        college = c;
        gpa = g;
    }
    void display() override
    { // function overriding (same function name is present in the base class)
        cout << "College Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "College: " << college << endl;
        cout << "GPA: " << gpa << endl;
    }
};
class SchoolStudent : public Student
{
private:
    string school;
    int grade;

public:
    void sets(string s, int g)
    {
        school = s;
        grade = g;
    }
    void display() override
    {
        cout << "School Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "School: " << school << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main()
{
    Student s1; // Function overloading-> Compile time polymorphism
    s1.setInfo("Manas");
    s1.display();
    s1.setInfo("Wini", 21);
    s1.display();
    Student *sPtr; // Run time polymorphism
    CollegeStudent cs;
    cs.setInfo("Raj", 22);
    cs.setc("Sai University", 9.1);
    SchoolStudent ss;
    ss.setInfo("Preethi");
    ss.sets("ABC School", 10);
    sPtr = &cs;
    sPtr->display(); // Calling the virtual function and displaying the output
    sPtr = &ss;
    sPtr->display();
    return 0;
}
