/*3. Top K Frequent Elements: Find the top k most frequent numbers from an array using
unordered map and priority queue.*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> topK_frequent(vector<int> &nums, int k)
{
    unordered_map<int, int> freq;

    for (int x : nums)
    {
        freq[x]++; // Creating a key value pair of the number and its frequency
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;

    for (auto &p : freq)
    {
        minheap.push({p.second, p.first}); // Pushing into the minheap the frequency and then the number corresponding to it

        if (minheap.size() > k)
        {
            minheap.pop(); // keeping the minheap till the top k value
        }
    }

    vector<int> result; // Getting the result from the min heap
    while (!minheap.empty())
    {
        result.push_back(minheap.top().second); // returning only the numbers within top k without the frequencies
        minheap.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> nums = {3, 2, 2, 1, 1, 1};
    int k = 2;
    vector<int> result = topK_frequent(nums, k);

    cout << "Top " << k << " frequent elements: " << endl;
    for (int x : result)
        cout << x << " ";
    return 0;
}