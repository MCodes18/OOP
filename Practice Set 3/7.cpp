/*Implement a class Circle with a private data member radius. Provide
 setters and getters, and an additional method getArea() that uses the
 getter to calculate the area.*/
#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;

public:
    void set_values(float r)
    {
        this->radius = r;
    }
    void get_values(void)
    {
        cout << "The circle's radius is " << radius << endl;
    }
    void getArea(void)
    {
        cout << "The area of the circle is " << 3.14 * radius * radius << endl;
    }
};
int main()
{
    Circle c1;
    c1.set_values(2);
    c1.get_values();
    c1.getArea();
    return 0;
}