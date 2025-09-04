/*Read three integers and print the largest number.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 integers to find which is the largest:" << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the largest." << endl;
    }
    if (b > a && b > c)
    {
        cout << b << " is the largest." << endl;
    }
    if (c > a && c > b)
    {
        cout << c << " is the largest." << endl;
    }
    return 0;
}