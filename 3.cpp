/*Write a program to demonstrate single inheritance. Create a base class Shape
and a derived class Rectangle. Include methods to calculate area and perimeter.
Explain why inheritance is preferred over writing separate classes for each shape.*/
#include <iostream>
using namespace std;
class shape
{ // base class with its parameters
protected:
    float length;
    float breadth;

public:
    void set_values(float l, float b)
    {
        length = l;
        breadth = b;
    }
};
class rectangle : public shape
{ // Single inheritance
public:
    void area()
    {
        cout << "Area of the rectangle is " << length * breadth << endl;
    }
    void perimeter()
    {
        cout << "Perimeter of the rectangle is " << 2 * (length + breadth) << endl;
    }
    void display()
    {
        cout << "Rectangle's length: " << length << endl;
        cout << "Rectangle's breadth: " << breadth << endl;
    }
};
int main()
{
    rectangle r1;
    r1.set_values(6, 4);
    r1.display();
    r1.area();
    r1.perimeter();
    return 0;
}