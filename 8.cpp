/*Find the sum of the first n natural numbers.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number to find sum of the natural numbers till it:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the natural numbers till the number " << n << " is " << sum << endl;
    return 0;
}