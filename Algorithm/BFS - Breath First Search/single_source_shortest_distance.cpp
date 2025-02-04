#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int level[N];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
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
    cout << level[des];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> " << level[i] << endl;
    // }

    return 0;
}