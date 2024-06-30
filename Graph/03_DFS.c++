#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);
    // Traverse all its neighbors
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj, vis, ls);
    }
}
vector<int> dfsOfGraph(int v, vector<int> adj[])
{
    // Code here
    int vis[v] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start, adj, vis, ls);
    return ls;
}

int main()
{

    return 0;
}