/*Use a for loop to check if a number is a palindrome.*/
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter an integer to check if its a palindrome:";
    cin >> n1;
    n2 = n1;
    int rem, res = 0;
    for (; n2 != 0; n2 /= 10)
    {
        rem = n2 % 10;
        res = res * 10 + rem;
    }
    if (res == n1)
    {
        cout << "Given integer is a palindrome." << endl;
    }
    else
    {
        cout << "Given integer is not a palindrome." << endl;
    }
    return 0;
}