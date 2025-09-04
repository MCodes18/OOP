/*Reverse the digits of a given number. (Example: input 1234 → output
 4321)*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    int rem;
    int rev = 0;
    cout << "Enter a number to reverse the digits:";
    cin >> a;
    while (a != 0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    cout << rev;
    return 0;
}