/*Check whether a given number is a palindrome or not. (Example: 121 is
 palindrome, 123 is not.)*/
#include <iostream>
using namespace std;
int main()
{
    int a, dig;
    int rev = 0;
    cout << "Enter a number to check if its a palindrome:";
    cin >> a;
    int num = a;
    while (a != 0)
    {
        dig = a % 10;
        rev = rev * 10 + dig;
        a = a / 10;
    }
    if (rev == num)
    {
        cout << "The entered number is a palindrome." << endl;
    }
    else
    {
        cout << "The entered number is not palindrome." << endl;
    }
    return 0;
}