/*Check whether a number is prime or not.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to check if its prime or not:" << endl;
    cin >> a;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << "Number is not prime." << endl;
            return 0;
        }
    }
    cout << "Number is prime." << endl;
    return 0;
}