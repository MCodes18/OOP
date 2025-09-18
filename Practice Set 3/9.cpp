/*Write a class Temperature with a private member celsius. Provide
 setCelsius() and getFahrenheit() methods to convert the stored
 temperature to Fahrenheit.*/
#include <iostream>
using namespace std;
class Temperature
{
private:
    float celsius;

public:
    void setCelsius(float c)
    {
        this->celsius = c;
    }
    void getFahrenheit(void)
    {
        int f = (celsius * 1.8) + 32;
        cout << "The Fahrenheit value is " << f << endl;
    }
};
int main()
{
    Temperature t1;
    t1.setCelsius(0);
    t1.getFahrenheit();
    return 0;
}