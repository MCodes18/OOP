/*Write a program to find the factorial of a number using a while loop.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to find its factorial:";
    cin >> n;
    int fact = 1, i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    cout << "The factorial of the number is " << fact << endl;
    return 0;
}