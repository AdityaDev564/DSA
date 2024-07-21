#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to detect cycle in an undirected graph.
bool DetectCycle(int node, int parent, vector<int> adj[], vector<bool> &visited)
{
    visited[node] = 1;
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (parent == adj[node][j])
            continue;
        if (visited[adj[node][j]] == 1)
            return 1;
        if (DetectCycle(adj[node][j], node, adj, visited))
            return 1;
    }
    return 0;
}
bool isCycle(int v, vector<int> adj[])
{
    // Code here
    vector<bool> visited(v, 0);
    // Visit all unvisited node
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] && DetectCycle(i, -1, adj, visited))
            return 1;
    }
    return 0;
}

int main()
{

    return 0;
}