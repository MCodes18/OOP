/* Write a C++ program with a class Time having data members hours,
 minutes, seconds. Overload constructors to:
 • Initialize all with zero.
 • Initialize hours and minutes, seconds defaulted to zero.
 • Initialize all three.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 00;
        minutes = 00;
        seconds = 00;
    }
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
        seconds = 00;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << "The time is " << hours << ":" << minutes << ":" << seconds << endl;
    }
};
int main()
{
    Time t1, t2(06, 05), t3(14, 56, 34);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}