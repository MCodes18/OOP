/*Print the multiplication table of a given number using a do-while loop.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to find its multiplication table:";
    cin >> a;
    int i = 1;
    do
    {
        cout << a * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}