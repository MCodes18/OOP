/*Course Schedule (Topological Sort): Determine if all courses can be finished using
Kahn’s algorithm with a queue<int> and adjacency list.*/
#include <bits/stdc++.h>
using namespace std;

bool canFinish(int numCourses, vector<vector<int>> &prereq)
{
    vector<vector<int>> adj(numCourses); // adjacency list
    vector<int> indegree(numCourses, 0); // indegree of each node

    for (auto &p : prereq)
    {
        int course = p[0]; // course to take
        int pre = p[1];    // prerequisites to complete first
        adj[pre].push_back(course);
        indegree[course]++; // increase according to number of prerequisites
    }
    queue<int> q;

    for (int i = 0; i < numCourses; i++)
    { // pushing all of the courses with indegree zero for topological sorting
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    int count = 0; // to count the number of courses that can be finished

    // topological sorting//
    while (!q.empty())
    {
        int curr = q.front();
        q.pop(); // removing the first element with indegree 0
        count++;

        for (int neigh : adj[curr])
        {
            indegree[neigh]--;
            if (indegree[neigh] == 0)
            {
                q.push(neigh); // pushing the next elements with indegree 0 upon removing one
            }
        }
    }
    return (count == numCourses); // to see if we can complete all courses
}

int main()
{
    int numCourses = 4;
    vector<vector<int>> prereq = {
        {1, 0},
        {2, 1},
        {3, 2}};
    if (canFinish(numCourses, prereq))
    {
        cout << "All courses can be finished." << endl;
    }
    else
    {
        cout << "All courses can not be finished (cycle exists)." << endl;
    }
    return 0;
}