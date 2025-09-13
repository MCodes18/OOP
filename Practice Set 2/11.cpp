/*Write a program to calculate the power of a number (a^b) using a while
 loop.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int result = 1;
    cout << "Enter the number and its power to calculate the result:";
    cin >> a >> b;
    int i = 1;
    while (i <= b)
    {
        result = result * a;
        i++;
    }
    cout << "The result is " << result << endl;
    return 0;
}
