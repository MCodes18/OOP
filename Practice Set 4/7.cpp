/* Create a class Distance with data members feet and inches. Imple
ment constructors for:
 • Default initialization.
 • Initialization using feet only.
 • Initialization using feet and inches.
 Also, write a function to display the distance.*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int f)
    {
        feet = f;
        inches = 0.0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void display(void)
    {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};
int main()
{
    Distance d1, d2(3), d3(5, 7.5);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}