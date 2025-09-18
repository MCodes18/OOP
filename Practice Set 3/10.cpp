/*Define a class University with private members name and ranking.
 Provide setters and getters. Demonstrate in main() that private data
 members cannot be accessed directly, but only via the methods.*/
#include <iostream>
using namespace std;
class University
{
private:
    string name;
    int ranking;

public:
    void set_values(string n, int r)
    {
        this->name = n;
        this->ranking = r;
    }
    void get_values(void)
    {
        cout << "University Name: " << name << endl;
        cout << "University Ranking: " << ranking << endl;
    }
};
int main()
{
    University u1;
    // u1("Sai University", 999);//cant access variable directly
    u1.set_values("Sai University", 999);
    u1.get_values();
    return 0;
}