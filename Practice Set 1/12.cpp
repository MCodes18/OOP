/*Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
imaginary roots using if-else.)*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    float dis;
    float root1;
    float root2;
    cout << "Enter the coefficients of the quadratic equation ax^2+bx+c=0 from a to c:";
    cin >> a >> b >> c;
    dis = (b * b) - (4 * a * c);
    if (dis > 0)
    {
        root1 = (-b - sqrt(dis)) / (2 * a);
        root2 = (-b + sqrt(dis)) / (2 * a);
        cout << "The roots are real and distinct. They are " << root1 << " and " << root2;
    }
    else if (dis == 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        cout << "The roots are real and equal. They are " << root1 << " and " << root1;
    }
    else
    {
        int dis1 = -dis;
        cout << "The roots are imaginary. The real part:" << -b / (2 * a) << "+-" << sqrt(dis1) / (2 * a) << "i" << endl;
    }
    return 0;
}