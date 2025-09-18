/*Write a class Car with private members brand and model. Provide
 setter and getter methods. In main(), create an array of cars and use
 the methods to assign and print their values.*/
#include <iostream>
using namespace std;
class Car
{
private:
    string brand;
    string model;

public:
    void set_info(string b, string m)
    {
        this->brand = b;
        this->model = m;
    }
    void get_info(void)
    {
        cout << "---Car Details---" << endl;
        cout << "Car brand: " << brand << " Car model: " << model << endl;
    }
};
int main()
{
    Car cars[3];
    cars[0].set_info("Tata", "Nano");
    cars[1].set_info("Ford", "Endeavour");
    cars[2].set_info("Hyundai", "Santro");
    for (int i = 0; i < 3; i++)
    {
        cars[i].get_info();
    }
    return 0;
}