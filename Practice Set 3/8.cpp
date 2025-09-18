/* Create a class Account with private members accountNumber and
 balance. Provide setter and getter methods. In main(), ensure that
 account details can only be accessed through these methods.*/
#include <iostream>
using namespace std;
class Account
{
private:
    int accountNumber;
    float balance;

public:
    void set_values(int a, float b)
    {
        this->accountNumber = a;
        this->balance = b;
    }
    void get_values(void)
    {
        cout << "---Account Details---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: ₹" << balance << endl;
    }
};
int main()
{
    Account a1;
    a1.set_values(12345, 10000);
    a1.get_values();
    return 0;
}