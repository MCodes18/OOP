/*Write a program to find the GCD (Greatest Common Divisor) of two
 numbers using a while loop.*/
#include <iostream>
using namespace std;
int main()
{
    int gcd, a, b;
    cout << "Enter two numbers to find it GCD:" << endl;
    cin >> a >> b;
    int i = 1;
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        i++;
    }
    cout << "The GCD of the given two numbers is: " << gcd << endl;
    return 0;
}