/*Implement all sorting algorithm (Bubble Sort, Insertion Sort, or Selection Sort)
using OOP concepts. Use a class and methods for sorting, displaying, and
inputting data. Explain why object-oriented design improves modularity here.*/
#include <iostream>
using namespace std;
class Sorts
{
private:
    int *arr;
    int size;

public:
    Sorts(int s)
    {
        size = s;
        arr = new int[size];
    }
    void input()
    {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void bubblesort()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "Array sorted by Bubble Sort." << endl;
    }
    void insertionsort()
    {
        for (int i = 1; i < size; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "Array sorted by Insertion Sort." << endl;
    }
    void selectionsort()
    {
        for (int i = 0; i < size - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
        cout << "Array sorted by Selection Sort." << endl;
    }
    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Sorts()
    { // Destructor
        delete[] arr;
    }
};
int main()
{
    Sorts s(5);
    s.input();
    int choice;
    cout << "1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        s.bubblesort();
        break;
    case 2:
        s.insertionsort();
        break;
    case 3:
        s.selectionsort();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    s.display();
    return 0;
}
