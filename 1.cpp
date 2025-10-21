/*Create a class that behaves like a simple list in Python. It should support adding,
removing, displaying, and getting the size of the list. Explain why you used con-
structors and any operator overloading (if used).*/
#include <iostream>
using namespace std;
class list
{
private:
    int *arr;
    int size;
    int length;

    void resize()
    {
        int newSize = size * 2; // doubling the size to ensure less amount of resize and making it time efficient.
        int *arr1 = new int[newSize];
        for (int i = 0; i < length; i++)
        {
            arr1[i] = arr[i]; // Initialising an array with dynamically allocated size, if the size has reached its limit, it gets doubled and the values of the array gets stored in a temp array and then replaced with the main name.
        }
        delete[] arr;
        arr = arr1;
        size = newSize;
    }

public:
    list(int s = 10) // Initialise the main array with a random size.
    {
        size = s;
        length = 0;
        arr = new int[size];
        cout << "A list of size " << size << " has been created." << endl;
    }
    void append(int n)
    {
        if (length == size)
        {
            resize(); // If the array is full
        }
        arr[length++] = n; // Else if increase the size and add the value towards the end
    }
    void insert(int n, int index)
    {
        if (index < 0 || index > length)
        {
            cout << "Invalid index. Try again." << endl;
            return;
        }
        if (length == size)
            resize();
        for (int i = length; i > index; i--)
        {
            arr[i] = arr[i - 1]; // We shift the values of the array at the second half (index to length) to make space for the new value needed at the index specified.
        }
        arr[index] = n; // We add the value and hence increase the length of the array.
        length++;
    }
    void remove(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index. Try again." << endl;
            return;
        }
        for (int i = index; i < length - 1; i++)
        {
            arr[i] = arr[i + 1]; // We shift the array here to its next element from the index specified and eventually deleting the value needed to removed.
        }
        length--;
    }
    void display()
    {
        cout << "Following are the list contents: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " "; // simple for loop to display the contents of the list
        }
        cout << endl;
    }
    void getsize()
    {
        cout << "Size of the list is: " << length << endl;
    }
    ~list()
    {
        cout << "List is destroyed." << endl; // To ensure the array dynamically allocated is properly freed.
        delete[] arr;
    }
};
int main()
{
    list l1(5);
    l1.append(10);
    l1.append(20);
    l1.append(30);
    l1.append(40);
    l1.append(50);
    l1.display();
    l1.insert(60, 2);
    l1.display();
    l1.remove(3);
    l1.display();
    l1.getsize();
    return 0;
}