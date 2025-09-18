/* Define a class BankAccount with a private member balance. Provide
 methods setBalance() and getBalance() to update and view the
 balance. Ensure that negative values cannot be assigned.*/
#include <iostream>
using namespace std;
class BankAccount
{
private:
    float balance = 0;

public:
    void setBalance(float b)
    {
        if (b >= 0)
        {
            this->balance = b;
        }
        else
        {
            cout << "Invalid balance. Please enter again." << endl;
        }
    }
    void getBalance(void)
    {
        cout << "The balance is " << balance << endl;
    }
};
int main()
{
    BankAccount b1;
    b1.setBalance(1000);
    b1.getBalance();
    return 0;
}