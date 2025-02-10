#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> adj_list[100];
bool vis[100];
int par[100];
bool flag;

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj_list[parent])
        {
            if (vis[child] && par[parent] != child)
                flag = true;
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                par[child] = parent;
            }
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

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            flag = false;
            BFS(i);
            if (flag)
                cout << "Cycle Detected";
        }
    }

    return 0;
}