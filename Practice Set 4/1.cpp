/*Define a class Rectangle with data members length and breadth.

Write a constructor to initialize both and a member function to calcu-
late the area.*/
#include <iostream>
using namespace std;
class Rectangle
{
    float length;
    float breadth;

public:
    Rectangle(float l, float b)
    {
        this->length = l;
        this->breadth = b;
    }
    void area(void)
    {
        cout << "The area of the rectangle is " << length * breadth << endl;
    }
};
int main()
{
    Rectangle r1(3, 4), r2(5, 6);
    r1.area();
    r2.area();
    return 0;
}