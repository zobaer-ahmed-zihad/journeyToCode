#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
bool vis[100];
bool path_vis[100];
bool cycle;

void DFS(int src)
{
    vis[src] = true;
    path_vis[src] = true;

    for (int child : adj_list[src])
    {
        if (vis[child] && path_vis[child])
        {
            cycle = true;
        }
        if (!vis[child])
        {
            DFS(child);
        }
    }
    path_vis[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            DFS(i);
    }
    (cycle) ? cout << "Cycle Detected" : cout << "No Cycle";
    return 0;
}