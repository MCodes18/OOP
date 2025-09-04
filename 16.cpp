/*Find the sum of digits of a given number. (Example: input 1234 → output
 10)*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    int sum = 0;
    int dig;
    cout << "Enter a number to calculate the sum of the digits: " << endl;
    cin >> a;
    while (a != 0)
    {
        dig = a % 10;
        sum = sum + dig;
        a = a / 10;
    }
    cout << "The sum of the digits of the number is: " << sum << endl;
    return 0;
}