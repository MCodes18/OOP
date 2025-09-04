/*Write a program to find the greatest common divisor (GCD) of two num
bers using a loop.*/
#include <iostream>
using namespace std;
int main()
{
    int gcd, n1, n2;
    cout << "Enter two integers to find the greatest common divisor:";
    cin >> n1 >> n2;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The greatest common divisor for " << n1 << " and " << n2 << " is " << gcd << endl;
    return 0;
}