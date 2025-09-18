/* Implement a class BankAccount with data members accountNumber,
 balance. Write multiple constructors for:
 • Default initialization.
 • Initialization with account number only.
 • Initialization with account number and balance.*/
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        balance = 0.0;
    }
    BankAccount(int a)
    {
        accountNumber = a;
        balance = 0.0;
    }
    BankAccount(int a, float b)
    {
        accountNumber = a;
        balance = b;
    }
    void display(void)
    {
        cout << "Account Number: " << accountNumber << endl
             << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount b1, b2(12345), b3(54321, 10000);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}