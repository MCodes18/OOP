/*Write a class BankAccount with features like deposit(), withdraw(), and display().
Use constructor initialization and show how encapsulation prevents invalid access.
Explain why data hiding is essential in banking systems.*/
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accnumber;
    double balance;

public:
    BankAccount(int acc, double b) // Initialising details with constructor
    {
        accnumber = acc;
        balance = b;
        cout << "An account has been created." << endl;
    }
    void deposit(double n)
    {
        if (n > 0)
        {
            balance = balance + n;
            cout << "Current balance is: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit." << endl;
        }
    }
    void withdraw(double n)
    {
        if (n > 0 && n <= balance)
        {
            balance = balance - n;
            cout << "Current balance is: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
    void display()
    {
        cout << "Account number: " << accnumber << " Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount a1(12345, 10000);
    a1.deposit(500);
    a1.withdraw(1000);
    a1.display();
    return 0;
}