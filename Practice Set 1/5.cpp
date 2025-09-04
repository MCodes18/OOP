/*Take an integer and check whether it is positive, negative, or zero.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to check if its positive, negative or zero:" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << a << " is positive.";
    }
    if (a < 0)
    {
        cout << a << " is negative.";
    }
    if (a == 0)
    {
        cout << a << " is zero.";
    }
}