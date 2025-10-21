/*Write a program where two different class objects share data using a friend
function. For example, a class Student and a class Sports share marks and
scores. Explain why the friend function was needed instead of a member function.*/
#include <iostream>
using namespace std;
class Sports; // As we are calling a friend function, for reference its better to call the name of both classes at first.
class Student
{
private:
    int marks;

public:
    void setmarks(int m)
    {
        marks = m;
    }
    friend void display(Student s, Sports sp); // calling friend function here to link between two classes.
};
class Sports
{
private:
    int score;

public:
    void setscore(int s)
    {
        score = s;
    }
    friend void display(Student s, Sports sp); // calling friend function here to link between two classes.
};
void display(Student s, Sports sp) // Defining the function here
{
    cout << "Marks: " << s.marks << endl;
    cout << "Sports score: " << sp.score << endl;
}
int main()
{
    Student s;
    Sports sp;
    s.setmarks(90);
    sp.setscore(15);
    display(s, sp);
    return 0;
}