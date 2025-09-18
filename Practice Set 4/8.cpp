/*Define a class Car with members brand, model, and price. Overload
constructors to:
 • Initialize brand only.
 • Initialize brand and model.
 • Initialize brand, model, and price*/
#include <iostream>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    float price;

public:
    Car(string b)
    {
        brand = b;
        model = "Unknown";
        price = 0.0;
    }
    Car(string b, string m)
    {
        brand = b;
        model = m;
        price = 0.0;
    }
    Car(string b, string m, float p)
    {
        brand = b;
        model = m;
        price = p;
    }
    void display(void)
    {
        cout << "Brand: " << brand << " Model: " << model << " Price: " << price << endl;
    }
};
int main()
{
    Car c1("Porsche"), c2("Ford", "Endeaveour"), c3("Tata", "Nexon-EV", 1729000);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}