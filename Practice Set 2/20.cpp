/*Write a program to keep taking marks as input until the user enters
 −1, then print the average of the entered marks.*/
#include <iostream>
using namespace std;
int main()
{
    int count = 0, mark, sum = 0;
    int avg;
    while (1)
    {
        cout << "Keep entering marks to calculate the average of it. To exit the program, enter -1: ";
        cin >> mark;
        if (mark == -1)
        {
            avg = sum / count;
            cout << "The average of the marks given is " << avg << ". Thank you." << endl;
            break;
        }
        sum = sum + mark;
        count++;
    }
    return 0;
}