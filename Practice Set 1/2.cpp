/*Read an integer and check whether it is even or odd.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter an integer to check if its even or odd:" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "The number " << a << " is even." << endl;
    }
    else
    {
        cout << "The number " << a << " is odd." << endl;
    }
    return 0;
}