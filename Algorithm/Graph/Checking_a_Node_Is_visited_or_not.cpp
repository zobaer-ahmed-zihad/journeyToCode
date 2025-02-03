#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        // cout << parent << " ";
        for (int child : adj[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e ;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int src, dest;
    cin>>src>>dest;

    BFS(src); // BFS Call

    (vis[dest]) ? cout << "Connected" : cout << "Not Connected";

    // if (vis[dest] == false)
    //     cout << "Not Connected";
    // else
    //     cout << "Connected";

    return 0;
}