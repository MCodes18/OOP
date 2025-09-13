/*Print the digits of a number in reverse order using a do-while loop.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to reverse its digits:";
    cin >> a;
    int dig, rev = 0;
    do
    {
        dig = a % 10;
        rev = rev * 10 + dig;
        a = a / 10;
    } while (a != 0);
    cout << "The reverse of the input is: " << rev << endl;
    return 0;
}