/*Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
C (70–79), D (60–69), F (below 60).*/
#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your marks to find out your grade:";
    cin >> mark;
    if (mark >= 90)
    {
        cout << "The grade is A." << endl;
    }
    else if (mark >= 80 && mark <= 89)
    {
        cout << "The grade is B." << endl;
    }
    else if (mark >= 70 && mark <= 79)
    {
        cout << "The grade is C." << endl;
    }
    else if (mark >= 60 && mark <= 69)
    {
        cout << "The grade is D." << endl;
    }
    else
    {
        cout << "The grade is F." << endl;
    }
    return 0;
}