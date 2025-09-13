/* Print a simple pattern using loops:
 *
 **
 ***
 ****
 *****  */
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++) // to print the rows
    {
        for (int j = 0; j <= i; j++) // to print * in each row
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}