#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 5;
vector<int> adj_list[N];
bool vis[N];

void DFS(int src)
{
    cout << src << " ";
    vis[src] = true;

    // for (int child : adj_list[src])
    // {
    //     if (!vis[child])
    //         DFS(child);
    // }

    for (int i = 0; i < adj_list[src].size(); i++)
    {
        int child = adj_list[src][i];
        if (!vis[child])
            DFS(child);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    DFS(0);

    return 0;
}