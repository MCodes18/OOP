/*Take a number as input and check if it is an Armstrong number using
 a while loop.*/
#include <iostream>
#include <cmath>
using namespace std;
int expo(int base, int pow) // to calculate the result of the digit with its count as power
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result = result * base;
    }
    return result;
}
int main()
{
    int num, originalNum, rem, n = 0;
    int result = 0;

    cout << "Enter an integer to check whether it's an Armstrong number:" << endl;
    cin >> num;

    originalNum = num;
    // To count the number of digits present in the integer.
    while (originalNum != 0)
    {
        originalNum = originalNum / 10;
        n++;
    }

    originalNum = num; // resetting the value
    result = 0;

    // to calculate the sum of powers of the given integer
    while (originalNum != 0)
    {
        rem = originalNum % 10;
        result = result + expo(rem, n);
        originalNum = originalNum / 10;
    }

    if (result == num)
    {
        cout << num << " is an Armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}