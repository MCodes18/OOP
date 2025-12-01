/*2. Merge Intervals: Given a list of intervals, merge all overlapping ones using sorting and
std::vector<std::pair<int,int>>.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> merge_intervals(vector<pair<int, int>> &intervals)
{
    if (intervals.empty())
    {
        return {};
    }
    sort(intervals.begin(), intervals.end()); // sorting the numbers within the pairs at first

    vector<pair<int, int>> merged;  // creating a vector called merged to store the sorted contents once overlapping is checked
    merged.push_back(intervals[0]); // Pushing the first pair in

    for (int i = 1; i < intervals.size(); i++)
    {
        pair<int, int> &last = merged.back(); // assigning the first pair pushed in the merge list as last
        pair<int, int> &curr = intervals[i];  // assigning the next pair in the interval list as current so that overlapping can be checked and pushed into merged accordingly

        if (curr.first <= last.second)
        { // overlapping condition
            last.second = max(last.second, curr.second);
        }
        else
        {
            merged.push_back(curr); // pushing the next pair into the merged list
        }
    }
    return merged; // returning the merged list
}

int main()
{
    vector<pair<int, int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 16}};
    vector<pair<int, int>> result = merge_intervals(intervals);
    cout << "The merged intervals are: " << endl;
    for (auto &p : result)
    {
        cout << "[" << p.first << ", " << p.second << "] ";
    }
    return 0;
}