/*Take two integers as input and print the larger one using if-else.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 integers to check the larger one: " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is larger than " << b;
    }
    else
    {
        cout << b << " is larger than " << a;
    }
    return 0;
}