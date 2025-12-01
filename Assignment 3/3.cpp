/*Detect Cycle in Directed Graph: Using adjacency list (unordered map<int, std::vector<int>>)
and DFS, detect whether a cycle exists in a directed graph.*/
#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, unordered_map<int, vector<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &recStack)
{
    visited[node] = true;
    recStack[node] = true; // Marking the node as visited and as path of the current DFS path

    for (int neighbour : adj[node])
    { // exploring the neighbours based on whether they have been visited
        if (!visited[neighbour])
        {
            if (dfs(neighbour, adj, visited, recStack))
                return true; // going deeper to see if node forms a cycle
        }
        else if (recStack[neighbour])
        {
            return true; // node is already visited and in the stack
        }
    }
    recStack[node] = false; // removing the node from the stack
    return false;           // if cycle is not present
}

bool cycle(unordered_map<int, vector<int>> &adj, int n) // to check every disconnected component
{
    unordered_map<int, bool> visited;
    unordered_map<int, bool> recStack;

    for (int i = 0; i < n; i++)
    { // checking if the node forms cycle  through recursion of dfs
        if (!visited[i])
        {
            if (dfs(i, adj, visited, recStack))
                return true;
        }
    }
    return false;
}

int main()
{
    unordered_map<int, vector<int>> adj;
    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {0};
    adj[3] = {4};

    int n = 5; // number of nodes

    if (cycle(adj, n))
    {
        cout << "Cycle detected." << endl;
    }
    else
    {
        cout << "No cycle present" << endl;
    }
    return 0;
}