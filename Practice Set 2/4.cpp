/*Find the sum of the first N natural numbers (input N) using a for
 loop.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to find the sum of the natural numbers till that point:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the natural numbers till " << n << " is " << sum;
    return 0;
}