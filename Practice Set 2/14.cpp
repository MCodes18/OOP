/*Write a program to find the largest digit in a number using a do-while
 loop.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer to find its largest digit:";
    cin >> n;
    int rem, digit = 0;
    do
    {
        rem = n % 10;
        if (rem > digit) // check whether the reminder of the number is greater than the digit
        {
            digit = rem;
        }
        n = n / 10;
    } while (n != 0);
    cout << "The largest digit of the given integer is " << digit << endl;
    return 0;
}