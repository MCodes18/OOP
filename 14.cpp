/*Print all prime numbers between 1 and 100.*/
#include <iostream>
using namespace std;
int main()
{
    cout << "The prime numbers between 1 and 100 are:" << endl;
    for (int i = 2; i <= 100; i++)
    {
        int j;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > i / 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}