/*Create a class Complex with two data members real and imag. Over-
load constructors to:

• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts).*/
#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        this->real = 0.0;
        this->img = 0.0;
    }
    Complex(float r)
    {
        this->real = r;
        this->img = 0.0;
    }
    Complex(float r, float i)
    {
        this->real = r;
        this->img = i;
    }
    void display(void)
    {
        cout << "The complex number is " << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1;
    Complex c2(2);
    Complex c3(3, 4);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}