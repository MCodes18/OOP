/*Write a program to calculate the simple interest. Formula: SI = P× R× T/100*/
#include <iostream>
using namespace std;
int main()
{
    int p, t;
    float r;
    float si;
    cout << "Enter the principal amount, interest rate(in percentage) and time(in years) in that order to calculate the simple interest: " << endl;
    cin >> p >> r >> t;
    si = (p * (r / 100) * t) / 100;
    cout << "The simple interest(in rupees) is: " << si << endl;
    return 0;
}