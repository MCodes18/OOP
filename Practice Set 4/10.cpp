/* Create a class Fraction with numerator and denominator. Overload
 constructors to:
 • Initialize fraction as 0/1.
 • Initialize with numerator only (denominator = 1).
 • Initialize with numerator and denominator.
 Also, add a member function to reduce the fraction to simplest form*/
#include <iostream>
using namespace std;
class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
    Fraction(int n)
    {
        numerator = n;
        denominator = 1;
    }
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
    void simplify(Fraction &n)
    {
        int gcd;
        for (int i = 1; i <= n.numerator && i <= n.denominator; i++)
        {
            if (n.numerator % i == 0 && n.denominator % i == 0)
            {
                gcd = i;
            }
        }
        n.numerator = n.numerator / gcd;
        n.denominator = n.denominator / gcd;
    }
    void display()
    {
        cout << "The numerator is: " << numerator << " The denominator is: " << denominator << endl;
    }
};
int main()
{
    Fraction f1, f2(3), f3(6, 9);
    f1.display();
    f2.display();
    f3.display();
    f3.simplify(f3);
    f3.display();
    return 0;
}