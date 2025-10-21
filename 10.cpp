/*Design a simple example that demonstrates abstract classes and pure virtual
functions. Create a base class Shape with a pure virtual function area() and
derive Circle and Square classes. Explain why abstract classes are useful in
large-scale software design.*/
#include <iostream>
using namespace std;
class Shape
{ // base class
public:
    virtual void area() const = 0; // Virtual function created with no definition
};
class Circle : public Shape
{ // Creating a derived class Circle
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    void area() const override
    {
        cout << "Area of the circle is: " << 3.14 * radius * radius << endl;
    }
};
class Square : public Shape
{ // Another derived class- Square
private:
    double side;

public:
    Square(double s)
    {
        side = s;
    }
    void area() const override
    {
        cout << "Area of the square is: " << side * side << endl;
    }
};
int main()
{
    Shape *shapeptr;
    Circle c(3);
    Square s(4);
    shapeptr = &c;    // Pointing to circle
    shapeptr->area(); // Calling the area function
    shapeptr = &s;    // Pointing to square
    shapeptr->area(); // Calling the area of square function
    return 0;
}