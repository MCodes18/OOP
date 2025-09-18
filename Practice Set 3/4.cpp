/*Create a class Rectangle with private data members length and width.
 Write setter and getter methods and calculate the area using them.*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;

public:
    void set_values(float l, float b)
    {
        this->length = l;
        this->breadth = b;
    }
    void get_values(void)
    {
        cout << "The rectangle's length and breadth are " << length << " and " << breadth << endl;
    }
    void Area(Rectangle r)
    {
        cout << "The area of this rectangle is " << r.length * r.breadth << endl;
    }
};
int main()
{
    Rectangle r1, r2;
    r1.set_values(4, 5);
    r2.set_values(7, 8);
    r1.get_values();
    r2.get_values();
    r1.Area(r1);
    r2.Area(r2);
    return 0;
}