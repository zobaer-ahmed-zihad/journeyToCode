#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int level[N];
int parent[N];
vector<int> adj[N];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src, des;
    cin >> src >> des;
    BFS(src);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> " << parent[i] << endl;
    // }
    vector<int> path;
    int node = des;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int v : path)
    {
        cout << v << " ";
    }

    return 0;
}