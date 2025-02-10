#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> adj_list[100];
bool vis[100];
int parent[100];
bool cycle;

void DFS(int src)
{
    vis[src] = true;
    for(int child : adj_list[src])
    {
        if(vis[child] && parent[src] != child)
            cycle = true;
        if(!vis[child])
        {
            parent[child] = src;
            DFS(child);
        }
    }
}
int main()
{

    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            DFS(i);
        }
    }

    (cycle) ? cout << "Cycle Detected" : cout<<"No Cycle";
    return 0;
}