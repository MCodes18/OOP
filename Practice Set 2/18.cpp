/* Print the Fibonacci sequence up to N terms using a for loop.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0, b = 1, c;
    cout << "Enter the number of terms upto which the Fibonacci sequence should be generated: ";
    cin >> n;
    if (n >= 1)
    {
        cout << a << " ";
    }
    if (n >= 2)
    {
        cout << b << " ";
    }
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}