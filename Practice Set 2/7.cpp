/*Check whether a number is prime or not using a for loop.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to check if its prime or not:";
    cin >> a;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            cout << a << " is not a prime number." << endl;
            return 0;
        }
    }
    cout << a << " is a prime number." << endl;
    return 0;
}