/*Write a program to read your name and age, and print them in the format:
Hello <name>, you are <age> years old.*/
#include <iostream>
using namespace std;
int main()
{
    char name[20];
    int age;
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    return 0;
}