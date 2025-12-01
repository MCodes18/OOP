/*Next Greater Element: For each element in an array, find the next greater element to
its right using a stack.*/
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n, -1); // initialsing the next greater element value to be -1 (not found)
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) // from right to left
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop(); // if element in stack is less than the array element, it gets popped
        }
        if (!st.empty())
        {
            result[i] = st.top(); // the top value consists of the next greater element and is stored in result instead of -1
        }
        st.push(arr[i]); // pushing in the value into the stack to check nge of other element
    }
    return result;
}
int main()
{
    vector<int> arr = {4, 5, 2, 25};
    vector<int> result = nextGreater(arr);
    cout << "The next greater elements of the array elements are: " << endl;
    for (int x : result)
        cout << x << " ";
    return 0;
}