/*Design a class that mimics a dictionary or map functionality — where you
can store key-value pairs, search for a key, and display all pairs. Explain why
encapsulation is important in this implementation.*/
#include <iostream>
#include <string>
using namespace std;

class dictionary
{
private:
    string *key; // to store keys and values in an array of strings
    string *value;
    int size;
    int count; // for number of pairs present
public:
    dictionary(int s = 5)
    {
        size = s;
        count = 0;
        key = new string[size];
        value = new string[size];
    }
    void resize()
    {
        int newsize = size * 2;
        string *key1 = new string[newsize];
        string *value1 = new string[newsize];
        for (int i = 0; i < count; i++)
        {
            key1[i] = key[i];
            value1[i] = value[i];
        }
        delete[] key;
        delete[] value;
        key = key1;
        value = value1;
        size = newsize;
    }
    void add(string k, string v)
    { // to add a new pair
        for (int i = 0; i < count; i++)
        {
            if (key[i] == k)
            {
                value[i] = v; // reassigning the value if the key already exists
                cout << "Updated the value for existing key " << k << endl;
                return;
            }
        }
        if (count == size)
        {
            resize(); // If the array is full, it gets resized to accomodate the new pair.
        }
        key[count] = k;
        value[count] = v;
        count++;
    }
    void get(string k)
    {
        for (int i = 0; i < count; i++)
        {
            if (key[i] == k)
            {
                cout << value[i] << " is present at key " << k << endl; // If the key is found the value is presented else, user gets prompted.
                return;
            }
        }
        cout << "Given key is not found." << endl;
    }
    void display()
    {
        cout << "The dictionary contents: " << endl;
        for (int i = 0; i < count; i++)
        { // Displaying the stored pairs and the values contained
            cout << key[i] << " : " << value[i] << endl;
        }
    }
    void paircount()
    {
        cout << "The number of pairs stored is " << count << endl;
    }
    ~dictionary()
    { // Destructor to free the existing memory occupied by the object.
        delete[] key;
        delete[] value;
        cout << "The dictionary has been destroyed." << endl;
    }
};
int main()
{
    dictionary d1;
    d1.add("Name", "Manaswini");
    d1.add("School", "SCDS");
    d1.add("Year", "2");
    d1.get("Name");
    d1.display();
    return 0;
}