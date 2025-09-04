/*Write a program to print the multiplication table of a given number using
a for loop.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to generate its multiplication table:" << endl;
    cin >> a;
    cout << "The table is:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << a * i << endl;
    }
    return 0;
}