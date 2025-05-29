#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> adj_list[N];
// BFS Traversal
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << endl;

        // cout << parent << " - ";;

        for (int child : adj_list[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }

        // Alternative way

        // for (int i = 0; i < adj_list[parent].size(); i++)
        // {
        //     int child = adj_list[parent][i];
        //     if (vis[child] == false)
        //     {
        //         q.push(child);
        //         vis[child] = true;
        //     }
        // }
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

    BFS(0); // BFS Call

    return 0;
}