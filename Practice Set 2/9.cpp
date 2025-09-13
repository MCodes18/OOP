/*Write a program that keeps asking the user for input until they enter
 a negative number (do-while loop).*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    do
    {
        cout << "Keep entering a number. To stop the program, enter a negative number:";
        cin >> a;
    } while (a >= 0);
    if (a < 0)
    {
        cout << "Thank you." << endl;
        return 0;
    }
}